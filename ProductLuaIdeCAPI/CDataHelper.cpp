//
//  CDataHelper.cpp
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#include "CDataHelper.hpp"
#include "CParserHelper.hpp"

CDataHelper* CDataHelper::instance = nullptr;

CDataHelper* CDataHelper::getInstance()
{
    if (nullptr == instance) {
        instance = new CDataHelper();
    }
    return instance;
}

CDataHelper::CDataHelper()
: g_LuaAPICnt(0)
{
    mp_node_idx.clear();
}

CDataHelper::~CDataHelper()
{
}

void CDataHelper::init()
{
    mp_node_idx.clear();
    g_LuaAPICnt = 0;
}

// 输出指定个数空格
void CDataHelper::out_space(int space_cnt)
{
    for (int i = 0; i < space_cnt; ++i) {
        out << ' ';
    }
}

// 递归输出
void CDataHelper::recursive_out(int idx, int space_cnt)
{
    if (idx < 0 || idx >= MAX_NODE_COUNT || idx >= g_LuaAPICnt) {
        return;
    }
    
    // 输出项信息
    /// 开头
    out_space(space_cnt);
    out << arrLuaAPIData[idx].name << " = {" << std::endl;
    /// type
    int inner_space = space_cnt + 2;
    out_space(inner_space);
    out << "type = \"" << arrLuaAPIData[idx].type << "\"," << std::endl;
    /// description
    if (!arrLuaAPIData[idx].description.empty()) {
        out_space(inner_space);
        out << "description = [[description: " << arrLuaAPIData[idx].description << "]]," << std::endl;
    }
    
    /// args
    std::string strType = arrLuaAPIData[idx].type;
    if (!arrLuaAPIData[idx].args.empty()) {
        out_space(inner_space);
        out << "args = \'(" << arrLuaAPIData[idx].args << ")\'," << std::endl;
    } else if (NULL != strstr(strType.c_str(), "method")
               || NULL != strstr(strType.c_str(), "function")) {
        out_space(inner_space);
        out << "args = \"(void)\"," << std::endl;
    }
    
    /// returns
    if (!arrLuaAPIData[idx].returns.empty()) {
        out_space(inner_space);
        out << "returns = \"" << arrLuaAPIData[idx].returns << "\"," << std::endl;
    }
    
    /// valuetype
    if (!arrLuaAPIData[idx].valuetype.empty()) {
        out_space(inner_space);
        out << "valuetype = \"" << arrLuaAPIData[idx].valuetype << "\"," << std::endl;
    }
    
    /// inherits
    if (!arrLuaAPIData[idx].inherits.empty()) {
        out_space(inner_space);
        out << "inherits = \"" << arrLuaAPIData[idx].inherits << "\"," << std::endl;
    }
    
    /// childs
    int cnt_childs = arrLuaAPIData[idx].nChilds;
    if (cnt_childs > 0 || NULL != strstr(strType.c_str(), "class")) {
        out_space(inner_space);
        out << "childs = {" << std::endl;
    }
    for (int i = 0; i < arrLuaAPIData[idx].nChilds; ++i) {
        int child_idx = arrLuaAPIData[idx].arrChildInx[i];
        if (!used[child_idx]) {
            used[child_idx] = true;
            recursive_out(child_idx, inner_space + 2);
        }
    }
    if (cnt_childs > 0 || NULL != strstr(strType.c_str(), "class")) {
        out_space(inner_space);
        out << "}," << std::endl;
    }
    
    
    /// 结尾
    out_space(space_cnt);
    out << "}," << std::endl;
}

// 输出到文件中
void CDataHelper::output_2_file(const char* out_file)
{
    // 输出到指定文件
    out.open(out_file, std::ios::out);
    if (!out.is_open()) {
        printf("[write_to_file] error: cannot open file[%s] \n", out_file);
        exit(-1);
    }
    
    out << "return {" << std::endl;
    
    for (int i = 0; i < g_LuaAPICnt; ++i) {
        used[i] = false;
    }
    for (int i = 0; i < g_LuaAPICnt; ++i) {
        if (!used[i]) {
            used[i] = true;
            recursive_out(i, 2);
        }
    }
    
    out << "}" << std::endl;
    
    out.close();
}

// 添加域子项
bool CDataHelper::add_namespace_child(const std::string& cur_namespace, int child_idx)
{
    if (cur_namespace.empty() || mp_node_idx.end() == mp_node_idx.find(cur_namespace) || child_idx < 0) {
        return false;
    }
    int idx = mp_node_idx[cur_namespace];
    if (idx < 0) {
        return false;
    }
    
    arrLuaAPIData[idx].arrChildInx[arrLuaAPIData[idx].nChilds] = child_idx;
    ++ arrLuaAPIData[idx].nChilds;
    
    return true;
}

