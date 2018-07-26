#include "parser_func_param.h"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>

//#define DEBUG_SS

namespace {
    const int g_line_max_char_count = 1024;
    
    std::ifstream in;
    std::ofstream out;
    int line;                   // 记录读取文件行数，打印调试使用
    int pos;                    // 记录当前行字符处理偏移位置(x轴)
    
    // 要处理的　函数及处理第几个参数集合
    std::map< std::string, int> mp_func_name;
    // 名称转换映射
    std::map< std::string, std::string > mp_trans;
}

// 初始化
void init_();
// 转化
void trans_name(std::string strPre);

// 去掉左右空格、换行符 或 指定去掉字符
std::string trim_string(std::string s, std::string filter = " \t")
{
    if (s.empty())
    {
        return s;
    }
    
    s.erase(0, s.find_first_not_of(filter));
    s.erase(s.find_last_not_of(filter) + 1);
    
    return s;
}

//==========================================================================================================================================
int start_class_trans(const char* in_file, const char* out_file)
{
    if (NULL == in_file || NULL == out_file) {
        printf("[start_class_trans] error: NULL == in_file || NULL == out_file");
        exit(-1);
    }
    
    // 初始化
    init_();
    
    // 打开文件读、解析
    char buf[g_line_max_char_count];
    in.open(in_file);
    if (!in.is_open()) {
        std::cout << "Error opening in_file";
        exit (1);
    }
    
    // 输出到指定文件
    out.open(out_file, std::ios::out);
    if (!out.is_open()) {
        printf("[write_to_file] error: cannot open file[%s] \n", out_file);
        exit(-1);
    }
    
    char tmp[g_line_max_char_count];
    line = 0;
    while ( !in.eof() ) {
        pos = 0;
        ++ line;
        in.getline(buf, g_line_max_char_count - 1);
        
#ifdef DEBUG_SS
//        printf("******* %d: [%s] ------\n", line, buf_bak);
#endif
        
        // =====================================================================
        // 查找是否是要处理的行
        std::map< std::string, int >::iterator it = mp_func_name.begin();
        std::string strFuncName;
        int nParamIdx = -1;
        char* strFind;
        for (; it != mp_func_name.end(); ++it) {
            strFuncName = it->first;
            nParamIdx = it->second;
            strFind = strstr(buf, strFuncName.c_str());
            if (NULL != strFind) {
                break;
            }
        }
        if (mp_func_name.end() == it) {
            // 不需要替换，查找下一行
            out << buf << std::endl;
            continue;
        }
        
        pos = strFind - buf;
        std::string strPrimitive(strFind);                                  // FuncName(XXX,"AAA",XXX) XXXX
        std::string strFunc = strPrimitive.substr(strFuncName.length());    // XXX,"AAA",XXX) XXXX
        pos += strFuncName.length();
#ifdef DEBUG_SS
        printf("\nline:%d ******* strFunc[%s] ------\n", line, strFunc.c_str());
#endif
        // 提取函数参数内容 ();
        strFunc = trim_string(strFunc, ";");
        strFunc = trim_string(strFunc, ")");
        strFunc = trim_string(strFunc, "(");                                // XXX,"AAA",XXX) XXXX 或 XXX,"AAA",XXX
        pos += 1;
        // 以 "," 分隔取指定第几个参数
        {
            int curParamIdx = 1;
            char* p = strtok((char*)strFunc.c_str(), ",");
            char* pre = (char*)strFunc.c_str();
            while (NULL != p && curParamIdx <= nParamIdx) {
#ifdef DEBUG_SS
//                printf("******* param[%s] ---\n", p);
#endif
                // 第1段不用更新pos
                if (curParamIdx != 1) {
                    pos += (p - pre);
                    pre = p;
                }
                
                if (curParamIdx == nParamIdx) {
                    // 空字符直接处理下一行
                    {
                        std::string strTmp(p);
                        if (strTmp.empty()) {
                            printf("********* ####################################\n\n");
                            out << buf << std::endl;
                            break;
                        }
                    }
#ifdef DEBUG_SS
//                    printf("******* param[%s] ---\n\n", p);
#endif
                    // 输出前面部分内容
                    std::string ss(buf);
                    out << ss.substr(0, pos);
#ifdef DEBUG_SS
                    printf("pLeft[%s], p[%s], pre[%s]\n", ss.substr(0, pos).c_str(), p, pre);
#endif
                    // 处理
                    trans_name(std::string(p));                         // "AAA"XXXX -> AAA就是要处理的目录字符串
                    // 输出后面部分内容
                    ss = std::string(buf);
                    std::string strRight = ss.substr(pos+strlen(p));    // XXXX
#ifdef DEBUG_SS
                    printf("------ [lfs] buf[%s], strRight[%s]\n", buf, strRight.c_str());
#endif
                    out << strRight << std::endl;
                    break;
                }
                
                p = strtok(NULL, ",");
                ++curParamIdx;
            }
        }
        // =====================================================================
    }
    
    in.close();
    out.close();
    
    return 0;
}

