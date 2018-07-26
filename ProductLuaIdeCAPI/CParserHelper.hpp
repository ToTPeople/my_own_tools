//
//  CParserHelper.hpp
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#ifndef CParserHelper_hpp
#define CParserHelper_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

class CParserHelper
{
public:
    static CParserHelper* getInstance();
    
public:
    enum {
        LINE_MAX_CHAR_COUNT = 1024,
    };
    
    void init();
    
public:
    bool start_parser(std::ifstream& in);
    
    bool parser_namespace(std::ifstream& in, std::string strLine);
    bool parser_class(std::ifstream& in, std::string strLine);
    bool parser_struct(std::ifstream& in, std::string strLine);
    bool parser_enum(std::ifstream& in, std::string strLine);
    bool parser_function(std::ifstream& in, std::string strLine);
    bool parser_var(std::ifstream& in, std::string strLine);
    
    int parser_judge(std::ifstream& in, std::string& strLine, int cur_type);
    bool check_valid(int cur_type, int line_type);
    
protected:
    // 更新当前处理行序号
    void increase_line_index();
    // 选取哪种类型进行处理
    bool switch_2_to_do(std::ifstream& in, std::string strLine, int line_type);
    
    // 函数参数多行定义转换成一行
    void trans_func_param_multiline_2_oneline(std::ifstream& in, std::string& strLine);
    // 截取 { 之前部分
    
private:
    CParserHelper();
    ~CParserHelper();
    
private:
    static CParserHelper*   instance;
    std::map< std::string, std::string > mp_trans;
    
    bool                    is_end_file;
    char                    buf[LINE_MAX_CHAR_COUNT];
    std::string             cur_namespace;
    std::string             cur_class;
public:
    int                     line_idx;
};

#define g_pCParserHelper  (CParserHelper::getInstance())

#endif /* CParserHelper_hpp */
