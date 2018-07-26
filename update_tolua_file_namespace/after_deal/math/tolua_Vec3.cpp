/*
** Lua binding: Vec3
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:18 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Vec3_open (lua_State* tolua_S);

#include "math/Vec3.h"
using namespace media;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_media__Vec3 (lua_State* tolua_S)
{
 media::Vec3* self = (media::Vec3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"media::Vec3");
}

/* get function: x of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_x
static int tolua_get_media__Vec3_x(lua_State* tolua_S)
{
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_set_media__Vec3_x
static int tolua_set_media__Vec3_x(lua_State* tolua_S)
{
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: y of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_y
static int tolua_get_media__Vec3_y(lua_State* tolua_S)
{
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_set_media__Vec3_y
static int tolua_set_media__Vec3_y(lua_State* tolua_S)
{
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: z of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_z
static int tolua_get_media__Vec3_z(lua_State* tolua_S)
{
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_set_media__Vec3_z
static int tolua_set_media__Vec3_z(lua_State* tolua_S)
{
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new00
static int tolua_Vec3_media_Vec3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
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

/* method: new_local of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new00_local
static int tolua_Vec3_media_Vec3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
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

/* method: new of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new01
static int tolua_Vec3_media_Vec3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
  float zz = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(xx,yy,zz));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new01_local
static int tolua_Vec3_media_Vec3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
  float zz = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(xx,yy,zz));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new02
static int tolua_Vec3_media_Vec3_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float array = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(&array));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
   tolua_pushnumber(tolua_S,(lua_Number)array);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new02_local
static int tolua_Vec3_media_Vec3_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const float array = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(&array));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
   tolua_pushnumber(tolua_S,(lua_Number)array);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new03
static int tolua_Vec3_media_Vec3_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* p1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* p2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new03_local
static int tolua_Vec3_media_Vec3_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* p1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* p2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(*p1,*p2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new04
static int tolua_Vec3_media_Vec3_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* copy = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(*copy));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_new04_local
static int tolua_Vec3_media_Vec3_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* copy = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   media::Vec3* tolua_ret = (media::Vec3*)  Mtolua_new((media::Vec3)(*copy));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: fromColor of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_fromColor00
static int tolua_Vec3_media_Vec3_fromColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int color = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   media::Vec3 tolua_ret = (media::Vec3)  media::Vec3::fromColor(color);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fromColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_delete00
static int tolua_Vec3_media_Vec3_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isZero of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_isZero00
static int tolua_Vec3_media_Vec3_isZero00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isOne of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_isOne00
static int tolua_Vec3_media_Vec3_isOne00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: angle of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_angle00
static int tolua_Vec3_media_Vec3_angle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* v1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* v2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  {
   float tolua_ret = (float)  media::Vec3::angle(*v1,*v2);
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

/* method: add of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_add00
static int tolua_Vec3_media_Vec3_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: add of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_add01
static int tolua_Vec3_media_Vec3_add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* v1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* v2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  media::Vec3* dst = ((media::Vec3*)  tolua_tousertype(tolua_S,4,0));
  {
   media::Vec3::add(*v1,*v2,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec3_media_Vec3_add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: clamp of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_clamp00
static int tolua_Vec3_media_Vec3_clamp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* min = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* max = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
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

/* method: clamp of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_clamp01
static int tolua_Vec3_media_Vec3_clamp01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,5,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* min = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  const media::Vec3* max = ((const media::Vec3*)  tolua_tousertype(tolua_S,4,0));
  media::Vec3* dst = ((media::Vec3*)  tolua_tousertype(tolua_S,5,0));
  {
   media::Vec3::clamp(*v,*min,*max,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec3_media_Vec3_clamp00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: cross of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_cross00
static int tolua_Vec3_media_Vec3_cross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cross'", NULL);
#endif
  {
   self->cross(*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cross of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_cross01
static int tolua_Vec3_media_Vec3_cross01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* v1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* v2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  media::Vec3* dst = ((media::Vec3*)  tolua_tousertype(tolua_S,4,0));
  {
   media::Vec3::cross(*v1,*v2,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec3_media_Vec3_cross00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: distance of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_distance00
static int tolua_Vec3_media_Vec3_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: distanceSquared of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_distanceSquared00
static int tolua_Vec3_media_Vec3_distanceSquared00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: dot of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_dot00
static int tolua_Vec3_media_Vec3_dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: dot of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_dot01
static int tolua_Vec3_media_Vec3_dot01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* v1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* v2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  {
   float tolua_ret = (float)  media::Vec3::dot(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3_dot00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_length00
static int tolua_Vec3_media_Vec3_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: lengthSquared of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_lengthSquared00
static int tolua_Vec3_media_Vec3_lengthSquared00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: negate of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_negate00
static int tolua_Vec3_media_Vec3_negate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: normalize of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_normalize00
static int tolua_Vec3_media_Vec3_normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getNormalized of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_getNormalized00
static int tolua_Vec3_media_Vec3_getNormalized00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalized'", NULL);
#endif
  {
   media::Vec3 tolua_ret = (media::Vec3)  self->getNormalized();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"media::Vec3");
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

/* method: scale of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_scale00
static int tolua_Vec3_media_Vec3_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: set of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_set00
static int tolua_Vec3_media_Vec3_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  float xx = ((float)  tolua_tonumber(tolua_S,2,0));
  float yy = ((float)  tolua_tonumber(tolua_S,3,0));
  float zz = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(xx,yy,zz);
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

/* method: set of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_set01
static int tolua_Vec3_media_Vec3_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_Vec3_media_Vec3_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_set02
static int tolua_Vec3_media_Vec3_set02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(*v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec3_media_Vec3_set01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_set03
static int tolua_Vec3_media_Vec3_set03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* p1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* p2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(*p1,*p2);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec3_media_Vec3_set02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: subtract of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_subtract00
static int tolua_Vec3_media_Vec3_subtract00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: subtract of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_subtract01
static int tolua_Vec3_media_Vec3_subtract01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* v1 = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
  const media::Vec3* v2 = ((const media::Vec3*)  tolua_tousertype(tolua_S,3,0));
  media::Vec3* dst = ((media::Vec3*)  tolua_tousertype(tolua_S,4,0));
  {
   media::Vec3::subtract(*v1,*v2,dst);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Vec3_media_Vec3_subtract00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: smooth of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3_smooth00
static int tolua_Vec3_media_Vec3_smooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Vec3* self = (media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* target = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: operator+ of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__add00
static int tolua_Vec3_media_Vec3__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   const media::Vec3 tolua_ret = (const media::Vec3)  self->operator+(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
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

/* method: operator- of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__sub00
static int tolua_Vec3_media_Vec3__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   const media::Vec3 tolua_ret = (const media::Vec3)  self->operator-(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
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

/* method: operator- of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__sub01
static int tolua_Vec3_media_Vec3__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   const media::Vec3 tolua_ret = (const media::Vec3)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vec3_media_Vec3__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__mul00
static int tolua_Vec3_media_Vec3__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   const media::Vec3 tolua_ret = (const media::Vec3)  self->operator*(s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
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

/* method: operator/ of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__div00
static int tolua_Vec3_media_Vec3__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   const media::Vec3 tolua_ret = (const media::Vec3)  self->operator/(s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((media::Vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const media::Vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"const media::Vec3");
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

/* method: operator< of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__lt00
static int tolua_Vec3_media_Vec3__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* method: operator== of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_Vec3_media_Vec3__eq00
static int tolua_Vec3_media_Vec3__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Vec3* self = (const media::Vec3*)  tolua_tousertype(tolua_S,1,0);
  const media::Vec3* v = ((const media::Vec3*)  tolua_tousertype(tolua_S,2,0));
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

/* get function: ZERO of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_ZERO
static int tolua_get_media__Vec3_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec3::ZERO,"const media::Vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ONE of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_ONE
static int tolua_get_media__Vec3_ONE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec3::ONE,"const media::Vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_UNIT_X
static int tolua_get_media__Vec3_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec3::UNIT_X,"const media::Vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_UNIT_Y
static int tolua_get_media__Vec3_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec3::UNIT_Y,"const media::Vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Z of class  media::Vec3 */
#ifndef TOLUA_DISABLE_tolua_get_media__Vec3_UNIT_Z
static int tolua_get_media__Vec3_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&media::Vec3::UNIT_Z,"const media::Vec3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Vec3_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vec3","media::Vec3","",tolua_collect_media__Vec3);
   #else
   tolua_cclass(tolua_S,"Vec3","media::Vec3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vec3");
    tolua_variable(tolua_S,"x",tolua_get_media__Vec3_x,tolua_set_media__Vec3_x);
    tolua_variable(tolua_S,"y",tolua_get_media__Vec3_y,tolua_set_media__Vec3_y);
    tolua_variable(tolua_S,"z",tolua_get_media__Vec3_z,tolua_set_media__Vec3_z);
    tolua_function(tolua_S,"new",tolua_Vec3_media_Vec3_new00);
    tolua_function(tolua_S,"new_local",tolua_Vec3_media_Vec3_new00_local);
    tolua_function(tolua_S,".call",tolua_Vec3_media_Vec3_new00_local);
    tolua_function(tolua_S,"new",tolua_Vec3_media_Vec3_new01);
    tolua_function(tolua_S,"new_local",tolua_Vec3_media_Vec3_new01_local);
    tolua_function(tolua_S,".call",tolua_Vec3_media_Vec3_new01_local);
    tolua_function(tolua_S,"new",tolua_Vec3_media_Vec3_new02);
    tolua_function(tolua_S,"new_local",tolua_Vec3_media_Vec3_new02_local);
    tolua_function(tolua_S,".call",tolua_Vec3_media_Vec3_new02_local);
    tolua_function(tolua_S,"new",tolua_Vec3_media_Vec3_new03);
    tolua_function(tolua_S,"new_local",tolua_Vec3_media_Vec3_new03_local);
    tolua_function(tolua_S,".call",tolua_Vec3_media_Vec3_new03_local);
    tolua_function(tolua_S,"new",tolua_Vec3_media_Vec3_new04);
    tolua_function(tolua_S,"new_local",tolua_Vec3_media_Vec3_new04_local);
    tolua_function(tolua_S,".call",tolua_Vec3_media_Vec3_new04_local);
    tolua_function(tolua_S,"fromColor",tolua_Vec3_media_Vec3_fromColor00);
    tolua_function(tolua_S,"delete",tolua_Vec3_media_Vec3_delete00);
    tolua_function(tolua_S,"isZero",tolua_Vec3_media_Vec3_isZero00);
    tolua_function(tolua_S,"isOne",tolua_Vec3_media_Vec3_isOne00);
    tolua_function(tolua_S,"angle",tolua_Vec3_media_Vec3_angle00);
    tolua_function(tolua_S,"add",tolua_Vec3_media_Vec3_add00);
    tolua_function(tolua_S,"add",tolua_Vec3_media_Vec3_add01);
    tolua_function(tolua_S,"clamp",tolua_Vec3_media_Vec3_clamp00);
    tolua_function(tolua_S,"clamp",tolua_Vec3_media_Vec3_clamp01);
    tolua_function(tolua_S,"cross",tolua_Vec3_media_Vec3_cross00);
    tolua_function(tolua_S,"cross",tolua_Vec3_media_Vec3_cross01);
    tolua_function(tolua_S,"distance",tolua_Vec3_media_Vec3_distance00);
    tolua_function(tolua_S,"distanceSquared",tolua_Vec3_media_Vec3_distanceSquared00);
    tolua_function(tolua_S,"dot",tolua_Vec3_media_Vec3_dot00);
    tolua_function(tolua_S,"dot",tolua_Vec3_media_Vec3_dot01);
    tolua_function(tolua_S,"length",tolua_Vec3_media_Vec3_length00);
    tolua_function(tolua_S,"lengthSquared",tolua_Vec3_media_Vec3_lengthSquared00);
    tolua_function(tolua_S,"negate",tolua_Vec3_media_Vec3_negate00);
    tolua_function(tolua_S,"normalize",tolua_Vec3_media_Vec3_normalize00);
    tolua_function(tolua_S,"getNormalized",tolua_Vec3_media_Vec3_getNormalized00);
    tolua_function(tolua_S,"scale",tolua_Vec3_media_Vec3_scale00);
    tolua_function(tolua_S,"set",tolua_Vec3_media_Vec3_set00);
    tolua_function(tolua_S,"set",tolua_Vec3_media_Vec3_set01);
    tolua_function(tolua_S,"set",tolua_Vec3_media_Vec3_set02);
    tolua_function(tolua_S,"set",tolua_Vec3_media_Vec3_set03);
    tolua_function(tolua_S,"subtract",tolua_Vec3_media_Vec3_subtract00);
    tolua_function(tolua_S,"subtract",tolua_Vec3_media_Vec3_subtract01);
    tolua_function(tolua_S,"smooth",tolua_Vec3_media_Vec3_smooth00);
    tolua_function(tolua_S,".add",tolua_Vec3_media_Vec3__add00);
    tolua_function(tolua_S,".sub",tolua_Vec3_media_Vec3__sub00);
    tolua_function(tolua_S,".sub",tolua_Vec3_media_Vec3__sub01);
    tolua_function(tolua_S,".mul",tolua_Vec3_media_Vec3__mul00);
    tolua_function(tolua_S,".div",tolua_Vec3_media_Vec3__div00);
    tolua_function(tolua_S,".lt",tolua_Vec3_media_Vec3__lt00);
    tolua_function(tolua_S,".eq",tolua_Vec3_media_Vec3__eq00);
    tolua_variable(tolua_S,"ZERO",tolua_get_media__Vec3_ZERO,NULL);
    tolua_variable(tolua_S,"ONE",tolua_get_media__Vec3_ONE,NULL);
    tolua_variable(tolua_S,"UNIT_X",tolua_get_media__Vec3_UNIT_X,NULL);
    tolua_variable(tolua_S,"UNIT_Y",tolua_get_media__Vec3_UNIT_Y,NULL);
    tolua_variable(tolua_S,"UNIT_Z",tolua_get_media__Vec3_UNIT_Z,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Vec3 (lua_State* tolua_S) {
 return tolua_Vec3_open(tolua_S);
};
#endif


