//
//  common_func.hpp
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#ifndef common_func_hpp
#define common_func_hpp

#include <stdio.h>
#include <string>

// 去掉左右空格、换行符 或 指定去掉字符
std::string trim_string(std::string s, std::string filter = " \t");

// 去掉字符串s 前后子串filter
std::string trim_both(std::string s, std::string filter);

// *************处理单行后面"//"注释，去掉
std::string trim_right_double_slash(std::string source);

#endif /* common_func_hpp */
