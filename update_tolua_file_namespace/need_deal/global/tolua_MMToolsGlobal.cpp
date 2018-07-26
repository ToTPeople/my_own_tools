/*
** Lua binding: MMToolsGlobal
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:17 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_MMToolsGlobal_open (lua_State* tolua_S);

#include "module/mtmedia/global/MMToolsGlobal.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_MMTOOLS__MMToolsGlobal (lua_State* tolua_S)
{
 MMTOOLS::MMToolsGlobal* self = (MMTOOLS::MMToolsGlobal*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"MMTOOLS::MMToolsGlobal");
}

/* method: new of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MMTOOLS::MMToolsGlobal* tolua_ret = (MMTOOLS::MMToolsGlobal*)  Mtolua_new((MMTOOLS::MMToolsGlobal)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MMTOOLS::MMToolsGlobal");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00_local
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MMTOOLS::MMToolsGlobal* tolua_ret = (MMTOOLS::MMToolsGlobal*)  Mtolua_new((MMTOOLS::MMToolsGlobal)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MMTOOLS::MMToolsGlobal");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_delete00
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MMTOOLS::MMToolsGlobal* self = (MMTOOLS::MMToolsGlobal*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: globalInit of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalInit00
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MMTOOLS::MMToolsGlobal::globalInit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'globalInit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: globalUninit of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalUninit00
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalUninit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MMTOOLS::MMToolsGlobal::globalUninit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'globalUninit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLogLevels of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_setLogLevels00
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_setLogLevels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int levels = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   MMTOOLS::MMToolsGlobal::setLogLevels(levels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLogLevels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: globalInited of class  MMTOOLS::MMToolsGlobal */
#ifndef TOLUA_DISABLE_tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalInited00
static int tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalInited00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MMTOOLS::MMToolsGlobal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  MMTOOLS::MMToolsGlobal::globalInited();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'globalInited'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_MMToolsGlobal_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"MMTOOLS",0);
  tolua_beginmodule(tolua_S,"MMTOOLS");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"MMToolsGlobal","MMTOOLS::MMToolsGlobal","",tolua_collect_MMTOOLS__MMToolsGlobal);
   #else
   tolua_cclass(tolua_S,"MMToolsGlobal","MMTOOLS::MMToolsGlobal","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"MMToolsGlobal");
    tolua_function(tolua_S,"new",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00);
    tolua_function(tolua_S,"new_local",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00_local);
    tolua_function(tolua_S,".call",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_new00_local);
    tolua_function(tolua_S,"delete",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_delete00);
    tolua_function(tolua_S,"globalInit",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalInit00);
    tolua_function(tolua_S,"globalUninit",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalUninit00);
    tolua_function(tolua_S,"setLogLevels",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_setLogLevels00);
    tolua_function(tolua_S,"globalInited",tolua_MMToolsGlobal_MMTOOLS_MMToolsGlobal_globalInited00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_MMToolsGlobal (lua_State* tolua_S) {
 return tolua_MMToolsGlobal_open(tolua_S);
};
#endif

