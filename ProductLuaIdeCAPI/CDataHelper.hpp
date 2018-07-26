//
//  CDataHelper.hpp
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#ifndef CDataHelper_hpp
#define CDataHelper_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

class CDataHelper
{
public:
    static CDataHelper* getInstance();
    
public:
    enum {
        MAX_NODE_COUNT = 10010,
    };
    // 保存数据结构
    typedef struct LuaAPINode {
        std::string name;
        std::string type;
        std::string description;
        std::string args;
        std::string returns;
        std::string valuetype;
        std::string inherits;
        int         nChilds;
        int         arrChildInx[MAX_NODE_COUNT];
        
        LuaAPINode() : name(""), type(""), description(""), nChilds(0), args(""), returns(""), valuetype(""), inherits("") {
            memset(&arrChildInx, 0, sizeof(arrChildInx));
        }
    }LuaAPINode;
    
private:
    CDataHelper();
    ~CDataHelper();
    
public:
    // init
    void init();
    
    // 输出到文件中
    void output_2_file(const char* out_file);
    
    // 添加域子项
    bool add_namespace_child(const std::string& cur_namespace, int child_idx);
    // 添加类子项
    bool add_class_child(const std::string& cur_namespace, const std::string& cur_class, int child_idx);
    // ===============保存数据===============
    // namespace
    void store_namespace_lua_api_data(const std::string& name, const std::string& description = "");
    // class
    void store_class_lua_api_data(const std::string& cur_namespace, const std::string& name, const std::string& inherits="", const std::string& description="");
    // function / method
    void store_func_lua_api_data(const std::string& cur_namespace, const std::string& cur_class, const std::string& name, const std::string& returns, const std::string& args, const std::string& valuetype="", const std::string& description="");
    // var
    void store_var_lua_api_data(const std::string& cur_namespace, const std::string& cur_class, const std::string& name, const std::string& valuetype="");
    // ===============保存数据===============
    
protected:
    // 输出指定个数空格
    void out_space(int space_cnt);
    // 递归输出
    void recursive_out(int idx, int space_cnt);
    
private:
    static CDataHelper*  instance;
    
    std::ifstream in;
    std::ofstream out;
    
    LuaAPINode  arrLuaAPIData[MAX_NODE_COUNT];
    bool        used[MAX_NODE_COUNT];
    int         g_LuaAPICnt;
    std::map< std::string, int > mp_node_idx;           // 名称在数组下标
};

#define g_pCDataHelper  (CDataHelper::getInstance())

#endif /* CDataHelper_hpp */
