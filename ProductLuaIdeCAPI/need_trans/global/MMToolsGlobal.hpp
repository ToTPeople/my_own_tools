//
//  MMToolsGlobal.hpp
//  mmtools
//
//  Created by meitu on 2018/5/2.
//  Copyright © 2018年 xqm. All rights reserved.
//

#ifndef MMToolsGlobal_hpp
#define MMToolsGlobal_hpp

#include <stdio.h>

#include "module/mtmedia/utils/MTLog.h"

namespace MMTOOLS {
class MMToolsGlobal {
public:
    MMToolsGlobal() {};
    ~MMToolsGlobal() {};
    
    /*
     * @func 多媒体处理全局初始化.
     * @param void
     * @return void
     */
    static void globalInit();
    
    /*
     * @func 多媒体处理全局解初始化，释放全局内存和锁.
     * @param void
     * @return void
     */
    static void globalUninit();
    
    /*
     * @func 设置全局日志等级.
     * @arg levels 日志等级 @ref MT_LOG_*
     * @return void
     */
    static void setLogLevels(int levels);
    
    /*
     * @func 判断是否已经进行全局初始化了.
     * @return true 已经初始化， false 未进行初始化
     */
    static bool globalInited();
};
}

#endif /* MMToolsGlobal_hpp */
