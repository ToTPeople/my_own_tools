//
//  CParserHelper.cpp
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#include "CParserHelper.hpp"
#include <stdlib.h>
#include <unistd.h>
#include "common_data.h"
#include "common_func.hpp"
#include "CDataHelper.hpp"

CParserHelper* CParserHelper::instance = nullptr;

CParserHelper* CParserHelper::getInstance()
{
    if (nullptr == instance) {
        instance = new CParserHelper();
    }
    return instance;
}

CParserHelper::CParserHelper()
: line_idx(0)
, is_end_file(false)
{
}

CParserHelper::~CParserHelper()
{
}

void CParserHelper::init()
{
    // 名称转换映射 初始化
    mp_trans.clear();
    // ---------- namespace media ------------
    // math
    mp_trans["Size"] = "media.Size";
    mp_trans["NS_MEDIA::Size"] = "media.Size";
    mp_trans["Vec2"] = "media.Vec2";
    mp_trans["Vec3"] = "media.Vec3";
    mp_trans["Vec4"] = "media.Vec4";
    mp_trans["Mat4"] = "media.Mat4";
    mp_trans["Rect"] = "media.Rect";
    mp_trans["NS_MEDIA::Rect"] = "media.Rect";
    mp_trans["Quaternion"] = "media.Quaternion";
    mp_trans["MathHelper"] = "media.MathHelper";
    mp_trans["MathUtil"] = "media.MathUtil";
    // base
    mp_trans["Ref"] = "media.Ref";
    mp_trans["Clonable"] = "media.Clonable";
    mp_trans["MTData"] = "media.MTData";
    mp_trans["MTMVConfig"] = "media.MTMVConfig";
    // platform
    mp_trans["FileHandle"] = "media.FileHandle";
    // graphics
    mp_trans["Texture2D"] = "media.Texture2D";
    mp_trans["Texture"] = "media.Texture";
    mp_trans["TextureCache"] = "media.TextureCache";
    mp_trans["Image"] = "media.Image";
    mp_trans["GraphicsSprite"] = "media.GraphicsSprite";
    mp_trans["GraphicsSprite"] = "media.GraphicsSprite";
    mp_trans["TextureShader"] = "media.TextureShader";
    // graphics/opengl
    mp_trans["GLES20FramebufferObject"] = "media.GLES20FramebufferObject";
    mp_trans["GLES20FramebufferObjectCache"] = "media.GLES20FramebufferObjectCache";
    // core
    mp_trans["Frame"] = "media.Frame";
    mp_trans["AudioFrame"] = "media.AudioFrame";
    mp_trans["VideoFrame"] = "media.VideoFrame";
    mp_trans["Coordinate"] = "media.Coordinate";
    mp_trans["ClipBase"] = "media.ClipBase";
    mp_trans["Clip"] = "media.Clip";
    mp_trans["FontDefinition"] = "media.FontDefinition";
    mp_trans["Fraction"] = "media.Fraction";
    mp_trans["Keyframe"] = "media.Keyframe";
    mp_trans["MTMediaEffect"] = "media.MTMediaEffect";
    mp_trans["MTLinearShiftSpeedEffect"] = "media.MTLinearShiftSpeedEffect";
    mp_trans["MTBezierShiftSpeedEffect"] = "media.MTBezierShiftSpeedEffect";
    mp_trans["BezierParam"] = "media.BezierParam";
    mp_trans["Point"] = "media.Point";
    mp_trans["ReaderBase"] = "media.ReaderBase";
    mp_trans["ReaderInfo"] = "media.ReaderInfo";
    // other
    mp_trans["GraphicsSprite"] = "media.GraphicsSprite";
    mp_trans["CBaseTimeLine"] = "media.CBaseTimeLine";
    mp_trans["GLES20ShaderMaker"] = "media.GLES20ShaderMaker";
    mp_trans["GLES20ShaderMakerFactory"] = "media.GLES20ShaderMakerFactory";
    mp_trans["GLES20Shader"] = "media.GLES20Shader";
    //
    
    // ---------- namespace MMToolsGlobal ------------
    mp_trans["MMToolsGlobal"] = "MMTOOLS.MMToolsGlobal";
}

