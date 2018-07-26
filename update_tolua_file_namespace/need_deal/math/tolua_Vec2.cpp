/*
** Lua binding: Vec2
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:18 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Vec2_open (lua_State* tolua_S);

#include "math/Vec2.h"
using namespace media;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_media__Vec2 (lua_State* tolua_S)
{
 media::Vec2* self = (media::Vec2*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"std::function<float(float)>");
 tolua_usertype(tolua_S,"media::Vec2");
}

/* function: media::clampf */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_clampf00
static int tolua_Vec2_media_clampf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float value = ((float)  tolua_tonumber(tolua_S,1,0));
  float min_inclusive = ((float)  tolua_tonumber(tolua_S,2,0));
  float max_inclusive = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   float tolua_ret = (float)  media::clampf(value,min_inclusive,max_inclusive);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clampf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_x
static int tolua_get_media__Vec2_x(lua_State* tolua_S)
{
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_set_media__Vec2_x
static int tolua_set_media__Vec2_x(lua_State* tolua_S)
{
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_y
static int tolua_get_media__Vec2_y(lua_State* tolua_S)
{
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_set_media__Vec2_y
static int tolua_set_media__Vec2_y(lua_State* tolua_S)
{
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new00
static int tolua_Vec2_media_Vec2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
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

/* method: new_local of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new00_local
static int tolua_Vec2_media_Vec2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
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

/* method: new of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new01
static int tolua_Vec2_media_Vec2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(xx,yy));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new01_local
static int tolua_Vec2_media_Vec2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(xx,yy));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new02
static int tolua_Vec2_media_Vec2_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float array = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(&array));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
   tolua_pushnumber(tolua_S,(lua_Number)array);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new02_local
static int tolua_Vec2_media_Vec2_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float array = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(&array));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
   tolua_pushnumber(tolua_S,(lua_Number)array);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new03
static int tolua_Vec2_media_Vec2_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* p1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* p2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new03_local
static int tolua_Vec2_media_Vec2_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* p1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* p2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new04
static int tolua_Vec2_media_Vec2_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* copy = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(*copy));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_new04_local
static int tolua_Vec2_media_Vec2_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* copy = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   media::Vec2* tolua_ret = (media::Vec2*)  Mtolua_new((media::Vec2)(*copy));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_delete00
static int tolua_Vec2_media_Vec2_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isZero of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isZero00
static int tolua_Vec2_media_Vec2_isZero00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isZero'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isZero();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isZero'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isOne of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isOne00
static int tolua_Vec2_media_Vec2_isOne00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isOne'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isOne();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isOne'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: angle of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_angle00
static int tolua_Vec2_media_Vec2_angle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* v1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* v2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  {
   float tolua_ret = (float)  media::Vec2::angle(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_add00
static int tolua_Vec2_media_Vec2_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add'", NULL);
#endif
  {
   self->add(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_add01
static int tolua_Vec2_media_Vec2_add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* v1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* v2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  media::Vec2* dst = ((media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  {
   media::Vec2::add(*v1,*v2,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec2_media_Vec2_add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: clamp of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_clamp00
static int tolua_Vec2_media_Vec2_clamp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* min = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* max = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clamp'", NULL);
#endif
  {
   self->clamp(*min,*max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clamp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clamp of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_clamp01
static int tolua_Vec2_media_Vec2_clamp01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,5,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* min = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* max = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  media::Vec2* dst = ((media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  {
   media::Vec2::clamp(*v,*min,*max,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec2_media_Vec2_clamp00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: distance of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_distance00
static int tolua_Vec2_media_Vec2_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'distance'", NULL);
#endif
  {
   float tolua_ret = (float)  self->distance(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: distanceSquared of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_distanceSquared00
static int tolua_Vec2_media_Vec2_distanceSquared00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'distanceSquared'", NULL);
#endif
  {
   float tolua_ret = (float)  self->distanceSquared(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distanceSquared'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dot of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_dot00
static int tolua_Vec2_media_Vec2_dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dot'", NULL);
#endif
  {
   float tolua_ret = (float)  self->dot(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dot of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_dot01
static int tolua_Vec2_media_Vec2_dot01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* v1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* v2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  {
   float tolua_ret = (float)  media::Vec2::dot(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_dot00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_length00
static int tolua_Vec2_media_Vec2_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lengthSquared of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_lengthSquared00
static int tolua_Vec2_media_Vec2_lengthSquared00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lengthSquared'", NULL);
#endif
  {
   float tolua_ret = (float)  self->lengthSquared();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lengthSquared'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: negate of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_negate00
static int tolua_Vec2_media_Vec2_negate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'negate'", NULL);
#endif
  {
   self->negate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'negate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalize of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_normalize00
static int tolua_Vec2_media_Vec2_normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalize'", NULL);
#endif
  {
   self->normalize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNormalized of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getNormalized00
static int tolua_Vec2_media_Vec2_getNormalized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalized'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->getNormalized();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalized'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scale of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_scale00
static int tolua_Vec2_media_Vec2_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  float scalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scale'", NULL);
#endif
  {
   self->scale(scalar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scale of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_scale01
static int tolua_Vec2_media_Vec2_scale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* scale = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scale'", NULL);
#endif
  {
   self->scale(*scale);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec2_media_Vec2_scale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_rotate00
static int tolua_Vec2_media_Vec2_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* point = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   self->rotate(*point,angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_set00
static int tolua_Vec2_media_Vec2_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(xx,yy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_set01
static int tolua_Vec2_media_Vec2_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const float array = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(&array);
   tolua_pushnumber(tolua_S,(lua_Number)array);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_set02
static int tolua_Vec2_media_Vec2_set02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(*v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec2_media_Vec2_set01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_set03
static int tolua_Vec2_media_Vec2_set03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* p1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* p2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(*p1,*p2);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec2_media_Vec2_set02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: subtract of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_subtract00
static int tolua_Vec2_media_Vec2_subtract00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'subtract'", NULL);
#endif
  {
   self->subtract(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'subtract'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: subtract of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_subtract01
static int tolua_Vec2_media_Vec2_subtract01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* v1 = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* v2 = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  media::Vec2* dst = ((media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  {
   media::Vec2::subtract(*v1,*v2,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec2_media_Vec2_subtract00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: smooth of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_smooth00
static int tolua_Vec2_media_Vec2_smooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* target = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  float elapsedTime = ((float)  tolua_tonumber(tolua_S,3,0));
  float responseTime = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'smooth'", NULL);
#endif
  {
   self->smooth(*target,elapsedTime,responseTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'smooth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__add00
static int tolua_Vec2_media_Vec2__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const media::Vec2 tolua_ret = (const media::Vec2)  self->operator+(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__sub00
static int tolua_Vec2_media_Vec2__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   const media::Vec2 tolua_ret = (const media::Vec2)  self->operator-(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__sub01
static int tolua_Vec2_media_Vec2__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   const media::Vec2 tolua_ret = (const media::Vec2)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__mul00
static int tolua_Vec2_media_Vec2__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   const media::Vec2 tolua_ret = (const media::Vec2)  self->operator*(s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__div00
static int tolua_Vec2_media_Vec2__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   const media::Vec2 tolua_ret = (const media::Vec2)  self->operator/(s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__lt00
static int tolua_Vec2_media_Vec2__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2__eq00
static int tolua_Vec2_media_Vec2__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* v = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPoint of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_setPoint00
static int tolua_Vec2_media_Vec2_setPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec2* self = (media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPoint'", NULL);
#endif
  {
   self->setPoint(xx,yy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: equals of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_equals00
static int tolua_Vec2_media_Vec2_equals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* target = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'equals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->equals(*target);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'equals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fuzzyEquals of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_fuzzyEquals00
static int tolua_Vec2_media_Vec2_fuzzyEquals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* target = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  float variance = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fuzzyEquals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->fuzzyEquals(*target,variance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fuzzyEquals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLength of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getLength00
static int tolua_Vec2_media_Vec2_getLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLength'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLengthSq of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getLengthSq00
static int tolua_Vec2_media_Vec2_getLengthSq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLengthSq'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLengthSq();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLengthSq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDistanceSq of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getDistanceSq00
static int tolua_Vec2_media_Vec2_getDistanceSq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDistanceSq'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDistanceSq(*other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDistanceSq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDistance of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getDistance00
static int tolua_Vec2_media_Vec2_getDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDistance'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDistance(*other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngle of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getAngle00
static int tolua_Vec2_media_Vec2_getAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngle'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngle of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getAngle01
static int tolua_Vec2_media_Vec2_getAngle01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngle'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngle(*other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_getAngle00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: cross of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_cross00
static int tolua_Vec2_media_Vec2_cross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cross'", NULL);
#endif
  {
   float tolua_ret = (float)  self->cross(*other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPerp of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getPerp00
static int tolua_Vec2_media_Vec2_getPerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPerp'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->getPerp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMidpoint of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getMidpoint00
static int tolua_Vec2_media_Vec2_getMidpoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMidpoint'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->getMidpoint(*other);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMidpoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClampPoint of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getClampPoint00
static int tolua_Vec2_media_Vec2_getClampPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* min_inclusive = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* max_inclusive = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClampPoint'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->getClampPoint(*min_inclusive,*max_inclusive);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClampPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: compOp of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_compOp00
static int tolua_Vec2_media_Vec2_compOp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::function<float(float)>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  std::function<float(float)> function = *((std::function<float(float)>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'compOp'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->compOp(function);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'compOp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRPerp of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getRPerp00
static int tolua_Vec2_media_Vec2_getRPerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRPerp'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->getRPerp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRPerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: project of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_project00
static int tolua_Vec2_media_Vec2_project00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'project'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->project(*other);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'project'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_rotate01
static int tolua_Vec2_media_Vec2_rotate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->rotate(*other);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec2_media_Vec2_rotate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: unrotate of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_unrotate00
static int tolua_Vec2_media_Vec2_unrotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unrotate'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->unrotate(*other);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unrotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lerp of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_lerp00
static int tolua_Vec2_media_Vec2_lerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* other = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  float alpha = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lerp'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->lerp(*other,alpha);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotateByAngle of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_rotateByAngle00
static int tolua_Vec2_media_Vec2_rotateByAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* self = (const media::Vec2*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec2* pivot = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotateByAngle'", NULL);
#endif
  {
   media::Vec2 tolua_ret = (media::Vec2)  self->rotateByAngle(*pivot,angle);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotateByAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: forAngle of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_forAngle00
static int tolua_Vec2_media_Vec2_forAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float a = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   media::Vec2 tolua_ret = (media::Vec2)  media::Vec2::forAngle(a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'forAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isLineIntersect of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isLineIntersect00
static int tolua_Vec2_media_Vec2_isLineIntersect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* A = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* B = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* C = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  const media::Vec2* D = ((const media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  float S = ((float)  tolua_tonumber(tolua_S,6,nullptr));
  float T = ((float)  tolua_tonumber(tolua_S,7,nullptr));
  {
   bool tolua_ret = (bool)  media::Vec2::isLineIntersect(*A,*B,*C,*D,&S,&T);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)S);
   tolua_pushnumber(tolua_S,(lua_Number)T);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isLineIntersect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isLineOverlap of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isLineOverlap00
static int tolua_Vec2_media_Vec2_isLineOverlap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* A = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* B = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* C = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  const media::Vec2* D = ((const media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  media::Vec2::isLineOverlap(*A,*B,*C,*D);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isLineOverlap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isLineParallel of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isLineParallel00
static int tolua_Vec2_media_Vec2_isLineParallel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* A = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* B = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* C = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  const media::Vec2* D = ((const media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  media::Vec2::isLineParallel(*A,*B,*C,*D);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isLineParallel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSegmentOverlap of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isSegmentOverlap00
static int tolua_Vec2_media_Vec2_isSegmentOverlap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,6,"media::Vec2",1,&tolua_err) ||
     !tolua_isusertype(tolua_S,7,"media::Vec2",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* A = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* B = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* C = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  const media::Vec2* D = ((const media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  media::Vec2* S = ((media::Vec2*)  tolua_tousertype(tolua_S,6,nullptr));
  media::Vec2* E = ((media::Vec2*)  tolua_tousertype(tolua_S,7,nullptr));
  {
   bool tolua_ret = (bool)  media::Vec2::isSegmentOverlap(*A,*B,*C,*D,S,E);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSegmentOverlap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSegmentIntersect of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_isSegmentIntersect00
static int tolua_Vec2_media_Vec2_isSegmentIntersect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* A = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* B = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* C = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  const media::Vec2* D = ((const media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  media::Vec2::isSegmentIntersect(*A,*B,*C,*D);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSegmentIntersect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIntersectPoint of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_Vec2_media_Vec2_getIntersectPoint00
static int tolua_Vec2_media_Vec2_getIntersectPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec2* A = ((const media::Vec2*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec2* B = ((const media::Vec2*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec2* C = ((const media::Vec2*)  tolua_tousertype(tolua_S,4,0));
  const media::Vec2* D = ((const media::Vec2*)  tolua_tousertype(tolua_S,5,0));
  {
   media::Vec2 tolua_ret = (media::Vec2)  media::Vec2::getIntersectPoint(*A,*B,*C,*D);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIntersectPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ZERO
static int tolua_get_media__Vec2_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ZERO,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ONE of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ONE
static int tolua_get_media__Vec2_ONE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ONE,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_UNIT_X
static int tolua_get_media__Vec2_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::UNIT_X,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_UNIT_Y
static int tolua_get_media__Vec2_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::UNIT_Y,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_MIDDLE of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_MIDDLE
static int tolua_get_media__Vec2_ANCHOR_MIDDLE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_MIDDLE,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_BOTTOM_LEFT of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_BOTTOM_LEFT
static int tolua_get_media__Vec2_ANCHOR_BOTTOM_LEFT(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_BOTTOM_LEFT,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_TOP_LEFT of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_TOP_LEFT
static int tolua_get_media__Vec2_ANCHOR_TOP_LEFT(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_TOP_LEFT,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_BOTTOM_RIGHT of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_BOTTOM_RIGHT
static int tolua_get_media__Vec2_ANCHOR_BOTTOM_RIGHT(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_BOTTOM_RIGHT,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_TOP_RIGHT of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_TOP_RIGHT
static int tolua_get_media__Vec2_ANCHOR_TOP_RIGHT(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_TOP_RIGHT,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_MIDDLE_RIGHT of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_MIDDLE_RIGHT
static int tolua_get_media__Vec2_ANCHOR_MIDDLE_RIGHT(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_MIDDLE_RIGHT,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_MIDDLE_LEFT of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_MIDDLE_LEFT
static int tolua_get_media__Vec2_ANCHOR_MIDDLE_LEFT(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_MIDDLE_LEFT,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_MIDDLE_TOP of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_MIDDLE_TOP
static int tolua_get_media__Vec2_ANCHOR_MIDDLE_TOP(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_MIDDLE_TOP,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ANCHOR_MIDDLE_BOTTOM of class  media::Vec2 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec2_ANCHOR_MIDDLE_BOTTOM
static int tolua_get_media__Vec2_ANCHOR_MIDDLE_BOTTOM(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec2::ANCHOR_MIDDLE_BOTTOM,"const media::Vec2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Vec2_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   tolua_function(tolua_S,"clampf",tolua_Vec2_media_clampf00);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vec2","media::Vec2","",tolua_collect_media__Vec2);
   #else
   tolua_cclass(tolua_S,"Vec2","media::Vec2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vec2");
    tolua_variable(tolua_S,"x",tolua_get_media__Vec2_x,tolua_set_media__Vec2_x);
    tolua_variable(tolua_S,"y",tolua_get_media__Vec2_y,tolua_set_media__Vec2_y);
    tolua_function(tolua_S,"new",tolua_Vec2_media_Vec2_new00);
    tolua_function(tolua_S,"new_local",tolua_Vec2_media_Vec2_new00_local);
    tolua_function(tolua_S,".call",tolua_Vec2_media_Vec2_new00_local);
    tolua_function(tolua_S,"new",tolua_Vec2_media_Vec2_new01);
    tolua_function(tolua_S,"new_local",tolua_Vec2_media_Vec2_new01_local);
    tolua_function(tolua_S,".call",tolua_Vec2_media_Vec2_new01_local);
    tolua_function(tolua_S,"new",tolua_Vec2_media_Vec2_new02);
    tolua_function(tolua_S,"new_local",tolua_Vec2_media_Vec2_new02_local);
    tolua_function(tolua_S,".call",tolua_Vec2_media_Vec2_new02_local);
    tolua_function(tolua_S,"new",tolua_Vec2_media_Vec2_new03);
    tolua_function(tolua_S,"new_local",tolua_Vec2_media_Vec2_new03_local);
    tolua_function(tolua_S,".call",tolua_Vec2_media_Vec2_new03_local);
    tolua_function(tolua_S,"new",tolua_Vec2_media_Vec2_new04);
    tolua_function(tolua_S,"new_local",tolua_Vec2_media_Vec2_new04_local);
    tolua_function(tolua_S,".call",tolua_Vec2_media_Vec2_new04_local);
    tolua_function(tolua_S,"delete",tolua_Vec2_media_Vec2_delete00);
    tolua_function(tolua_S,"isZero",tolua_Vec2_media_Vec2_isZero00);
    tolua_function(tolua_S,"isOne",tolua_Vec2_media_Vec2_isOne00);
    tolua_function(tolua_S,"angle",tolua_Vec2_media_Vec2_angle00);
    tolua_function(tolua_S,"add",tolua_Vec2_media_Vec2_add00);
    tolua_function(tolua_S,"add",tolua_Vec2_media_Vec2_add01);
    tolua_function(tolua_S,"clamp",tolua_Vec2_media_Vec2_clamp00);
    tolua_function(tolua_S,"clamp",tolua_Vec2_media_Vec2_clamp01);
    tolua_function(tolua_S,"distance",tolua_Vec2_media_Vec2_distance00);
    tolua_function(tolua_S,"distanceSquared",tolua_Vec2_media_Vec2_distanceSquared00);
    tolua_function(tolua_S,"dot",tolua_Vec2_media_Vec2_dot00);
    tolua_function(tolua_S,"dot",tolua_Vec2_media_Vec2_dot01);
    tolua_function(tolua_S,"length",tolua_Vec2_media_Vec2_length00);
    tolua_function(tolua_S,"lengthSquared",tolua_Vec2_media_Vec2_lengthSquared00);
    tolua_function(tolua_S,"negate",tolua_Vec2_media_Vec2_negate00);
    tolua_function(tolua_S,"normalize",tolua_Vec2_media_Vec2_normalize00);
    tolua_function(tolua_S,"getNormalized",tolua_Vec2_media_Vec2_getNormalized00);
    tolua_function(tolua_S,"scale",tolua_Vec2_media_Vec2_scale00);
    tolua_function(tolua_S,"scale",tolua_Vec2_media_Vec2_scale01);
    tolua_function(tolua_S,"rotate",tolua_Vec2_media_Vec2_rotate00);
    tolua_function(tolua_S,"set",tolua_Vec2_media_Vec2_set00);
    tolua_function(tolua_S,"set",tolua_Vec2_media_Vec2_set01);
    tolua_function(tolua_S,"set",tolua_Vec2_media_Vec2_set02);
    tolua_function(tolua_S,"set",tolua_Vec2_media_Vec2_set03);
    tolua_function(tolua_S,"subtract",tolua_Vec2_media_Vec2_subtract00);
    tolua_function(tolua_S,"subtract",tolua_Vec2_media_Vec2_subtract01);
    tolua_function(tolua_S,"smooth",tolua_Vec2_media_Vec2_smooth00);
    tolua_function(tolua_S,".add",tolua_Vec2_media_Vec2__add00);
    tolua_function(tolua_S,".sub",tolua_Vec2_media_Vec2__sub00);
    tolua_function(tolua_S,".sub",tolua_Vec2_media_Vec2__sub01);
    tolua_function(tolua_S,".mul",tolua_Vec2_media_Vec2__mul00);
    tolua_function(tolua_S,".div",tolua_Vec2_media_Vec2__div00);
    tolua_function(tolua_S,".lt",tolua_Vec2_media_Vec2__lt00);
    tolua_function(tolua_S,".eq",tolua_Vec2_media_Vec2__eq00);
    tolua_function(tolua_S,"setPoint",tolua_Vec2_media_Vec2_setPoint00);
    tolua_function(tolua_S,"equals",tolua_Vec2_media_Vec2_equals00);
    tolua_function(tolua_S,"fuzzyEquals",tolua_Vec2_media_Vec2_fuzzyEquals00);
    tolua_function(tolua_S,"getLength",tolua_Vec2_media_Vec2_getLength00);
    tolua_function(tolua_S,"getLengthSq",tolua_Vec2_media_Vec2_getLengthSq00);
    tolua_function(tolua_S,"getDistanceSq",tolua_Vec2_media_Vec2_getDistanceSq00);
    tolua_function(tolua_S,"getDistance",tolua_Vec2_media_Vec2_getDistance00);
    tolua_function(tolua_S,"getAngle",tolua_Vec2_media_Vec2_getAngle00);
    tolua_function(tolua_S,"getAngle",tolua_Vec2_media_Vec2_getAngle01);
    tolua_function(tolua_S,"cross",tolua_Vec2_media_Vec2_cross00);
    tolua_function(tolua_S,"getPerp",tolua_Vec2_media_Vec2_getPerp00);
    tolua_function(tolua_S,"getMidpoint",tolua_Vec2_media_Vec2_getMidpoint00);
    tolua_function(tolua_S,"getClampPoint",tolua_Vec2_media_Vec2_getClampPoint00);
    tolua_function(tolua_S,"compOp",tolua_Vec2_media_Vec2_compOp00);
    tolua_function(tolua_S,"getRPerp",tolua_Vec2_media_Vec2_getRPerp00);
    tolua_function(tolua_S,"project",tolua_Vec2_media_Vec2_project00);
    tolua_function(tolua_S,"rotate",tolua_Vec2_media_Vec2_rotate01);
    tolua_function(tolua_S,"unrotate",tolua_Vec2_media_Vec2_unrotate00);
    tolua_function(tolua_S,"lerp",tolua_Vec2_media_Vec2_lerp00);
    tolua_function(tolua_S,"rotateByAngle",tolua_Vec2_media_Vec2_rotateByAngle00);
    tolua_function(tolua_S,"forAngle",tolua_Vec2_media_Vec2_forAngle00);
    tolua_function(tolua_S,"isLineIntersect",tolua_Vec2_media_Vec2_isLineIntersect00);
    tolua_function(tolua_S,"isLineOverlap",tolua_Vec2_media_Vec2_isLineOverlap00);
    tolua_function(tolua_S,"isLineParallel",tolua_Vec2_media_Vec2_isLineParallel00);
    tolua_function(tolua_S,"isSegmentOverlap",tolua_Vec2_media_Vec2_isSegmentOverlap00);
    tolua_function(tolua_S,"isSegmentIntersect",tolua_Vec2_media_Vec2_isSegmentIntersect00);
    tolua_function(tolua_S,"getIntersectPoint",tolua_Vec2_media_Vec2_getIntersectPoint00);
    tolua_variable(tolua_S,"ZERO",tolua_get_media__Vec2_ZERO,NULL);
    tolua_variable(tolua_S,"ONE",tolua_get_media__Vec2_ONE,NULL);
    tolua_variable(tolua_S,"UNIT_X",tolua_get_media__Vec2_UNIT_X,NULL);
    tolua_variable(tolua_S,"UNIT_Y",tolua_get_media__Vec2_UNIT_Y,NULL);
    tolua_variable(tolua_S,"ANCHOR_MIDDLE",tolua_get_media__Vec2_ANCHOR_MIDDLE,NULL);
    tolua_variable(tolua_S,"ANCHOR_BOTTOM_LEFT",tolua_get_media__Vec2_ANCHOR_BOTTOM_LEFT,NULL);
    tolua_variable(tolua_S,"ANCHOR_TOP_LEFT",tolua_get_media__Vec2_ANCHOR_TOP_LEFT,NULL);
    tolua_variable(tolua_S,"ANCHOR_BOTTOM_RIGHT",tolua_get_media__Vec2_ANCHOR_BOTTOM_RIGHT,NULL);
    tolua_variable(tolua_S,"ANCHOR_TOP_RIGHT",tolua_get_media__Vec2_ANCHOR_TOP_RIGHT,NULL);
    tolua_variable(tolua_S,"ANCHOR_MIDDLE_RIGHT",tolua_get_media__Vec2_ANCHOR_MIDDLE_RIGHT,NULL);
    tolua_variable(tolua_S,"ANCHOR_MIDDLE_LEFT",tolua_get_media__Vec2_ANCHOR_MIDDLE_LEFT,NULL);
    tolua_variable(tolua_S,"ANCHOR_MIDDLE_TOP",tolua_get_media__Vec2_ANCHOR_MIDDLE_TOP,NULL);
    tolua_variable(tolua_S,"ANCHOR_MIDDLE_BOTTOM",tolua_get_media__Vec2_ANCHOR_MIDDLE_BOTTOM,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Vec2 (lua_State* tolua_S) {
 return tolua_Vec2_open(tolua_S);
};
#endif

