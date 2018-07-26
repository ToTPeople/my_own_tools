/*
** Lua binding: Texture2D
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:17 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Texture2D_open (lua_State* tolua_S);

#include "module/graphics/Texture2D.h"
using namespace media;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_GLuint (lua_State* tolua_S)
{
 GLuint* self = (GLuint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_media__Texture2D (lua_State* tolua_S)
{
 media::Texture2D* self = (media::Texture2D*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"media::Texture");
 tolua_usertype(tolua_S,"media::Texture2D");
 tolua_usertype(tolua_S,"GLuint");
 tolua_usertype(tolua_S,"media::Size");
 tolua_usertype(tolua_S,"media::Image");
 tolua_usertype(tolua_S,"media::FileHandle");
}

/* method: create of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_create00
static int tolua_Texture2D_media_Texture2D_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Texture2D* tolua_ret = (media::Texture2D*)  media::Texture2D::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_new00
static int tolua_Texture2D_media_Texture2D_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Texture2D* tolua_ret = (media::Texture2D*)  Mtolua_new((media::Texture2D)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Texture2D");
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

/* method: new_local of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_new00_local
static int tolua_Texture2D_media_Texture2D_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Texture2D* tolua_ret = (media::Texture2D*)  Mtolua_new((media::Texture2D)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Texture2D");
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

/* method: delete of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_delete00
static int tolua_Texture2D_media_Texture2D_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
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

/* method: load of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_load00
static int tolua_Texture2D_media_Texture2D_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  int textureID = ((int)  tolua_tonumber(tolua_S,2,0));
   unsigned int format = ((  unsigned int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->load(textureID,format,w,h);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_load01
static int tolua_Texture2D_media_Texture2D_load01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  unsigned const char* fileData = ((unsigned const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int dataLen = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->load(fileData,dataLen);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Texture2D_media_Texture2D_load00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_load02
static int tolua_Texture2D_media_Texture2D_load02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  const Image* image = ((const Image*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->load(image);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Texture2D_media_Texture2D_load01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_load03
static int tolua_Texture2D_media_Texture2D_load03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const media::Image",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const media::Size",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  const Image* image = ((const Image*)  tolua_tousertype(tolua_S,2,0));
  const NS_MEDIA::Size* out = ((const NS_MEDIA::Size*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->load(image,*out);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Texture2D_media_Texture2D_load02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_load04
static int tolua_Texture2D_media_Texture2D_load04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  FileHandle* file = ((FileHandle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->load(file);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Texture2D_media_Texture2D_load03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: reload of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_reload00
static int tolua_Texture2D_media_Texture2D_reload00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reload'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->reload();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reload'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isLoaded of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_isLoaded00
static int tolua_Texture2D_media_Texture2D_isLoaded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isLoaded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isLoaded();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isLoaded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bind of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_bind00
static int tolua_Texture2D_media_Texture2D_bind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bind'", NULL);
#endif
  {
   self->bind();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getWidth00
static int tolua_Texture2D_media_Texture2D_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getHeight00
static int tolua_Texture2D_media_Texture2D_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWidthAndHeight of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_setWidthAndHeight00
static int tolua_Texture2D_media_Texture2D_setWidthAndHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  int pWidth = ((int)  tolua_tonumber(tolua_S,2,0));
  int pHeight = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidthAndHeight'", NULL);
#endif
  {
   self->setWidthAndHeight(pWidth,pHeight);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidthAndHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureID of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getTextureID00
static int tolua_Texture2D_media_Texture2D_getTextureID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureID'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->getTextureID();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLuint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLuint));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initMaxTextureSize of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_initMaxTextureSize00
static int tolua_Texture2D_media_Texture2D_initMaxTextureSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Texture2D::initMaxTextureSize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initMaxTextureSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxTextureSize of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getMaxTextureSize00
static int tolua_Texture2D_media_Texture2D_getMaxTextureSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   int tolua_ret = (int)  media::Texture2D::getMaxTextureSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxTextureSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexName of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getTexName00
static int tolua_Texture2D_media_Texture2D_getTexName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexName'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->getTexName();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLuint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLuint));
     tolua_pushusertype(tolua_S,tolua_obj,"GLuint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFileHandle of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_setFileHandle00
static int tolua_Texture2D_media_Texture2D_setFileHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  FileHandle* file = ((FileHandle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFileHandle'", NULL);
#endif
  {
   self->setFileHandle(file);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFileHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFileHandle of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getFileHandle00
static int tolua_Texture2D_media_Texture2D_getFileHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFileHandle'", NULL);
#endif
  {
   FileHandle* tolua_ret = (FileHandle*)  self->getFileHandle();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::FileHandle");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFileHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFileName of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_setFileName00
static int tolua_Texture2D_media_Texture2D_setFileName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Texture2D",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Texture2D* self = (media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFileName'", NULL);
#endif
  {
   self->setFileName(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFileName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFileName of class  media::Texture2D */