bool CParserHelper::start_parser(std::ifstream& in)
{
    line_idx = 0;
    std::string strLine;
    int cur_type = LINE_TYPE_NONE;
    int line_type;
    is_end_file = false;
    while (1) {
        if (is_end_file) {
            break;
        }
        
        line_type = parser_judge(in, strLine, cur_type);
        switch_2_to_do(in, strLine, line_type);
    }
    
    return true;
}

bool CParserHelper::parser_namespace(std::ifstream& in, std::string strLine)
{
    int line_type;
    int nLeftB = 0;     // "{"相对于 "}"个数
    // ================= namespace 处理 =================
    // 更新 "{" 个数
    for (int i = strLine.length()-1; i >= 0; --i) {
        if ('{' == strLine.at(i)) {
            ++ nLeftB;
            break;
        }
    }
    // 提取域名
    std::string name = strLine.substr(10);
    name = trim_string(name, " ");
    name = trim_string(name, "\t");
    name = trim_string(name, "{");
    name = trim_string(name, " ");
    if (name.empty()) {
        printf("-=-=-=-=-=- [CParserHelper::parser_namespace] line[%d] namespace is empty!!!\n", line_idx);
        return false;
    }
    g_pCDataHelper->store_namespace_lua_api_data(name);
    
    cur_namespace = name;
    // ================= namespace 处理 =================
    while (1) {
        if (is_end_file) {
            break;
        }
        
        line_type = parser_judge(in, strLine, LINE_TYPE_NAMESPACE);
        bool sub_do = switch_2_to_do(in, strLine, line_type);
        if (!sub_do) {
            if (NULL != strstr(strLine.c_str(), "{")) {
                ++ nLeftB;
            } else if (NULL != strstr(strLine.c_str(), "}")) {
                -- nLeftB;
            }
            
            if (0 >= nLeftB) {
                break;
            }
        }
    }
    
    if (nLeftB > 0) {
        printf("-=-=-=-=-=- [CParserHelper::parser_namespace] namespace } not find nLeftB[%d] !!!\n", nLeftB);
        exit(-1);
    }
    cur_namespace = "";
    
    return true;
}

