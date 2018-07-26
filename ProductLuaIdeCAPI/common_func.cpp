//
//  common_func.cpp
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#include "common_func.hpp"


// 去掉左右空格、换行符 或 指定去掉字符
std::string trim_string(std::string s, std::string filter /* = " \t" */)
{
    if (s.empty())
    {
        return s;
    }
    
    s.erase(0, s.find_first_not_of(filter));
    s.erase(s.find_last_not_of(filter) + 1);
    
    return s;
}

// 去掉字符串s 前后子串filter
// src: "const int func(ff) const constconst"
// dst: " int func(ff) const "
std::string trim_both(std::string s, std::string filter)
{
    if (s.empty() || filter.empty()) {
        return s;
    }
    
    int lenF = filter.length();
    int lenS = s.length();
    if (lenS < lenF) {
        return s;
    }
    
    int lF = 0;
    int lR = lenS - 1;
    
    // left
    int i, j;
    for (i = 0; i < lenS;) {
        if (i + lenF > lenS) {
            break;
        }
        for (j = 0; j < lenF; ++j) {
            if (s.at(i+j) != filter.at(j)) {
                break;
            }
        }
        if (j < lenF) {
            break;
        }
        i += lenF;
    }
    lF = i;
    
    // right
    for (i = lenS-1; i > lF;) {
        if (lF + lenF > i) {
            break;
        }
        for (j = lenF-1; j >= 0; --j) {
            if (s.at(i+j+1-lenF) != filter.at(j)) {
                break;
            }
        }
        if (j >= 0) {
            break;
        }
        i -= lenF;
    }
    lR = i;
    
    s = s.substr(lF, lR-lF+1);
    
    return s;
}

// *************处理单行后面"//"注释，去掉
// 原：    int func( int a, double cc) const ;  // is s..
// 结果：  int func( int a, double cc) const ;
std::string trim_right_double_slash(std::string source)
{
    char* pNote = strstr((char*)source.c_str(), "//");
    if (NULL != pNote) {
        source = source.substr(0, pNote - source.c_str());
        source = trim_string(source, " ");
    }
    return source;
}