#ifndef TOLUA_DISABLE_tolua_Texture2D_media_Texture2D_getFileName00
static int tolua_Texture2D_media_Texture2D_getFileName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Texture2D* self = (const media::Texture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFileName'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->getFileName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFileName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Texture2D_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Texture2D","media::Texture2D","media::Texture",tolua_collect_media__Texture2D);
   #else
   tolua_cclass(tolua_S,"Texture2D","media::Texture2D","media::Texture",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Texture2D");
    tolua_function(tolua_S,"create",tolua_Texture2D_media_Texture2D_create00);
    tolua_function(tolua_S,"new",tolua_Texture2D_media_Texture2D_new00);
    tolua_function(tolua_S,"new_local",tolua_Texture2D_media_Texture2D_new00_local);
    tolua_function(tolua_S,".call",tolua_Texture2D_media_Texture2D_new00_local);
    tolua_function(tolua_S,"delete",tolua_Texture2D_media_Texture2D_delete00);
    tolua_function(tolua_S,"load",tolua_Texture2D_media_Texture2D_load00);
    tolua_function(tolua_S,"load",tolua_Texture2D_media_Texture2D_load01);
    tolua_function(tolua_S,"load",tolua_Texture2D_media_Texture2D_load02);
    tolua_function(tolua_S,"load",tolua_Texture2D_media_Texture2D_load03);
    tolua_function(tolua_S,"load",tolua_Texture2D_media_Texture2D_load04);
    tolua_function(tolua_S,"reload",tolua_Texture2D_media_Texture2D_reload00);
    tolua_function(tolua_S,"isLoaded",tolua_Texture2D_media_Texture2D_isLoaded00);
    tolua_function(tolua_S,"bind",tolua_Texture2D_media_Texture2D_bind00);
    tolua_function(tolua_S,"getWidth",tolua_Texture2D_media_Texture2D_getWidth00);
    tolua_function(tolua_S,"getHeight",tolua_Texture2D_media_Texture2D_getHeight00);
    tolua_function(tolua_S,"setWidthAndHeight",tolua_Texture2D_media_Texture2D_setWidthAndHeight00);
    tolua_function(tolua_S,"getTextureID",tolua_Texture2D_media_Texture2D_getTextureID00);
    tolua_function(tolua_S,"initMaxTextureSize",tolua_Texture2D_media_Texture2D_initMaxTextureSize00);
    tolua_function(tolua_S,"getMaxTextureSize",tolua_Texture2D_media_Texture2D_getMaxTextureSize00);
    tolua_function(tolua_S,"getTexName",tolua_Texture2D_media_Texture2D_getTexName00);
    tolua_function(tolua_S,"setFileHandle",tolua_Texture2D_media_Texture2D_setFileHandle00);
    tolua_function(tolua_S,"getFileHandle",tolua_Texture2D_media_Texture2D_getFileHandle00);
    tolua_function(tolua_S,"setFileName",tolua_Texture2D_media_Texture2D_setFileName00);
    tolua_function(tolua_S,"getFileName",tolua_Texture2D_media_Texture2D_getFileName00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Texture2D (lua_State* tolua_S) {
 return tolua_Texture2D_open(tolua_S);
};
#endif


