#include "product_lua_ide_api.h"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include "common_func.hpp"
#include "CDataHelper.hpp"
#include "CParserHelper.hpp"

#define DEBUG_SS

namespace {
    const int g_line_max_char_count = 1024;
    
    std::ifstream in;
}

// 初始化
void init_();

//==========================================================================================================================================
int start_trans(const char* in_file, const char* out_file)
{
    if (NULL == in_file) {
        printf("[start_class_trans] error: NULL == in_file");
        exit(-1);
    }
    
    // 打开文件读、解析
    char buf[g_line_max_char_count];
    in.open(in_file);
    if (!in.is_open()) {
        std::cout << "Error opening in_file";
        exit (1);
    }
    
    g_pCParserHelper->start_parser(in);
    
    in.close();
    
    return 0;
}

// 遍历处理文件夹
static void recursive_dir(const char* dir_path)
{
    if (NULL == dir_path || 0 == strcmp(dir_path, "")) {
        printf("[recursive_dir] error: NULL == dir_path || dir_path is empty.\n");
        exit(-1);
    }
    
    struct dirent *ptr;
    DIR *dir;
    char in_file[1024];
    char childpath[1024];
    
    dir = opendir(dir_path);
    if (NULL == dir) {
        printf("[recursive_dir] warning: open directory[%s] failed.\n", dir_path);
        exit(-1);
    }
    
    while ((ptr = readdir(dir)) != NULL) {
        // 跳过 .开头文件 及 非file类型文件
        if (ptr->d_name[0] == '.') {
            continue;
        }
        // 递归遍历文件夹
        if (DT_DIR == ptr->d_type) {
            sprintf(childpath, "%s/%s",dir_path, ptr->d_name);
            printf("path:%s/n", childpath);
            
            recursive_dir(childpath);
        }
        
        if (DT_REG != ptr->d_type) {
            continue;
        }
        
        printf("[recursive_dir] info: file[%s], type[%d]\n", ptr->d_name, ptr->d_type);
        // 读取.pkg 文件加载
        char* pos = strrchr(ptr->d_name, '.');
        if (0 == strcmp(pos+1, "pkg")) {
            strcpy(in_file, dir_path);
            strcat(in_file, "/");
            strcat(in_file, ptr->d_name);
            
            start_trans(in_file, "");
        }
    }
    
    closedir(dir);
}

// 解析指定目录下文件的类
int parser_dir(const char* dir_path, const char* out_dir)
{
    if (NULL == dir_path || 0 == strcmp(dir_path, "")) {
        printf("[parser_dir] error: NULL == dir_path || dir_path is empty.\n");
        exit(-1);
    }
    
    // 初始化
    init_();
    
    char cur_path[1024], out_file[1024];
    strcpy(cur_path, out_dir);
    
    recursive_dir(dir_path);
    
    strcpy(out_file, cur_path);
    strcat(out_file, "/");
    strcat(out_file, "LuaOwnAPI.lua");
    g_pCDataHelper->output_2_file(out_file);
    
    printf("[parser_dir] info: well done! it's the end.\n");
    
    return 0;
}

void init_()
{
    g_pCParserHelper->init();
    
    g_pCDataHelper->init();
}
