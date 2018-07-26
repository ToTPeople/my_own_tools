/*
** Lua binding: TextureCache
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:17 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_TextureCache_open (lua_State* tolua_S);

#include "module/graphics/TextureCache.h"
using namespace media;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"media::TextureCache");
 tolua_usertype(tolua_S,"FileHandle");
 tolua_usertype(tolua_S,"Texture2D");
}

/* get function: MAX_CACHE of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_get_media__TextureCache_MAX_CACHE
static int tolua_get_media__TextureCache_MAX_CACHE(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)media::TextureCache::MAX_CACHE);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCurrentCache of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_setCurrentCache00
static int tolua_TextureCache_media_TextureCache_setCurrentCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   media::TextureCache::setCurrentCache(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: findTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_findTexture00
static int tolua_TextureCache_media_TextureCache_findTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const FileHandle* file = ((const FileHandle*)  tolua_tousertype(tolua_S,2,0));
  {
   Texture2D* tolua_ret = (Texture2D*)  media::TextureCache::findTexture(file);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: findTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_findTexture01
static int tolua_TextureCache_media_TextureCache_findTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string fileName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   Texture2D* tolua_ret = (Texture2D*)  media::TextureCache::findTexture(fileName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Texture2D");
   tolua_pushcppstring(tolua_S,(const char*)fileName);
  }
 }
 return 2;
tolua_lerror:
 return tolua_TextureCache_media_TextureCache_findTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTextureToCache of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_addTextureToCache00
static int tolua_TextureCache_media_TextureCache_addTextureToCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"FileHandle",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FileHandle* file = ((FileHandle*)  tolua_tousertype(tolua_S,2,0));
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,3,0));
  {
   media::TextureCache::addTextureToCache(file,texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTextureToCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTextureToCache of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_addTextureToCache01
static int tolua_TextureCache_media_TextureCache_addTextureToCache01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string fileName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,3,0));
  {
   media::TextureCache::addTextureToCache(fileName,texture);
   tolua_pushcppstring(tolua_S,(const char*)fileName);
  }
 }
 return 1;
tolua_lerror:
 return tolua_TextureCache_media_TextureCache_addTextureToCache00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_addTexture00
static int tolua_TextureCache_media_TextureCache_addTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FileHandle* file = ((FileHandle*)  tolua_tousertype(tolua_S,2,0));
  {
   Texture2D* tolua_ret = (Texture2D*)  media::TextureCache::addTexture(file);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_releaseTexture00
static int tolua_TextureCache_media_TextureCache_releaseTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::string fileName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   media::TextureCache::releaseTexture(fileName);
   tolua_pushcppstring(tolua_S,(const char*)fileName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'releaseTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_releaseTexture01
static int tolua_TextureCache_media_TextureCache_releaseTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const FileHandle* file = ((const FileHandle*)  tolua_tousertype(tolua_S,2,0));
  {
   media::TextureCache::releaseTexture(file);
  }
 }
 return 0;
tolua_lerror:
 return tolua_TextureCache_media_TextureCache_releaseTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_releaseTexture02
static int tolua_TextureCache_media_TextureCache_releaseTexture02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   media::TextureCache::releaseTexture(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_TextureCache_media_TextureCache_releaseTexture01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadTexture of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_reloadTexture00
static int tolua_TextureCache_media_TextureCache_reloadTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  media::TextureCache::reloadTexture(texture);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadAllTextures of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_reloadAllTextures00
static int tolua_TextureCache_media_TextureCache_reloadAllTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::TextureCache::reloadAllTextures();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadAllTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllTextures of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_removeAllTextures00
static int tolua_TextureCache_media_TextureCache_removeAllTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int cacheIndex = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   media::TextureCache::removeAllTextures(cacheIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeUnusedTextures of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_removeUnusedTextures00
static int tolua_TextureCache_media_TextureCache_removeUnusedTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::TextureCache::removeUnusedTextures();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeUnusedTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dump of class  media::TextureCache */
#ifndef TOLUA_DISABLE_tolua_TextureCache_media_TextureCache_dump00
static int tolua_TextureCache_media_TextureCache_dump00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::TextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::TextureCache::dump();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dump'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_TextureCache_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   tolua_cclass(tolua_S,"TextureCache","media::TextureCache","",NULL);
   tolua_beginmodule(tolua_S,"TextureCache");
    tolua_variable(tolua_S,"MAX_CACHE",tolua_get_media__TextureCache_MAX_CACHE,NULL);
    tolua_function(tolua_S,"setCurrentCache",tolua_TextureCache_media_TextureCache_setCurrentCache00);
    tolua_function(tolua_S,"findTexture",tolua_TextureCache_media_TextureCache_findTexture00);
    tolua_function(tolua_S,"findTexture",tolua_TextureCache_media_TextureCache_findTexture01);
    tolua_function(tolua_S,"addTextureToCache",tolua_TextureCache_media_TextureCache_addTextureToCache00);
    tolua_function(tolua_S,"addTextureToCache",tolua_TextureCache_media_TextureCache_addTextureToCache01);
    tolua_function(tolua_S,"addTexture",tolua_TextureCache_media_TextureCache_addTexture00);
    tolua_function(tolua_S,"releaseTexture",tolua_TextureCache_media_TextureCache_releaseTexture00);
    tolua_function(tolua_S,"releaseTexture",tolua_TextureCache_media_TextureCache_releaseTexture01);
    tolua_function(tolua_S,"releaseTexture",tolua_TextureCache_media_TextureCache_releaseTexture02);
    tolua_function(tolua_S,"reloadTexture",tolua_TextureCache_media_TextureCache_reloadTexture00);
    tolua_function(tolua_S,"reloadAllTextures",tolua_TextureCache_media_TextureCache_reloadAllTextures00);
    tolua_function(tolua_S,"removeAllTextures",tolua_TextureCache_media_TextureCache_removeAllTextures00);
    tolua_function(tolua_S,"removeUnusedTextures",tolua_TextureCache_media_TextureCache_removeUnusedTextures00);
    tolua_function(tolua_S,"dump",tolua_TextureCache_media_TextureCache_dump00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_TextureCache (lua_State* tolua_S) {
 return tolua_TextureCache_open(tolua_S);
};
#endif