// 解析指定目录下文件的类
int Parser_C_Class(const char* dir_path, const char* out_dir)
{
    if (NULL == dir_path || 0 == strcmp(dir_path, "")) {
        printf("[Parser_C_Class] error: NULL == dir_path || dir_path is empty.\n");
        exit(-1);
    }
    
    struct dirent *ptr;
    DIR *dir;
    char in_file[1024], out_file[1024];
    char cur_path[1024];
    
    dir = opendir(dir_path);
    if (NULL == dir) {
        printf("[Parser_C_Class] warning: open directory[%s] failed.\n", dir_path);
        exit(-1);
    }
    
//    getcwd(cur_path, 1024);
    strcpy(cur_path, out_dir);
    
    while ((ptr = readdir(dir)) != NULL) {
        // 跳过 .开头文件 及 非file类型文件
        if (ptr->d_name[0] == '.' || DT_REG != ptr->d_type) {
            continue;
        }
        
        printf("[Parser_C_Class] info: file[%s], type[%d]\n", ptr->d_name, ptr->d_type);
        // 读取.h 或 .hpp 文件加载
        char* pos = strrchr(ptr->d_name, '.');
        if (0 == strcmp(pos+1, "c") || 0 == strcmp(pos+1, "cpp")) {
            strcpy(in_file, dir_path);
            strcat(in_file, "/");
            strcat(in_file, ptr->d_name);
            
            strcpy(out_file, cur_path);
            strcat(out_file, "/");
            strcat(out_file, ptr->d_name);
            
            start_class_trans(in_file, out_file);
        }
    }
    
    closedir(dir);
    
    printf("[Parser_C_Class] info: well done! it's the end.\n");
    
    return 0;
}

static bool deal_trans(const std::string& str, bool bOut = false)
{
    // 去 "*" "&"
    std::string strTmp(str);                        // AAA
    std::string strA = trim_string(strTmp, "*");
    strA = trim_string(strA, "&");
    // 转换
    if (mp_trans.end() != mp_trans.find(strA)) {
#ifdef DEBUG_SS
        printf("******* after trans[%s] ------\n", mp_trans[strA].c_str());
#endif
        // 输出类型带"*"或"&"字符
        out << mp_trans[strA];
        int len = strTmp.length();
        for (int i=0; i<len; ++i) {
            char ch = strTmp.at(i);
            if (ch == '*' || ch == '&') {
                out << ch;
            }
        }
        //
        return true;
    }
    
    if (bOut) {
        out << str;
    }
    
    return false;
}

void trans_name(std::string strPre)
{
#ifdef DEBUG_SS
    printf("\nline:%d ******* trans_name[%s] ------\n", line, strPre.c_str());
#endif
    if (strPre.empty()) {
        out << "\"\"";
        return;
    }
    strPre = trim_string(strPre, "\n");             // "AAA"XXXX
    strPre = trim_string(strPre, "\r");
    strPre = trim_string(strPre, "\r\n");
    int LL = strPre.length();
    bool bLeft = strPre.empty() ? false : ('\"' == strPre.at(0));
    bool bRight = (LL > 1) ? ('\"' == strPre.at(LL - 1)) : false;
    
    if (bLeft) {
        out << "\"";
    }
    int start_pos = 0;
    int pre_pos = 1;
    std::string strRight("");
    // 去 ""
    strPre = trim_string(strPre, "\"");             // AAA"XXXX     或　AAA
    if (strPre.empty()) {
        if (bRight) {
            out << "\"";
        }
        return;
    }
    // 直接转换
    if (deal_trans(strPre)) {
        if (bRight) {
            out << "\"";
        }
        return;
    }
    // 找 "<" ">"
    char* pL = strstr((char*)strPre.c_str(), "<");
    if (NULL != pL) {
        char* pR = strstr((char*)strPre.c_str(), ">");
        if (NULL != pR) {
            int st = pL - strPre.c_str() + 1;
            int len = pR - pL - 1;
            //
            pre_pos = st;
            out << strPre.substr(start_pos, st - start_pos);
//            printf("------[lfs] st[%d], len[%d]\n", st+len, strPre.length() - st - len);
            strRight = strPre.substr(st+len, strPre.length() - st - len);
            strPre = strPre.substr(st, len);
        }
    }
    
    // 以　" "　拆分
    {
        char* p = strtok((char*)strPre.c_str(), " ");
        if (NULL == p) {
            deal_trans(std::string(p), true);
        } else {
            int cnt = 0;
            while (NULL != p) {
                if (cnt > 0) {
                    out << " ";
                }
                
                deal_trans(std::string(p), true);
                ++cnt;
                p = strtok(NULL, " ");
            }
        }
    }
    
my_end:
    out << strRight;
    if (bRight) {
        out << "\"";
    }
    return;
}