bool CParserHelper::parser_class(std::ifstream& in, std::string strLine)
{
    int line_type;
    int nLeftB = 0;     // "{"相对于 "}"个数
    // ================= class 处理 =================
    if (';' == strLine.at(strLine.length() - 1)) {
        // class CBase;　不处理
        printf("-=-=-=-=-=- [CParserHelper::parser_class] line[%d] not class define [%s] !!!\n", line_idx, strLine.c_str());
        return false;
    }
    
    // 更新 "{" 个数
    for (int i = strLine.length()-1; i >= 0; --i) {
        if ('{' == strLine.at(i)) {
            ++ nLeftB;
            break;
        }
    }
    
    // 提取class、继承类
    strLine = strLine.substr(6);
    strLine = trim_string(strLine, " ");
    strLine = trim_string(strLine, "{");
    strLine = trim_string(strLine, " ");
    std::string class_name("");
    std::string inh_name("");
    if (NULL == strstr(strLine.c_str(), ":")) {
        // 没有继承类
        //- 提取类名
        class_name = trim_string(strLine, " ");
        class_name = trim_string(class_name, "{");
        class_name = trim_string(class_name, " ");
        if (class_name.empty()) {
            printf("-=-=-=-=-=- [CParserHelper::parser_class] line[%d] empty !!!\n", line_idx);
            return false;
        }
        //- 保存class数据
        g_pCDataHelper->store_class_lua_api_data(cur_namespace, class_name);
    } else {
        char* pColon = strstr((char*)strLine.c_str(), ":");
        if (NULL != pColon) {
            std::string strPre = strLine.substr(0, pColon - strLine.c_str() - 1);
            // class name
            class_name = trim_string(strPre, " ");
            // inherited class name
            std::string strInher = strLine.substr(pColon - strLine.c_str() + 1);
            strInher = trim_string(strInher, " ");
            if (NULL == strstr(strInher.c_str(), ",")) {
                // 单继承
                inh_name = trim_both(strInher, "public");
                inh_name = trim_string(inh_name, " ");
                // 转换名称，加上域名
                if (mp_trans.end() != mp_trans.find(inh_name)) {
                    inh_name = mp_trans[inh_name];
                }
            } else {
                // 多继承
                char* p = strtok((char*)strInher.c_str(), ",");
                std::string strTmp("");
                int cnt = 0;
                while (NULL != p) {
                    strTmp = trim_both(std::string(p), "public");
                    strTmp = trim_string(strTmp, " ");
                    // 转换名称，加上域名
                    if (mp_trans.end() != mp_trans.find(strTmp)) {
                        strTmp = mp_trans[strTmp];
                    }
                    if (cnt > 0) {
                        inh_name += " ";
                    }
                    inh_name += strTmp;
                    
                    ++cnt;
                    p = strtok(NULL, ",");
                }
            }
            
            if (class_name.empty()) {
                printf("-=-=-=-=-=- [CParserHelper::parser_class] line[%d] empty !!!\n", line_idx);
                return false;
            }
            //- 保存class数据
            g_pCDataHelper->store_class_lua_api_data(cur_namespace, class_name, inh_name);
        }
    }
    
    // ================= class 处理 =================
    
    while (1) {
        if (is_end_file) {
            break;
        }
        
        cur_class = class_name;
        
        line_type = parser_judge(in, strLine, LINE_TYPE_CLASS);
        bool sub_do = switch_2_to_do(in, strLine, line_type);
        if (!sub_do) {
            if (NULL != strstr(strLine.c_str(), "{")) {
                ++ nLeftB;
            } else if (NULL != strstr(strLine.c_str(), "}")) {
                -- nLeftB;
            }
            
            if (0 >= nLeftB) {
                break;
            }
        }
    }
    
    if (nLeftB > 0) {
        printf("-=-=-=-=-=- [CParserHelper::parser_class] class } not find nLeftB[%d] !!!\n", nLeftB);
        exit(-1);
    }
    cur_class = "";
    
    return true;
}

bool CParserHelper::parser_struct(std::ifstream& in, std::string strLine)
{
    int line_type;
    int nLeftB = 0;     // "{"相对于 "}"个数
    // ================= class 处理 =================
    if (';' == strLine.at(strLine.length() - 1)) {
        // class CBase;　不处理
        printf("-=-=-=-=-=- [CParserHelper::parser_struct] line[%d] not struct define [%s] !!!\n", line_idx, strLine.c_str());
        return false;
    }
    
    // 更新 "{" 个数
    for (int i = strLine.length()-1; i >= 0; --i) {
        if ('{' == strLine.at(i)) {
            ++ nLeftB;
            break;
        }
    }
    
    // 吃掉 typedef
    strLine = trim_both(strLine, "typedef");
    strLine = trim_string(strLine, " ");
    
    // 提取struct
    strLine = strLine.substr(7);
    strLine = trim_string(strLine, " ");
    strLine = trim_string(strLine, "{");
    strLine = trim_string(strLine, " ");
    std::string class_name("");
    {
        //- 提取 struct 名称
        class_name = trim_string(strLine, " ");
        class_name = trim_string(class_name, "{");
        class_name = trim_string(class_name, " ");
        if (class_name.empty()) {
            printf("-=-=-=-=-=- [CParserHelper::parser_struct] line[%d] empty !!!\n", line_idx);
            return false;
        }
        //- 保存class数据
        g_pCDataHelper->store_class_lua_api_data(cur_namespace, class_name);
    }
    
    // ================= class 处理 =================
    
    while (1) {
        if (is_end_file) {
            break;
        }
        
        cur_class = class_name;
        
        line_type = parser_judge(in, strLine, LINE_TYPE_CLASS);
        bool sub_do = switch_2_to_do(in, strLine, line_type);
        if (!sub_do) {
            if (NULL != strstr(strLine.c_str(), "{")) {
                ++ nLeftB;
            } else if (NULL != strstr(strLine.c_str(), "}")) {
                -- nLeftB;
            }
            
            if (0 >= nLeftB) {
                break;
            }
        }
    }
    
    if (nLeftB > 0) {
        printf("-=-=-=-=-=- [CParserHelper::parser_struct] class } not find nLeftB[%d] !!!\n", nLeftB);
        exit(-1);
    }
    cur_class = "";
    
    return true;
}