// 添加类子项
bool CDataHelper::add_class_child(const std::string& cur_namespace, const std::string& cur_class, int child_idx)
{
    if (cur_class.empty() || child_idx < 0) {
        return false;
    }
    std::string key = cur_namespace + cur_class;
    if (mp_node_idx.end() == mp_node_idx.find(key)) {
        return false;
    }
    int idx = mp_node_idx[key];
    if (idx < 0) {
        return false;
    }
    
    arrLuaAPIData[idx].arrChildInx[arrLuaAPIData[idx].nChilds] = child_idx;
    ++ arrLuaAPIData[idx].nChilds;
    
    return true;
}
// ===============保存数据===============
// namespace
void CDataHelper::store_namespace_lua_api_data(const std::string &name, const std::string& description /*=""*/)
{
    if (mp_node_idx.end() == mp_node_idx.find(name)) {
        mp_node_idx[name] = g_LuaAPICnt;
        int idx = g_LuaAPICnt;
        arrLuaAPIData[idx].name = name;
        arrLuaAPIData[idx].type = "lib";
        arrLuaAPIData[idx].description = description;
        if (description.empty()) {
            arrLuaAPIData[idx].description = "namespace ";
            arrLuaAPIData[idx].description += name;
        }
        arrLuaAPIData[idx].nChilds = 0;
        
        ++g_LuaAPICnt;
    }
}
// class
void CDataHelper::store_class_lua_api_data(const std::string& cur_namespace, const std::string& name, const std::string& inherits /* = ""*/, const std::string& description /*=""*/)
{
    // 获取index
    int idx = g_LuaAPICnt;
    bool bUpdateIdx = true;
    std::string key = cur_namespace + name;
    if (mp_node_idx.end() != mp_node_idx.find(key)) {
        idx = mp_node_idx[key];
        bUpdateIdx = false;
        printf("############ [store_class_lua_api_data] name[%s] has exist, update only!!!\n", name.c_str());
    }
    
    if (idx < 0 || idx >= MAX_NODE_COUNT || name.empty()) {
        return;
    }
    // 更新数据
    arrLuaAPIData[idx].name = name;
    arrLuaAPIData[idx].type = "class";
    arrLuaAPIData[idx].description = description;
    arrLuaAPIData[idx].nChilds = 0;
    arrLuaAPIData[idx].inherits = inherits;
    
    if (bUpdateIdx) {
        // 更新 父级/上级 数据
        add_namespace_child(cur_namespace, idx);
        
        // 更新index
        mp_node_idx[key] = idx;
        ++ g_LuaAPICnt;
    }
}
// function / method
void CDataHelper::store_func_lua_api_data(const std::string& cur_namespace, const std::string& cur_class, const std::string& name, const std::string& returns, const std::string& args, const std::string& valuetype /* ="" */, const std::string& description /* ="" */)
{
    // 获取index
    int idx = g_LuaAPICnt;
    if (idx < 0 || idx >= MAX_NODE_COUNT || name.empty()) {
        return;
    }
    
    // 更新数据
    arrLuaAPIData[idx].name = name;
    arrLuaAPIData[idx].type = "method";
    // description默认为函数参数列表
    arrLuaAPIData[idx].description = args.empty() ? "( void )" : args;
    arrLuaAPIData[idx].returns = returns;
    arrLuaAPIData[idx].valuetype = valuetype;
    arrLuaAPIData[idx].args = args;
    
    // 更新 父级/上级 数据
    if (!add_class_child(cur_namespace, cur_class, idx)) {
        add_namespace_child(cur_namespace, idx);
    }
    
    // 更新index
    // 重载情况，不更新索引
    std::string key = cur_namespace + cur_class + name;
    if (mp_node_idx.end() == mp_node_idx.find(key)) {
        mp_node_idx[key] = idx;
    } else if (!arrLuaAPIData[idx].description.empty()){
        int old_idx = mp_node_idx[key];
        // "--函数重载参数列表如下：\n"
        std::string strNew("");
        bool bFirst = false;
        if (arrLuaAPIData[old_idx].description.empty() || '-' == arrLuaAPIData[old_idx].description.at(0)) {
            strNew = "--函数重载参数列表如下：";
            bFirst = true;
        }
        if (!arrLuaAPIData[old_idx].description.empty()) {
            if (bFirst) {
                strNew += "   ( " + arrLuaAPIData[old_idx].description + " )";
            } else {
                strNew += "\n   " + arrLuaAPIData[old_idx].description;
            }
        }
        arrLuaAPIData[idx].description = strNew + "\n   ( " + arrLuaAPIData[idx].description + " )";
        
        mp_node_idx[key] = idx;
    }
    
    ++ g_LuaAPICnt;
}
// var
void CDataHelper::store_var_lua_api_data(const std::string& cur_namespace, const std::string& cur_class, const std::string& name, const std::string& valuetype /* ="" */)
{
    // 获取index
    int idx = g_LuaAPICnt;
    bool bUpdateIdx = true;
    std::string key = cur_namespace + cur_class + name;
    if (mp_node_idx.end() != mp_node_idx.find(key)) {
        idx = mp_node_idx[key];
        bUpdateIdx = false;
        printf("############ [store_var_lua_api_data] line[%d] cur_namespace[%s], cur_class[%s], name[%s] has exist, update only!!!\n"
               ,g_pCParserHelper->line_idx , cur_namespace.c_str(), cur_class.c_str(), name.c_str());
    }
    if (idx < 0 || idx >= MAX_NODE_COUNT || name.empty()) {
        return;
    }
    
    // 更新数据
    arrLuaAPIData[idx].name = name;
    arrLuaAPIData[idx].type = "value";
    arrLuaAPIData[idx].valuetype = valuetype;
    if (!valuetype.empty()) {
        arrLuaAPIData[idx].description = "var: " + valuetype;
    }
    
    if (bUpdateIdx) {
        // 更新 父级/上级 数据
        if (!add_class_child(cur_namespace, cur_class, idx)) {
            add_namespace_child(cur_namespace, idx);
        }
        
        // 更新index
        mp_node_idx[key] = idx;
        ++ g_LuaAPICnt;
    }
}
// ===============保存数据===============