void init_()
{
    // 要处理的　函数及处理第几个参数集合 初始化
    mp_func_name.clear();
    mp_func_name["tolua_isusertable"] = 3;
    mp_func_name["tolua_isusertype"] = 3;
    mp_func_name["tolua_isusertypearray"] = 3;
    mp_func_name["tolua_usertype"] = 2;
    mp_func_name["tolua_class"] = 3;
    mp_func_name["tolua_cclass"] = 4;
    mp_func_name["tolua_pushusertype"] = 3;
    mp_func_name["tolua_pushusertype_and_takeownership"] = 3;
    mp_func_name["tolua_pushfieldusertype"] = 5;
    mp_func_name["tolua_pushfieldusertype_and_takeownership"] = 5;
    
    // 名称转换映射 初始化
    mp_trans.clear();
    // math
    mp_trans["Size"] = "media::Size";
    mp_trans["NS_MEDIA::Size"] = "media::Size";
    mp_trans["Vec2"] = "media::Vec2";
    mp_trans["Vec3"] = "media::Vec3";
    mp_trans["Vec4"] = "media::Vec4";
    mp_trans["Mat4"] = "media::Mat4";
    mp_trans["Rect"] = "media::Rect";
    mp_trans["NS_MEDIA::Rect"] = "media::Rect";
    mp_trans["Quaternion"] = "media::Quaternion";
    mp_trans["MathHelper"] = "media::MathHelper";
    mp_trans["MathUtil"] = "media::MathUtil";
    // base
    mp_trans["Ref"] = "media::Ref";
    mp_trans["MTData"] = "media::MTData";
    mp_trans["Color3B"] = "media::Color3B";
    mp_trans["Color4B"] = "media::Color4B";
    mp_trans["Color4F"] = "media::Color4F";
    mp_trans["Vertex3F"] = "media::Vertex3F";
    mp_trans["Tex2F"] = "media::Tex2F";
    mp_trans["V3F_C4F_T2F"] = "media::V3F_C4F_T2F";
    mp_trans["V3F_C4F_T2F_Quad"] = "media::V3F_C4F_T2F_Quad";
    mp_trans["FontShadow"] = "media::FontShadow";
    mp_trans["FontStroke"] = "media::FontStroke";
    mp_trans["FontDefinition"] = "media::FontDefinition";
    // platform
    mp_trans["FileHandle"] = "media::FileHandle";
    // graphics
    mp_trans["Texture2D"] = "media::Texture2D";
    mp_trans["Texture"] = "media::Texture";
    mp_trans["TextureCache"] = "media::TextureCache";
    mp_trans["Image"] = "media::Image";
    mp_trans["GraphicsSprite"] = "media::GraphicsSprite";
    mp_trans["TextureShader"] = "media::TextureShader";
    // graphics/opengl
    mp_trans["GLES20FramebufferObject"] = "media::GLES20FramebufferObject";
    mp_trans["GLES20FramebufferObjectCache"] = "media::GLES20FramebufferObjectCache";
    // core
    mp_trans["Frame"] = "media::Frame";
    mp_trans["AudioFrame"] = "media::AudioFrame";
    mp_trans["VideoFrame"] = "media::VideoFrame";
    mp_trans["Coordinate"] = "media::Coordinate";
    mp_trans["ClipBase"] = "media::ClipBase";
    mp_trans["Clip"] = "media::Clip";
    mp_trans["FontDefinition"] = "media::FontDefinition";
    mp_trans["Fraction"] = "media::Fraction";
    mp_trans["Keyframe"] = "media::Keyframe";
    mp_trans["MTMediaEffect"] = "media::MTMediaEffect";
    mp_trans["MTLinearShiftSpeedEffect"] = "media::MTLinearShiftSpeedEffect";
    mp_trans["MTBezierShiftSpeedEffect"] = "media::MTBezierShiftSpeedEffect";
    mp_trans["BezierParam"] = "media::BezierParam";
    mp_trans["Point"] = "media::Point";
    mp_trans["ReaderBase"] = "media::ReaderBase";
    // other
    mp_trans["GraphicsSprite"] = "media::GraphicsSprite";
    mp_trans["CBaseTimeLine"] = "media::CBaseTimeLine";
    mp_trans["GLES20ShaderMaker"] = "media::GLES20ShaderMaker";
    mp_trans["GLES20ShaderMakerFactory"] = "media::GLES20ShaderMakerFactory";
    mp_trans["GLES20Shader"] = "media::GLES20Shader";
    
    // ---------- namespace MMToolsGlobal ------------
    mp_trans["MMToolsGlobal"] = "MMTOOLS::MMToolsGlobal";
}