bool CParserHelper::parser_enum(std::ifstream& in, std::string strLine)
{
    int line_type;
    int nLeftB = 0;     // "{"相对于 "}"个数
    // ================= enum 处理 =================
    // 更新 "{" 个数
    for (int i = strLine.length()-1; i >= 0; --i) {
        if ('{' == strLine.at(i)) {
            ++ nLeftB;
            break;
        }
    }
    // 提取 enum 名称，enum名称不用存储
    std::string name = strLine.substr(10);
    name = trim_string(name, " ");
    name = trim_string(name, "\t");
    name = trim_string(name, "{");
    name = trim_string(name, " ");
    if (name.empty()) {
        printf("-=-=-=-=-=- [CParserHelper::parser_enum] line[%d] enum is empty!!!\n", line_idx);
        return false;
    }
    
    // ================= enum 处理 =================
    while (1) {
        if (is_end_file) {
            break;
        }
        
        line_type = parser_judge(in, strLine, LINE_TYPE_NAMESPACE);
        // 处理 enum 变量
        {
            // 更新 "{" "}" 个数
            if (NULL != strstr(strLine.c_str(), "{")) {
                ++ nLeftB;
            } else if (NULL != strstr(strLine.c_str(), "}")) {
                -- nLeftB;
            }
            
            strLine = trim_string(strLine, " ");
            strLine = trim_string(strLine, "\t");
            strLine = trim_string(strLine, " ");
            strLine = trim_string(strLine, "{");
            strLine = trim_string(strLine, " ");
            strLine = trim_string(strLine, ";");
            strLine = trim_string(strLine, " ");
            if (strLine.empty()) {
                continue;
            }
            
            std::string strEnumVar("");
            int len = strLine.length();
            for (int i = 0; i < len; ++i) {
                char ch = strLine.at(i);
                if (' ' == ch || ',' == ch || '}' == ch) {
                    break;
                }
                strEnumVar += ch;
            }
            
            if (!strEnumVar.empty()) {
                g_pCDataHelper->store_var_lua_api_data(cur_namespace, cur_class, strEnumVar);
            }
            
            if (0 >= nLeftB) {
                break;
            }
        }
    }
    
    if (nLeftB > 0) {
        printf("-=-=-=-=-=- [CParserHelper::parser_enum] enum } not find nLeftB[%d] !!!\n", nLeftB);
        exit(-1);
    }
    
    return true;
}

