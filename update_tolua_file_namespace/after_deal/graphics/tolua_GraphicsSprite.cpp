/*
** Lua binding: GraphicsSprite
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:17 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_GraphicsSprite_open (lua_State* tolua_S);

#include "module/graphics/GraphicsSprite.h"
using namespace media;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_media__GraphicsSprite (lua_State* tolua_S)
{
 media::GraphicsSprite* self = (media::GraphicsSprite*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"std::function<void()>");
 tolua_usertype(tolua_S,"media::Vec2");
 tolua_usertype(tolua_S,"media::Ref");
 tolua_usertype(tolua_S,"media::Vec3");
 tolua_usertype(tolua_S,"media::GLES20Shader");
 tolua_usertype(tolua_S,"media::FileHandle");
 tolua_usertype(tolua_S,"std::list<media::GLES20Shader*>");
 tolua_usertype(tolua_S,"media::Texture2D");
 tolua_usertype(tolua_S,"media::Size");
 tolua_usertype(tolua_S,"media::GraphicsSprite");
 tolua_usertype(tolua_S,"media::Rect");
 tolua_usertype(tolua_S,"media::V3F_C4F_T2F_Quad");
}

/* method: create of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_create00
static int tolua_GraphicsSprite_media_GraphicsSprite_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::GraphicsSprite* tolua_ret = (media::GraphicsSprite*)  media::GraphicsSprite::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::GraphicsSprite");
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

/* method: createWithFileHandle of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_createWithFileHandle00
static int tolua_GraphicsSprite_media_GraphicsSprite_createWithFileHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FileHandle* file = ((FileHandle*)  tolua_tousertype(tolua_S,2,0));
  {
   media::GraphicsSprite* tolua_ret = (media::GraphicsSprite*)  media::GraphicsSprite::createWithFileHandle(file);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::GraphicsSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithFileHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_createWithTexture00
static int tolua_GraphicsSprite_media_GraphicsSprite_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   media::GraphicsSprite* tolua_ret = (media::GraphicsSprite*)  media::GraphicsSprite::createWithTexture(texture);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::GraphicsSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_new00
static int tolua_GraphicsSprite_media_GraphicsSprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::GraphicsSprite* tolua_ret = (media::GraphicsSprite*)  Mtolua_new((media::GraphicsSprite)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::GraphicsSprite");
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

/* method: new_local of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_new00_local
static int tolua_GraphicsSprite_media_GraphicsSprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::GraphicsSprite* tolua_ret = (media::GraphicsSprite*)  Mtolua_new((media::GraphicsSprite)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::GraphicsSprite");
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

/* method: delete of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_delete00
static int tolua_GraphicsSprite_media_GraphicsSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: update of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_update00
static int tolua_GraphicsSprite_media_GraphicsSprite_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_onEnter00
static int tolua_GraphicsSprite_media_GraphicsSprite_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_onExit00
static int tolua_GraphicsSprite_media_GraphicsSprite_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanup of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_cleanup00
static int tolua_GraphicsSprite_media_GraphicsSprite_cleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanup'", NULL);
#endif
  {
   self->cleanup();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setVisible00
static int tolua_GraphicsSprite_media_GraphicsSprite_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVisible of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_isVisible00
static int tolua_GraphicsSprite_media_GraphicsSprite_isVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRunning of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_isRunning00
static int tolua_GraphicsSprite_media_GraphicsSprite_isRunning00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRunning'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRunning();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRunning'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isInSprite of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_isInSprite00
static int tolua_GraphicsSprite_media_GraphicsSprite_isInSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  float pointX = ((float)  tolua_tonumber(tolua_S,2,0));
  float pointY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isInSprite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isInSprite(pointX,pointY);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isInSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setTexture00
static int tolua_GraphicsSprite_media_GraphicsSprite_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getTexture00
static int tolua_GraphicsSprite_media_GraphicsSprite_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   Texture2D* tolua_ret = (Texture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGLTexture of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getGLTexture00
static int tolua_GraphicsSprite_media_GraphicsSprite_getGLTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGLTexture'", NULL);
#endif
  {
    unsigned int tolua_ret = (  unsigned int)  self->getGLTexture();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGLTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureWidth of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getTextureWidth00
static int tolua_GraphicsSprite_media_GraphicsSprite_getTextureWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTextureWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureHeight of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getTextureHeight00
static int tolua_GraphicsSprite_media_GraphicsSprite_getTextureHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTextureHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasShader of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_hasShader00
static int tolua_GraphicsSprite_media_GraphicsSprite_hasShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasShader'", NULL);
#endif
  {
   const bool tolua_ret = (const bool)  self->hasShader();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setShader of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setShader00
static int tolua_GraphicsSprite_media_GraphicsSprite_setShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::GLES20Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  GLES20Shader* pShader = ((GLES20Shader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShader'", NULL);
#endif
  {
   self->setShader(pShader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getShader of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getShader00
static int tolua_GraphicsSprite_media_GraphicsSprite_getShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getShader'", NULL);
#endif
  {
   GLES20Shader* tolua_ret = (GLES20Shader*)  self->getShader();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::GLES20Shader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUpdateCallback of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setUpdateCallback00
static int tolua_GraphicsSprite_media_GraphicsSprite_setUpdateCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::function<void()>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
   std::function<void()> callback = *((  std::function<void()>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUpdateCallback'", NULL);
#endif
  {
   self->setUpdateCallback(callback);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUpdateCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAnimationShader of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_addAnimationShader00
static int tolua_GraphicsSprite_media_GraphicsSprite_addAnimationShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::GLES20Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  GLES20Shader* aShader = ((GLES20Shader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAnimationShader'", NULL);
#endif
  {
   self->addAnimationShader(aShader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAnimationShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAnimationShader of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_removeAnimationShader00
static int tolua_GraphicsSprite_media_GraphicsSprite_removeAnimationShader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::GLES20Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  GLES20Shader* aShader = ((GLES20Shader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAnimationShader'", NULL);
#endif
  {
   self->removeAnimationShader(aShader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAnimationShader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimationShaders of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getAnimationShaders00
static int tolua_GraphicsSprite_media_GraphicsSprite_getAnimationShaders00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimationShaders'", NULL);
#endif
  {
   const std::list<GLES20Shader*>& tolua_ret = (const std::list<GLES20Shader*>&)  self->getAnimationShaders();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const std::list<media::GLES20Shader*>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimationShaders'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTrackType of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setTrackType00
static int tolua_GraphicsSprite_media_GraphicsSprite_setTrackType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  TrackType type = ((TrackType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTrackType'", NULL);
#endif
  {
   self->setTrackType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTrackType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTrackType of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getTrackType00
static int tolua_GraphicsSprite_media_GraphicsSprite_getTrackType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTrackType'", NULL);
#endif
  {
   const TrackType tolua_ret = (const TrackType)  self->getTrackType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTrackType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getQuads of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getQuads00
static int tolua_GraphicsSprite_media_GraphicsSprite_getQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getQuads'", NULL);
#endif
  {
   const V3F_C4F_T2F_Quad* tolua_ret = (const V3F_C4F_T2F_Quad*)  self->getQuads();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const media::V3F_C4F_T2F_Quad");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZOrder of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setZOrder00
static int tolua_GraphicsSprite_media_GraphicsSprite_setZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  int order = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZOrder'", NULL);
#endif
  {
   self->setZOrder(order);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZOrder of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getZOrder00
static int tolua_GraphicsSprite_media_GraphicsSprite_getZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZOrder'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->getZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentRotation of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setContentRotation00
static int tolua_GraphicsSprite_media_GraphicsSprite_setContentRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  int angle = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentRotation'", NULL);
#endif
  {
   self->setContentRotation(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentRotation of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getContentRotation00
static int tolua_GraphicsSprite_media_GraphicsSprite_getContentRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentRotation'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->getContentRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setRotation00
static int tolua_GraphicsSprite_media_GraphicsSprite_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  float rotation = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(rotation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getRotation00
static int tolua_GraphicsSprite_media_GraphicsSprite_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWidthAndHeight of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setWidthAndHeight00
static int tolua_GraphicsSprite_media_GraphicsSprite_setWidthAndHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
  float height = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidthAndHeight'", NULL);
#endif
  {
   self->setWidthAndHeight(width,height);
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

/* method: getWidth of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getWidth00
static int tolua_GraphicsSprite_media_GraphicsSprite_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getWidth();
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

/* method: getHeight of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getHeight00
static int tolua_GraphicsSprite_media_GraphicsSprite_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getHeight();
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

/* method: setScale of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setScale00
static int tolua_GraphicsSprite_media_GraphicsSprite_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getScale00
static int tolua_GraphicsSprite_media_GraphicsSprite_getScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScale'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setScale01
static int tolua_GraphicsSprite_media_GraphicsSprite_setScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  float scaleX = ((float)  tolua_tonumber(tolua_S,2,0));
  float scaleY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(scaleX,scaleY);
  }
 }
 return 0;
tolua_lerror:
 return tolua_GraphicsSprite_media_GraphicsSprite_setScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleX of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getScaleX00
static int tolua_GraphicsSprite_media_GraphicsSprite_getScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleX'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getScaleX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleY of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getScaleY00
static int tolua_GraphicsSprite_media_GraphicsSprite_getScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleY'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getScaleY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setPosition00
static int tolua_GraphicsSprite_media_GraphicsSprite_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  const Vec2* position = ((const Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*position);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getPosition00
static int tolua_GraphicsSprite_media_GraphicsSprite_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const Vec2& tolua_ret = (const Vec2&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const media::Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setAnchorPoint00
static int tolua_GraphicsSprite_media_GraphicsSprite_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  const Vec2* anchorPoint = ((const Vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*anchorPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorPoint of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getAnchorPoint00
static int tolua_GraphicsSprite_media_GraphicsSprite_getAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorPoint'", NULL);
#endif
  {
   const Vec2& tolua_ret = (const Vec2&)  self->getAnchorPoint();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const media::Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setTextureRect00
static int tolua_GraphicsSprite_media_GraphicsSprite_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Rect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  const NS_MEDIA::Rect rect = *((const NS_MEDIA::Rect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureRect of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getTextureRect00
static int tolua_GraphicsSprite_media_GraphicsSprite_getTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureRect'", NULL);
#endif
  {
   const NS_MEDIA::Rect& tolua_ret = (const NS_MEDIA::Rect&)  self->getTextureRect();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const media::Rect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlip of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setFlip00
static int tolua_GraphicsSprite_media_GraphicsSprite_setFlip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  int flipFlags = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlip'", NULL);
#endif
  {
   self->setFlip(flipFlags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFlip of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getFlip00
static int tolua_GraphicsSprite_media_GraphicsSprite_getFlip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFlip'", NULL);
#endif
  {
   const int tolua_ret = (const int)  self->getFlip();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFlip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setAlpha00
static int tolua_GraphicsSprite_media_GraphicsSprite_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  float alpha = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getAlpha00
static int tolua_GraphicsSprite_media_GraphicsSprite_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   const float tolua_ret = (const float)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUseColor of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setUseColor00
static int tolua_GraphicsSprite_media_GraphicsSprite_setUseColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  bool use = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUseColor'", NULL);
#endif
  {
   self->setUseColor(use);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUseColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: needUseColor of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_needUseColor00
static int tolua_GraphicsSprite_media_GraphicsSprite_needUseColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'needUseColor'", NULL);
#endif
  {
   const bool tolua_ret = (const bool)  self->needUseColor();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'needUseColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextColor of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setTextColor00
static int tolua_GraphicsSprite_media_GraphicsSprite_setTextColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  const Vec3* color = ((const Vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColor'", NULL);
#endif
  {
   self->setTextColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextColor of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getTextColor00
static int tolua_GraphicsSprite_media_GraphicsSprite_getTextColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextColor'", NULL);
#endif
  {
   const Vec3& tolua_ret = (const Vec3&)  self->getTextColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const media::Vec3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScissorBox of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setScissorBox00
static int tolua_GraphicsSprite_media_GraphicsSprite_setScissorBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const media::Rect",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  const NS_MEDIA::Rect* rect = ((const NS_MEDIA::Rect*)  tolua_tousertype(tolua_S,2,0));
  bool enableScissor = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScissorBox'", NULL);
#endif
  {
   self->setScissorBox(*rect,enableScissor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScissorBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScissorLowerLeft of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getScissorLowerLeft00
static int tolua_GraphicsSprite_media_GraphicsSprite_getScissorLowerLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScissorLowerLeft'", NULL);
#endif
  {
   const Vec2& tolua_ret = (const Vec2&)  self->getScissorLowerLeft();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const media::Vec2");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScissorLowerLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScissorBox of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_getScissorBox00
static int tolua_GraphicsSprite_media_GraphicsSprite_getScissorBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScissorBox'", NULL);
#endif
  {
   const NS_MEDIA::Size& tolua_ret = (const NS_MEDIA::Size&)  self->getScissorBox();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const media::Size");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScissorBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnableScissor of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_isEnableScissor00
static int tolua_GraphicsSprite_media_GraphicsSprite_isEnableScissor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnableScissor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnableScissor();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnableScissor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlphaPremultiplied of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_setAlphaPremultiplied00
static int tolua_GraphicsSprite_media_GraphicsSprite_setAlphaPremultiplied00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::GraphicsSprite* self = (media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
  bool premultiplied = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlphaPremultiplied'", NULL);
#endif
  {
   self->setAlphaPremultiplied(premultiplied);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlphaPremultiplied'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAlphaPremultiplied of class  media::GraphicsSprite */
