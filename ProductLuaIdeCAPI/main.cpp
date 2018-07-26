#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "product_lua_ide_api.h"

int main(int argc, char **argv)
{
//    if (argc != 3) {
//        printf("----- please input ./a.out need_to_trans_dir out_dir ----\n");
//        return 0;
//    }
    
    return parser_dir("./need_trans", "./after_trans");
//    return parser_dir(argv[1], argv[2]);
    return 0;
}
