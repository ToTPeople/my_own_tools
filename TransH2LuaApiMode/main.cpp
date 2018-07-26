#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "TransH2LuaApiMode.h"

int main(int argc, char **argv)
{
//    if (argc != 3) {
//        printf("----- please input ./a.out need_to_trans_dir out_dir ----\n");
//        return 0;
//    }
//
//    return Parser_C_Class(argv[1], argv[2]);
    
    return Parser_C_Class("./need_trans/", "./after_trans/");
}