bool CParserHelper::parser_function(std::ifstream& in, std::string strLine)
{
    // 2种情况：
    //    一种包含函数实现
    //      int func (int x, int y) { ... }
    //    一种只包含定义
    //      int func (int x, int y);
    int line_type;
    int nLeftB = 0;     // "{"相对于 "}"个数
    bool has_func_body = false;     // 函数是否有实现体部分
    // ================= function 处理 =================
    {
        // *************处理函数
        // 多行合并成一行
        trans_func_param_multiline_2_oneline(in, strLine);
        // 截取 { 之前部分
        char* pLK = strstr((char*)strLine.c_str(), "{");
        if (NULL != pLK) {
            has_func_body = true;
            char* pRK = strstr((char*)strLine.c_str(), "}");
            strLine = strLine.substr(0, pLK - strLine.c_str() - 1);
            strLine = trim_string(strLine, " ");
            
            // 不在同一行时，吃掉多行函数体
            if (NULL == pRK) {
                int nLB = 1; // 左"{"在于右"}"个数，为0时完成
                int ll;
                while (1) {
                    increase_line_index();
                    in.getline(buf, LINE_MAX_CHAR_COUNT - 1);
                    ll = strlen(buf);
                    for (int i = 0; i < ll; ++i) {
                        if ('{' == buf[i]) {
                            ++ nLB;
                        } else if ('}' == buf[i]) {
                            -- nLB;
                        }
                    }
                    
                    if (nLB <= 0) {
                        break;
                    }
                }
            }
        } else if (';' != strLine.at(strLine.length() - 1)) {
            // 处理以下场景，吃掉
            // int func ( int x, int y )
            // {
            // }
            //  或
            // ClassA()
            // : v(0)
            // {}
            int ll;
            int nLB = 0;
            bool bFindLB = false;
            while (1) {
                increase_line_index();
                in.getline(buf, LINE_MAX_CHAR_COUNT - 1);
                ll = strlen(buf);
                if (ll < 1) {
                    continue;
                }
                for (int i = 0; i < ll; ++i) {
                    if ('{' == buf[i]) {
                        ++ nLB;
                        bFindLB = true;
                    } else if ('}' == buf[i]) {
                        -- nLB;
                    }
                }
                
                if (nLB <= 0 && bFindLB) {
                    break;
                }
            }
        } else {
            // 处理虚函数，如果是的话，去掉后面的 " = 0;"部分
            // int func (int x, int y ) = 0  ;   //　虚函数
            bool is_pure_virtual = false;
            int i;
            for (i = strLine.length() - 2; i >= 0; --i) {
                char ch = strLine.at(i);
                if (' ' == ch) {
                    continue;
                }
                if ('0' == ch) {
                    is_pure_virtual = true;
                }
                break;
            }
            if (is_pure_virtual) {
                for (; i >= 0; --i) {
                    if ('=' == strLine.at(i)) {
                        break;
                    }
                }
                strLine = strLine.substr(0, i);
                strLine = trim_string(strLine, " ");
            }
        }
        
        // 不处理 operator
        if (NULL != strstr(strLine.c_str(), "operator")) {
            return true;
        }
        
        // 去前后const static
        strLine = trim_string(strLine, ";");
        strLine = trim_string(strLine, " ");
        strLine = trim_both(strLine, "inline");
        strLine = trim_string(strLine, " ");
        strLine = trim_both(strLine, "static");
        strLine = trim_string(strLine, " ");
        strLine = trim_both(strLine, "const");
        strLine = trim_string(strLine, " ");
        strLine = trim_both(strLine, "virtual");
        strLine = trim_string(strLine, " ");
        
        // "return *& Func ( args , args )"
        char* pLBrackets = strstr((char*)strLine.c_str(), "(");
        int nLBrackPos = pLBrackets - strLine.c_str();
        int len = strLine.length();
        /// 提取函数参数
        std::string args = strLine.substr(nLBrackPos+1, len - nLBrackPos - 2);
        args = trim_string(args, " ");
        args = trim_string(args, "(");
        args = trim_string(args, ")");
        args = trim_string(args, " ");
        
        // "return *& Func " 或　"构造、析构函数"
        if ('~' == strLine.at(0)) {
            // tolua++ 转换成 "delete"函数
            g_pCDataHelper->store_func_lua_api_data(cur_namespace, cur_class, "delete", "void", "", "");
            return true;
        } else if (0 == strncmp(strLine.c_str(), cur_class.c_str(), cur_class.length())) {
            // 构造函数处理
            bool is_construct = false;
            for (int i = cur_class.length(); i < strLine.length(); ++i) {
                char ch = strLine.at(i);
                if (' ' == ch) {
                    continue;
                }
                if ('(' == ch) {
                    is_construct = true;
                    break;
                } else {
                    break;
                }
            }
            if (is_construct) {
                // "new" 、"new_local"、".call"
                g_pCDataHelper->store_func_lua_api_data(cur_namespace, cur_class, "new", "void", args);
                g_pCDataHelper->store_func_lua_api_data(cur_namespace, cur_class, "new_local", "void", args);
                return true;
            }
        }
        strLine = strLine.substr(0, nLBrackPos);
        strLine = trim_string(strLine, " ");
        strLine = trim_string(strLine, "(");
        strLine = trim_string(strLine, " ");
        /// 提取函数名称
        len = strLine.length();
        std::string func_name("");
        int pos = -1;
        for (int i = len - 1; i >= 0; --i) {
            char ch = strLine.at(i);
            if (' ' == ch || '*' == ch || '&' == ch) {
                pos = i+1;
                for (int j = i+1; j < len; ++j) {
                    func_name += strLine.at(j);
                }
                break;
            }
        }
        
        // "return *& "
        strLine = strLine.substr(0, pos);
        /// 提取return值
        std::string strReturn = strLine;
        /// 提取valuetype值(如果有)
        strLine = trim_string(strLine, " ");
        strLine = trim_string(strLine, "&");
        strLine = trim_string(strLine, "*");
        strLine = trim_string(strLine, "&");
        strLine = trim_string(strLine, " ");
        std::string valueType = strLine;
        if (mp_trans.end() != mp_trans.find(strLine)) {
            valueType = mp_trans[strLine];
        }
        
        g_pCDataHelper->store_func_lua_api_data(cur_namespace, cur_class, func_name, strReturn, args, valueType);
    }
    // ================= function 处理 =================
    
    // 有函数体时，才判断 "{" 与 "}" 是否配对
    if (has_func_body && nLeftB > 0) {
        printf("-=-=-=-=-=- [CParserHelper::parser_function] line[%d] function } not find nLeftB[%d] !!!\n", line_idx, nLeftB);
        exit(-1);
    }
    
    return true;
}