#ifndef TOLUA_DISABLE_tolua_GraphicsSprite_media_GraphicsSprite_isAlphaPremultiplied00
static int tolua_GraphicsSprite_media_GraphicsSprite_isAlphaPremultiplied00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::GraphicsSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::GraphicsSprite* self = (const media::GraphicsSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAlphaPremultiplied'", NULL);
#endif
  {
   const bool tolua_ret = (const bool)  self->isAlphaPremultiplied();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAlphaPremultiplied'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_GraphicsSprite_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"UNKNOW_TRACK",UNKNOW_TRACK);
  tolua_constant(tolua_S,"NORMAL_TRACK",NORMAL_TRACK);
  tolua_constant(tolua_S,"VIDEO_TRACK",VIDEO_TRACK);
  tolua_constant(tolua_S,"MUSIC_TRACK",MUSIC_TRACK);
  tolua_constant(tolua_S,"PICTURE_TRACK",PICTURE_TRACK);
  tolua_constant(tolua_S,"SUBTITLE_TRACK",SUBTITLE_TRACK);
  tolua_constant(tolua_S,"TEXT_TEMPLATE_TRACK",TEXT_TEMPLATE_TRACK);
  tolua_constant(tolua_S,"WATERMARK_TRACK",WATERMARK_TRACK);
  tolua_constant(tolua_S,"VIDEO_MATERIAL_TRACK",VIDEO_MATERIAL_TRACK);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"GraphicsSprite","media::GraphicsSprite","media::Ref",tolua_collect_media__GraphicsSprite);
   #else
   tolua_cclass(tolua_S,"GraphicsSprite","media::GraphicsSprite","media::Ref",NULL);
   #endif
   tolua_beginmodule(tolua_S,"GraphicsSprite");
    tolua_constant(tolua_S,"FLIP_NONE",media::GraphicsSprite::FLIP_NONE);
    tolua_constant(tolua_S,"FLIP_VERTICAL",media::GraphicsSprite::FLIP_VERTICAL);
    tolua_constant(tolua_S,"FLIP_HORIZONTAL",media::GraphicsSprite::FLIP_HORIZONTAL);
    tolua_function(tolua_S,"create",tolua_GraphicsSprite_media_GraphicsSprite_create00);
    tolua_function(tolua_S,"createWithFileHandle",tolua_GraphicsSprite_media_GraphicsSprite_createWithFileHandle00);
    tolua_function(tolua_S,"createWithTexture",tolua_GraphicsSprite_media_GraphicsSprite_createWithTexture00);
    tolua_function(tolua_S,"new",tolua_GraphicsSprite_media_GraphicsSprite_new00);
    tolua_function(tolua_S,"new_local",tolua_GraphicsSprite_media_GraphicsSprite_new00_local);
    tolua_function(tolua_S,".call",tolua_GraphicsSprite_media_GraphicsSprite_new00_local);
    tolua_function(tolua_S,"delete",tolua_GraphicsSprite_media_GraphicsSprite_delete00);
    tolua_function(tolua_S,"update",tolua_GraphicsSprite_media_GraphicsSprite_update00);
    tolua_function(tolua_S,"onEnter",tolua_GraphicsSprite_media_GraphicsSprite_onEnter00);
    tolua_function(tolua_S,"onExit",tolua_GraphicsSprite_media_GraphicsSprite_onExit00);
    tolua_function(tolua_S,"cleanup",tolua_GraphicsSprite_media_GraphicsSprite_cleanup00);
    tolua_function(tolua_S,"setVisible",tolua_GraphicsSprite_media_GraphicsSprite_setVisible00);
    tolua_function(tolua_S,"isVisible",tolua_GraphicsSprite_media_GraphicsSprite_isVisible00);
    tolua_function(tolua_S,"isRunning",tolua_GraphicsSprite_media_GraphicsSprite_isRunning00);
    tolua_function(tolua_S,"isInSprite",tolua_GraphicsSprite_media_GraphicsSprite_isInSprite00);
    tolua_function(tolua_S,"setTexture",tolua_GraphicsSprite_media_GraphicsSprite_setTexture00);
    tolua_function(tolua_S,"getTexture",tolua_GraphicsSprite_media_GraphicsSprite_getTexture00);
    tolua_function(tolua_S,"getGLTexture",tolua_GraphicsSprite_media_GraphicsSprite_getGLTexture00);
    tolua_function(tolua_S,"getTextureWidth",tolua_GraphicsSprite_media_GraphicsSprite_getTextureWidth00);
    tolua_function(tolua_S,"getTextureHeight",tolua_GraphicsSprite_media_GraphicsSprite_getTextureHeight00);
    tolua_function(tolua_S,"hasShader",tolua_GraphicsSprite_media_GraphicsSprite_hasShader00);
    tolua_function(tolua_S,"setShader",tolua_GraphicsSprite_media_GraphicsSprite_setShader00);
    tolua_function(tolua_S,"getShader",tolua_GraphicsSprite_media_GraphicsSprite_getShader00);
    tolua_function(tolua_S,"setUpdateCallback",tolua_GraphicsSprite_media_GraphicsSprite_setUpdateCallback00);
    tolua_function(tolua_S,"addAnimationShader",tolua_GraphicsSprite_media_GraphicsSprite_addAnimationShader00);
    tolua_function(tolua_S,"removeAnimationShader",tolua_GraphicsSprite_media_GraphicsSprite_removeAnimationShader00);
    tolua_function(tolua_S,"getAnimationShaders",tolua_GraphicsSprite_media_GraphicsSprite_getAnimationShaders00);
    tolua_function(tolua_S,"setTrackType",tolua_GraphicsSprite_media_GraphicsSprite_setTrackType00);
    tolua_function(tolua_S,"getTrackType",tolua_GraphicsSprite_media_GraphicsSprite_getTrackType00);
    tolua_function(tolua_S,"getQuads",tolua_GraphicsSprite_media_GraphicsSprite_getQuads00);
    tolua_function(tolua_S,"setZOrder",tolua_GraphicsSprite_media_GraphicsSprite_setZOrder00);
    tolua_function(tolua_S,"getZOrder",tolua_GraphicsSprite_media_GraphicsSprite_getZOrder00);
    tolua_function(tolua_S,"setContentRotation",tolua_GraphicsSprite_media_GraphicsSprite_setContentRotation00);
    tolua_function(tolua_S,"getContentRotation",tolua_GraphicsSprite_media_GraphicsSprite_getContentRotation00);
    tolua_function(tolua_S,"setRotation",tolua_GraphicsSprite_media_GraphicsSprite_setRotation00);
    tolua_function(tolua_S,"getRotation",tolua_GraphicsSprite_media_GraphicsSprite_getRotation00);
    tolua_function(tolua_S,"setWidthAndHeight",tolua_GraphicsSprite_media_GraphicsSprite_setWidthAndHeight00);
    tolua_function(tolua_S,"getWidth",tolua_GraphicsSprite_media_GraphicsSprite_getWidth00);
    tolua_function(tolua_S,"getHeight",tolua_GraphicsSprite_media_GraphicsSprite_getHeight00);
    tolua_function(tolua_S,"setScale",tolua_GraphicsSprite_media_GraphicsSprite_setScale00);
    tolua_function(tolua_S,"getScale",tolua_GraphicsSprite_media_GraphicsSprite_getScale00);
    tolua_function(tolua_S,"setScale",tolua_GraphicsSprite_media_GraphicsSprite_setScale01);
    tolua_function(tolua_S,"getScaleX",tolua_GraphicsSprite_media_GraphicsSprite_getScaleX00);
    tolua_function(tolua_S,"getScaleY",tolua_GraphicsSprite_media_GraphicsSprite_getScaleY00);
    tolua_function(tolua_S,"setPosition",tolua_GraphicsSprite_media_GraphicsSprite_setPosition00);
    tolua_function(tolua_S,"getPosition",tolua_GraphicsSprite_media_GraphicsSprite_getPosition00);
    tolua_function(tolua_S,"setAnchorPoint",tolua_GraphicsSprite_media_GraphicsSprite_setAnchorPoint00);
    tolua_function(tolua_S,"getAnchorPoint",tolua_GraphicsSprite_media_GraphicsSprite_getAnchorPoint00);
    tolua_function(tolua_S,"setTextureRect",tolua_GraphicsSprite_media_GraphicsSprite_setTextureRect00);
    tolua_function(tolua_S,"getTextureRect",tolua_GraphicsSprite_media_GraphicsSprite_getTextureRect00);
    tolua_function(tolua_S,"setFlip",tolua_GraphicsSprite_media_GraphicsSprite_setFlip00);
    tolua_function(tolua_S,"getFlip",tolua_GraphicsSprite_media_GraphicsSprite_getFlip00);
    tolua_function(tolua_S,"setAlpha",tolua_GraphicsSprite_media_GraphicsSprite_setAlpha00);
    tolua_function(tolua_S,"getAlpha",tolua_GraphicsSprite_media_GraphicsSprite_getAlpha00);
    tolua_function(tolua_S,"setUseColor",tolua_GraphicsSprite_media_GraphicsSprite_setUseColor00);
    tolua_function(tolua_S,"needUseColor",tolua_GraphicsSprite_media_GraphicsSprite_needUseColor00);
    tolua_function(tolua_S,"setTextColor",tolua_GraphicsSprite_media_GraphicsSprite_setTextColor00);
    tolua_function(tolua_S,"getTextColor",tolua_GraphicsSprite_media_GraphicsSprite_getTextColor00);
    tolua_function(tolua_S,"setScissorBox",tolua_GraphicsSprite_media_GraphicsSprite_setScissorBox00);
    tolua_function(tolua_S,"getScissorLowerLeft",tolua_GraphicsSprite_media_GraphicsSprite_getScissorLowerLeft00);
    tolua_function(tolua_S,"getScissorBox",tolua_GraphicsSprite_media_GraphicsSprite_getScissorBox00);
    tolua_function(tolua_S,"isEnableScissor",tolua_GraphicsSprite_media_GraphicsSprite_isEnableScissor00);
    tolua_function(tolua_S,"setAlphaPremultiplied",tolua_GraphicsSprite_media_GraphicsSprite_setAlphaPremultiplied00);
    tolua_function(tolua_S,"isAlphaPremultiplied",tolua_GraphicsSprite_media_GraphicsSprite_isAlphaPremultiplied00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_GraphicsSprite (lua_State* tolua_S) {
 return tolua_GraphicsSprite_open(tolua_S);
};
#endif


