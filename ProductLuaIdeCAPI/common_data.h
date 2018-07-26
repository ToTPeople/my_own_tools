//
//  common_data.h
//  ProductLuaIdeCAPI
//
//  Created by lifushan on 2018/7/20.
//  Copyright © 2018年 lifs. All rights reserved.
//

#ifndef common_data_h
#define common_data_h


enum LineType {
    LINE_TYPE_NONE      = 0x00,     // none
    LINE_TYPE_NAMESPACE = 0x01,     // namespace
    LINE_TYPE_CLASS,                // class
    LINE_TYPE_STRUCT,               // struct
    LINE_TYPE_ENUM,                 // enum
    LINE_TYPE_UNION,                // Union
    LINE_TYPE_FUNCTION,             // function
    LINE_TYPE_VAR,                  // var
    LINE_TYPE_UNKNOW,               // unknow
    LINE_TYPE_FILE_END,             // 文件遍历结束
    LINE_TYPE_MAX,
};

#endif /* common_data_h */