bool CParserHelper::parser_var(std::ifstream& in, std::string strLine)
{
    int line_type;
    // ================= var 处理 =================
    strLine = trim_string(strLine, "\t");
    strLine = trim_string(strLine, " ");
    // 变量要以 ";" 结尾，不然不处理
    if (';' != strLine.at(strLine.length() - 1)) {
        printf("-=-=-=-=-=- [CParserHelper::parser_var] line[%d] [%s] not a var !!!\n", line_idx, strLine.c_str());
        return false;
    }
    strLine = trim_string(strLine, ";");
    strLine = trim_string(strLine, " ");
    if (strLine.empty()) {
        printf("-=-=-=-=-=- [CParserHelper::parser_var] line[%d] empty line !!!\n", line_idx);
        return false;
    }
    
    // 扫描 "," 确定变量个数（可能偏多，如 std::function< void(int, int) >），从前往后
    int cnt_var = 1;
    int len = strLine.length();
    for (int i = len - 1; i >= 0; --i) {
        char ch = strLine.at(i);
        if (',' == ch) {
            ++ cnt_var;
        }
    }
    
    std::string strVar[32];
    std::string strValueType("");
    bool is_end = false;
    int i = len - 1;
    int iE = len;
    for (int cc = 0; cc < cnt_var; ++cc) {
        strVar[cc] = "";
        for (; i >= 0; --i) {
            char ch = strLine.at(i);
            if (']' == ch) {
                for (; i >= 0; --i) {
                    ch = strLine.at(i);
                    if ('[' == ch) {
                        iE = i;
                        break;
                    }
                }
//                strVar = "";
            } else if (',' == ch || '>' == ch) {
                if ('>' == ch) {
                    is_end = true;
                    cnt_var = cc + 1;
                }
                for (int j = i+1; j < iE; ++j) {
                    strVar[cc] += strLine.at(j);
                }
                break;
            } else if (' ' == ch || '&' == ch || '*' == ch) {
                for (int j = i+1; j < iE; ++j) {
                    strVar[cc] += strLine.at(j);
                }
                // 吃掉 "," 之后所有空格或字符
                if (cc+1 < cnt_var) {
                    for (; i >= 0; --i) {
                        char ch = strLine.at(i);
                        if (',' == ch) {
                            break;
                        }
                    }
                }
                break;
            }
        }
        
//        if (!strVar.empty()) {
//            g_pCDataHelper->store_var_lua_api_data(cur_namespace, cur_class, strVar);
//        }
        if (is_end) {
            break;
        }
        
        iE = i;
        --i;
    }
    // get valuetype
    for (int j = 0; j <= i; ++j) {
        strValueType += strLine.at(j);
    }
    strValueType = trim_string(strValueType, " ");
    strValueType = trim_both(strValueType, "static");
    strValueType = trim_string(strValueType, " ");
    strValueType = trim_both(strValueType, "const");
    strValueType = trim_string(strValueType, " ");
    strValueType = trim_both(strValueType, "static");
    strValueType = trim_string(strValueType, " ");
    if (mp_trans.end() != mp_trans.find(strValueType)) {
        strValueType = mp_trans[strValueType];
    }
    
    for (int j = 0; j < cnt_var; ++j) {
        if (!strVar[j].empty()) {
            g_pCDataHelper->store_var_lua_api_data(cur_namespace, cur_class, strVar[j], strValueType);
        }
    }
    // ================= var 处理 =================
    
    return true;
}

