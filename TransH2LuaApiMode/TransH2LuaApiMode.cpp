#include "TransH2LuaApiMode.h"
#include <string>
#include <vector>
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
    
    enum class CurAttri{
        ATTRI_PUBLIC = 0x01,
        ATTRI_PROTECTED,
        ATTRI_PRIVATE,
        ATTRI_OTHER,
    };
}

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
    CurAttri　curAttr = CurAttri::ATTRI_OTHER;
    bool is_tip = false;        // 是否是多行注释
    std::vector<std::string> vecParamsType;
    std::vector<std::string> vecParamsName;
    std::string strRtType("");
    std::string strRealFuncName("");
    int cnt;
    while ( !in.eof() ) {
        pos = 0;
        ++ line;
        in.getline(buf, g_line_max_char_count - 1);
        
#ifdef DEBUG_SS
//        printf("******* line[%d]: [%s] ------\n", line, buf);
#endif
        
        std::string strLine(buf);
        // 去掉" " "\t"
        strLine = trim_string(strLine, " ");
        strLine = trim_string(strLine, "\t");
        strLine = trim_string(strLine, "\n");
        if (strLine.empty()) {
            continue;
        }
        // 判断属性
        if (NULL != strstr(buf, "public:")) {
            curAttr = CurAttri::ATTRI_PUBLIC;
        } else if (NULL != strstr(buf, "protected:")) {
            curAttr = CurAttri::ATTRI_PROTECTED;
        } else if (NULL != strstr(buf, "private:")) {
            curAttr = CurAttri::ATTRI_PRIVATE;
        }
        
#ifdef DEBUG_SS
//        printf("******* line[%d]: [%s][%d] ------\n", line, strLine.c_str(), (int)curAttr);
#endif
        
        // 注释 // /* */
        if (is_tip) {
            if (NULL != strstr(buf, "*/")) {
                is_tip = false;
            }
            continue;
        }
        if (NULL != strstr(buf, "/*")) {
            if ( NULL == strstr(buf, "*/") ) {
                is_tip = true;
            }
            continue;
        }
        if (strLine.length() > 1) {
            if ('/' == strLine.at(0) && '/' == strLine.at(1)) {
                continue;
            }
        }
        
        // 函数判断 (
        char* pL = strstr((char*)(strLine.c_str()), "(");
        char* pR = strstr((char*)(strLine.c_str()), ")");
        if (NULL == pL || NULL == pR) {
            continue;
        }
        
        vecParamsType.clear();
        vecParamsName.clear();
        cnt = 0;
        int iL = pL - strLine.c_str();
        std::string strFuncName = strLine.substr(0, iL);
        std::string strFuncParams = strLine.substr(iL+1, pR - pL - 1);
#ifdef DEBUG_SS
        printf("******* line[%d] funcName[%s], params[%s] ------\n", line, strFuncName.c_str(), strFuncParams.c_str());
#endif
        // 函数名称解析
        {
            strFuncName = trim_string(strFuncName, " ");
            char ch;
            for (int i = strFuncName.length() - 2; i >= 0; --i) {
                ch = strFuncName.at(i);
                if (' ' == ch || '&' == ch || '*' == ch || '>' == ch) {
                    strRtType = strFuncName.substr(0, i+1);
                    strRealFuncName = strFuncName.substr(i+1, strFuncName.length() - i);
#ifdef DEBUG_SS
                    printf("******* funcName: type[%s], name[%s] ------\n", strRtType.c_str(), strRealFuncName.c_str());
#endif
                    break;
                }
            }
        }
        
        // 函数参数解析
        char* p = strtok((char*)(strFuncParams.c_str()), ",");
        int len = 0, i;
        std::string ss;
        char ch;
        while (NULL != p) {
            ss = p;
            ss = trim_string(ss, " ");
#ifdef DEBUG_SS
            printf("******* param: ss[%s] ------\n", ss.c_str());
#endif
            if (ss.length() < 1) {
                p = strtok(NULL, ",");
                continue;
            }
            ch = ss.at(ss.length() - 1);
            if (ch == ' ' || '&' == ch || '*' == ch || '>' == ch) {
                continue;
            }
            for (i = ss.length() - 2; i >= 0; --i) {
                ch = ss.at(i);
                if (' ' == ch || '&' == ch || '*' == ch || '>' == ch) {
#ifdef DEBUG_SS
                    std::string strType = ss.substr(0, i+1);
                    std::string strName = ss.substr(i+1, ss.length() - i - 1);
                    printf("******* param: type[%s], name[%s] ------\n", strType.c_str(), strName.c_str());
                    vecParamsType.push_back(strType);
                    vecParamsName.push_back(strName);
#else
                    vecParamsType.push_back(ss.substr(0, i));
                    vecParamsName.push_back(ss.substr(i+1, ss.length() - i - 1));
#endif
                    ++ cnt;
                    break;
                }
            }
            
            p = strtok(NULL, ",");
        }
        // =====================================================================
        // 输出到文件中
        out << "--------------------------------------" << std::endl;
        for (int i = 0; i < vecParamsType.size(); ++i) {
            if ( 0 == i ) {
                out << "-- param: " << std::endl;
            }
            out << "--- " << vecParamsName[i] << ":\t\t\t" << vecParamsType[i] << std::endl;
        }
        out << "-- return:\t\t\t" << strRtType << std::endl;
        if ( CurAttri::ATTRI_PRIVATE == curAttr) {
            out << "-- Attributes:\t\tprivate" << std::endl;
        } else if ( CurAttri::ATTRI_PROTECTED == curAttr ) {
            out << "-- Attributes:\t\tprotected" << std::endl;
        } else {
            out << "-- Attributes:\t\tpublic" << std::endl;
        }
        out << "--------------------------------------" << std::endl;
        if ( CurAttri::ATTRI_PRIVATE == curAttr) {
            out << "local ";
        }
        out << "function TTTtestTTT:" << strRealFuncName << "( ";
        for (int i = 0; i < vecParamsName.size(); ++i) {
            if ( i > 0 ) {
                out << ", ";
            }
            out << vecParamsName[i];
        }
        out << " )\nend\n" << std::endl;
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
        
        // 读取.h 或 .hpp 文件加载
        char* pos = strrchr(ptr->d_name, '.');
        if (0 == strcmp(pos+1, "h") || 0 == strcmp(pos+1, "hpp")) {
            printf("[Parser_C_Class] info: file[%s], type[%d]\n", ptr->d_name, ptr->d_type);
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