int CParserHelper::parser_judge(std::ifstream& in, std::string& strLine, int cur_type)
{
    bool is_multi_mark = false;     // 多行注释
    
    while ( !in.eof() ) {
        increase_line_index();
        in.getline(buf, LINE_MAX_CHAR_COUNT - 1);
        
        strLine = trim_string(std::string(buf), " ");
        strLine = trim_string(strLine, "\t");
        
        //////-----//////-----//////-----//////-----//////-----//////-----
        // *************注释过滤
        // 多行过滤
        if (is_multi_mark) {
            if (NULL != strstr(strLine.c_str(), "*/")) {
                is_multi_mark = false;
            }
            continue;
        }
        if (NULL != strstr(strLine.c_str(), "/*")) {
            if (NULL == strstr(strLine.c_str(), "*/")) {
                is_multi_mark = true;
            }
            continue;
        }
        // 单行过滤
        if (0 == strncmp(strLine.c_str(), "//", 2)) {
            continue;
        }
        
        // *************处理单行后面"//"注释，去掉
        strLine = trim_right_double_slash(strLine);
        strLine = trim_string(strLine, " ");
        strLine = trim_string(strLine, "\t");
        strLine = trim_string(strLine, " ");
        //////-----//////-----//////-----//////-----//////-----//////-----
        
        if (strLine.empty()) {
            continue;
        }
        
        // ************* namespace
        if (0 == strncmp(strLine.c_str(), "namespace", 9)) {
            check_valid(cur_type, LINE_TYPE_NAMESPACE);
            return LINE_TYPE_NAMESPACE;
        }
        // ************* class
        else if (0 == strncmp(strLine.c_str(), "class", 5)) {
            if (';' == strLine.at(strLine.length() - 1)) {
                // class CBase;　不处理
                continue;
            }
            
            check_valid(cur_type, LINE_TYPE_CLASS);
            return LINE_TYPE_CLASS;
        }
        // ************* struct
        else if (0 == strncmp(strLine.c_str(), "struct", 6)
                 || NULL != strstr(strLine.c_str(), " struct ")) {
            check_valid(cur_type, LINE_TYPE_STRUCT);
            return LINE_TYPE_STRUCT;
        }
        // ************* enum
        else if (0 == strncmp(strLine.c_str(), "enum", 4)
                 || NULL != strstr(strLine.c_str(), " enum ")) {
            check_valid(cur_type, LINE_TYPE_ENUM);
            return LINE_TYPE_ENUM;
        }
        // 属性判断，吃掉
        else if (0 == strncmp(strLine.c_str(), "public:", 7)
                 || 0 == strncmp(strLine.c_str(), "protected:", 10)
                 || 0 == strncmp(strLine.c_str(), "private:", 8)) {
            continue;
        }
        // typedef不处理
        // typedef struct , typedef enum 前面已预先处理，此处不用考滤
        else if (0 == strncmp(strLine.c_str(), "typedef", 7)) {
            continue;
        }
        // ************* function
        else if (NULL != strstr(strLine.c_str(), "(")) {
            check_valid(cur_type, LINE_TYPE_FUNCTION);
            return LINE_TYPE_FUNCTION;
        }
        else {
            if (strLine.empty()) {
                continue;
            }
            if (';' != strLine.at(strLine.length() - 1)
                || NULL != strstr(strLine.c_str(), "{")
                || NULL != strstr(strLine.c_str(), "}")
                || NULL != strstr(strLine.c_str(), "$")
                ) {
                return LINE_TYPE_UNKNOW;
            }
            
            // ************* var
            check_valid(cur_type, LINE_TYPE_VAR);
            return LINE_TYPE_VAR;
        }
    }
    
    is_end_file = true;
    return LINE_TYPE_UNKNOW;
}

bool CParserHelper::check_valid(int cur_type, int line_type)
{
    if (line_type >= LINE_TYPE_MAX || line_type <= LINE_TYPE_NONE) {
        printf("-=-=-=-=-=-=- [CParserHelper::check_valid] line type[%d] error\n", line_type);
        exit(-1);
    }
    
    switch (cur_type) {
        case LINE_TYPE_NONE: {
            return true;
        }
            break;
        case LINE_TYPE_NAMESPACE: {
            if (LINE_TYPE_NAMESPACE < line_type) {
                return true;
            }
        }
            break;
        case LINE_TYPE_CLASS: {
            if (LINE_TYPE_CLASS <= line_type) {
                return true;
            }
        }
            break;
        case LINE_TYPE_STRUCT: {
            if (LINE_TYPE_CLASS <= line_type) {
                return true;
            }
        }
            break;
        case LINE_TYPE_ENUM: {
            // 不能处理其他类型
        }
            break;
        case LINE_TYPE_UNION: {
            if (LINE_TYPE_CLASS <= line_type) {
                return true;
            }
        }
            break;
        case LINE_TYPE_FUNCTION: {
            // 不能处理其他类型
        }
            break;
        case LINE_TYPE_VAR: {
            // 不能处理其他类型
        }
            break;
        case LINE_TYPE_UNKNOW: {
            return true;
        }
            break;
            
        default:
            printf("-=-=-=-=-=-=- [CParserHelper::check_valid] unknow type[%d]\n", cur_type);
            exit(-1);
            break;
    }
    
    printf("-=-=-=-=-=-=- [CParserHelper::check_valid] cur_type[%d], line_type[%d] !!!\n", cur_type, line_type);
    exit(-1);
    return false;
}

void CParserHelper::increase_line_index()
{
    ++ line_idx;
}

bool CParserHelper::switch_2_to_do(std::ifstream& in, std::string strLine, int line_type)
{
    bool has_do = true;
    switch (line_type) {
        case LINE_TYPE_NAMESPACE: {
            parser_namespace(in, strLine);
        }
            break;
        case LINE_TYPE_CLASS: {
            parser_class(in, strLine);
        }
            break;
        case LINE_TYPE_STRUCT: {
            parser_struct(in, strLine);
        }
            break;
        case LINE_TYPE_ENUM: {
            parser_enum(in, strLine);
        }
            break;
        case LINE_TYPE_UNION: {
            //                parser_union(in, strLine);
            has_do = false;
        }
            break;
        case LINE_TYPE_FUNCTION: {
            parser_function(in, strLine);
        }
            break;
        case LINE_TYPE_VAR: {
            parser_var(in, strLine);
        }
            break;
            
        case LINE_TYPE_NONE:
        case LINE_TYPE_UNKNOW: {
            has_do = false;
        }
            break;
            
        default: {
            has_do = false;
        }
            break;
    }
    
    return has_do;
}

// 函数参数多行定义转换成一行
void CParserHelper::trans_func_param_multiline_2_oneline(std::ifstream& in, std::string& strLine)
{
    std::string strMulti;
    if (NULL == strstr((char*)strLine.c_str(), ")")) {
        while (1) {
            increase_line_index();
            in.getline(buf, LINE_MAX_CHAR_COUNT - 1);
            strMulti = buf;
            strMulti = trim_string(strMulti, " ");
            strMulti = trim_string(strMulti, "\t");
            strMulti = trim_string(strMulti, " ");
            strLine += strMulti;
            if (NULL != strstr(buf, ")")) {
                break;
            }
        }
    }
}
