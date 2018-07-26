/*
** Lua binding: Image
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:17 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Image_open (lua_State* tolua_S);

#include "module/graphics/Image.h"
using namespace media;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Size (lua_State* tolua_S)
{
 Size* self = (Size*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_media__Image (lua_State* tolua_S)
{
 media::Image* self = (media::Image*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Ref");
 tolua_usertype(tolua_S,"Size");
 tolua_usertype(tolua_S,"media::Image");
 tolua_usertype(tolua_S,"FileHandle");
}

/* method: delete of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_delete00
static int tolua_Image_media_Image_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: initWithFileHandel of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_initWithFileHandel00
static int tolua_Image_media_Image_initWithFileHandel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const FileHandle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
  const FileHandle* file = ((const FileHandle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFileHandel'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFileHandel(file);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFileHandel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFileData of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_initWithFileData00
static int tolua_Image_media_Image_initWithFileData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
  unsigned const char* fileData = ((unsigned const char*)  tolua_tostring(tolua_S,2,0));
   long dataLen = ((  long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFileData'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFileData(fileData,dataLen);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFileData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithImageInfo of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_initWithImageInfo00
static int tolua_Image_media_Image_initWithImageInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
  int pWidth = ((int)  tolua_tonumber(tolua_S,2,0));
  int pHeight = ((int)  tolua_tonumber(tolua_S,3,0));
   unsigned int format = ((  unsigned int)  tolua_tonumber(tolua_S,4,0));
  bool needMallocPixels = ((bool)  tolua_toboolean(tolua_S,5,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithImageInfo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithImageInfo(pWidth,pHeight,format,needMallocPixels);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithImageInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPixels of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_setPixels00
static int tolua_Image_media_Image_setPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
  void* ps = ((void*)  tolua_touserdata(tolua_S,2,0));
  bool copy = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPixels'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setPixels(ps,copy);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPixels of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_getPixels00
static int tolua_Image_media_Image_getPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixels'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->getPixels();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_getWidth00
static int tolua_Image_media_Image_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getHeight of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_getHeight00
static int tolua_Image_media_Image_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getLineSize of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_getLineSize00
static int tolua_Image_media_Image_getLineSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineSize'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLineSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getComponents of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_getComponents00
static int tolua_Image_media_Image_getComponents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getComponents'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getComponents();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getComponents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isUpdated of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_isUpdated00
static int tolua_Image_media_Image_isUpdated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUpdated'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isUpdated();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUpdated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUpdated of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_setUpdated00
static int tolua_Image_media_Image_setUpdated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
  bool update = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUpdated'", NULL);
#endif
  {
   self->setUpdated(update);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUpdated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFormat of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_getFormat00
static int tolua_Image_media_Image_getFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFormat'", NULL);
#endif
  {
    unsigned int tolua_ret = (  unsigned int)  self->getFormat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_size00
static int tolua_Image_media_Image_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const media::Image* self = (const media::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   Size tolua_ret = (Size)  self->size();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Size)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Size");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Size));
     tolua_pushusertype(tolua_S,tolua_obj,"Size");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_create00
static int tolua_Image_media_Image_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image* self = (media::Image*)  tolua_tousertype(tolua_S,1,0);
  int p_width = ((int)  tolua_tonumber(tolua_S,2,0));
  int p_height = ((int)  tolua_tonumber(tolua_S,3,0));
  bool p_use_mipmaps = ((bool)  tolua_toboolean(tolua_S,4,0));
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create'", NULL);
#endif
  {
   self->create(p_width,p_height,p_use_mipmaps,p_format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_new00
static int tolua_Image_media_Image_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Image* tolua_ret = (media::Image*)  Mtolua_new((media::Image)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Image");
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

/* method: new_local of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_new00_local
static int tolua_Image_media_Image_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Image* tolua_ret = (media::Image*)  Mtolua_new((media::Image)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Image");
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

/* method: new of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_new01
static int tolua_Image_media_Image_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int p_width = ((int)  tolua_tonumber(tolua_S,2,0));
  int p_height = ((int)  tolua_tonumber(tolua_S,3,0));
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,4,0));
  bool p_use_mipmaps = ((bool)  tolua_toboolean(tolua_S,5,false));
  {
   media::Image* tolua_ret = (media::Image*)  Mtolua_new((media::Image)(p_width,p_height,p_format,p_use_mipmaps));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Image");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Image_media_Image_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_new01_local
static int tolua_Image_media_Image_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int p_width = ((int)  tolua_tonumber(tolua_S,2,0));
  int p_height = ((int)  tolua_tonumber(tolua_S,3,0));
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,4,0));
  bool p_use_mipmaps = ((bool)  tolua_toboolean(tolua_S,5,false));
  {
   media::Image* tolua_ret = (media::Image*)  Mtolua_new((media::Image)(p_width,p_height,p_format,p_use_mipmaps));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Image");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Image_media_Image_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_format_pixel_size of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_get_format_pixel_size00
static int tolua_Image_media_Image_get_format_pixel_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  media::Image::get_format_pixel_size(p_format);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_format_pixel_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_format_pixel_rshift of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_get_format_pixel_rshift00
static int tolua_Image_media_Image_get_format_pixel_rshift00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  media::Image::get_format_pixel_rshift(p_format);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_format_pixel_rshift'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_format_block_size of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_get_format_block_size00
static int tolua_Image_media_Image_get_format_block_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  media::Image::get_format_block_size(p_format);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_format_block_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_format_min_pixel_size of class  media::Image */
#ifndef TOLUA_DISABLE_tolua_Image_media_Image_get_format_min_pixel_size00
static int tolua_Image_media_Image_get_format_min_pixel_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Image::Format p_format = ((media::Image::Format) (int)  tolua_tonumber(tolua_S,2,0));
  int r_w = ((int)  tolua_tonumber(tolua_S,3,0));
  int r_h = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   media::Image::get_format_min_pixel_size(p_format,r_w,r_h);
   tolua_pushnumber(tolua_S,(lua_Number)r_w);
   tolua_pushnumber(tolua_S,(lua_Number)r_h);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_format_min_pixel_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Image_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Image","media::Image","Ref",tolua_collect_media__Image);
   #else
   tolua_cclass(tolua_S,"Image","media::Image","Ref",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Image");
    tolua_constant(tolua_S,"FORMAT_L8",media::Image::FORMAT_L8);
    tolua_constant(tolua_S,"FORMAT_LA8",media::Image::FORMAT_LA8);
    tolua_constant(tolua_S,"FORMAT_R8",media::Image::FORMAT_R8);
    tolua_constant(tolua_S,"FORMAT_RG8",media::Image::FORMAT_RG8);
    tolua_constant(tolua_S,"FORMAT_RGB8",media::Image::FORMAT_RGB8);
    tolua_constant(tolua_S,"FORMAT_RGBA8",media::Image::FORMAT_RGBA8);
    tolua_constant(tolua_S,"FORMAT_RGBA4444",media::Image::FORMAT_RGBA4444);
    tolua_constant(tolua_S,"FORMAT_RGBA5551",media::Image::FORMAT_RGBA5551);
    tolua_constant(tolua_S,"FORMAT_RF",media::Image::FORMAT_RF);
    tolua_constant(tolua_S,"FORMAT_RGF",media::Image::FORMAT_RGF);
    tolua_constant(tolua_S,"FORMAT_RGBF",media::Image::FORMAT_RGBF);
    tolua_constant(tolua_S,"FORMAT_RGBAF",media::Image::FORMAT_RGBAF);
    tolua_constant(tolua_S,"FORMAT_RH",media::Image::FORMAT_RH);
    tolua_constant(tolua_S,"FORMAT_RGH",media::Image::FORMAT_RGH);
    tolua_constant(tolua_S,"FORMAT_RGBH",media::Image::FORMAT_RGBH);
    tolua_constant(tolua_S,"FORMAT_RGBAH",media::Image::FORMAT_RGBAH);
    tolua_constant(tolua_S,"FORMAT_RGBE9995",media::Image::FORMAT_RGBE9995);
    tolua_constant(tolua_S,"FORMAT_DXT1",media::Image::FORMAT_DXT1);
    tolua_constant(tolua_S,"FORMAT_DXT3",media::Image::FORMAT_DXT3);
    tolua_constant(tolua_S,"FORMAT_DXT5",media::Image::FORMAT_DXT5);
    tolua_constant(tolua_S,"FORMAT_RGTC_R",media::Image::FORMAT_RGTC_R);
    tolua_constant(tolua_S,"FORMAT_RGTC_RG",media::Image::FORMAT_RGTC_RG);
    tolua_constant(tolua_S,"FORMAT_BPTC_RGBA",media::Image::FORMAT_BPTC_RGBA);
    tolua_constant(tolua_S,"FORMAT_BPTC_RGBF",media::Image::FORMAT_BPTC_RGBF);
    tolua_constant(tolua_S,"FORMAT_BPTC_RGBFU",media::Image::FORMAT_BPTC_RGBFU);
    tolua_constant(tolua_S,"FORMAT_PVRTC2",media::Image::FORMAT_PVRTC2);
    tolua_constant(tolua_S,"FORMAT_PVRTC2A",media::Image::FORMAT_PVRTC2A);
    tolua_constant(tolua_S,"FORMAT_PVRTC4",media::Image::FORMAT_PVRTC4);
    tolua_constant(tolua_S,"FORMAT_PVRTC4A",media::Image::FORMAT_PVRTC4A);
    tolua_constant(tolua_S,"FORMAT_ETC",media::Image::FORMAT_ETC);
    tolua_constant(tolua_S,"FORMAT_ETC2_R11",media::Image::FORMAT_ETC2_R11);
    tolua_constant(tolua_S,"FORMAT_ETC2_R11S",media::Image::FORMAT_ETC2_R11S);
    tolua_constant(tolua_S,"FORMAT_ETC2_RG11",media::Image::FORMAT_ETC2_RG11);
    tolua_constant(tolua_S,"FORMAT_ETC2_RG11S",media::Image::FORMAT_ETC2_RG11S);
    tolua_constant(tolua_S,"FORMAT_ETC2_RGB8",media::Image::FORMAT_ETC2_RGB8);
    tolua_constant(tolua_S,"FORMAT_ETC2_RGBA8",media::Image::FORMAT_ETC2_RGBA8);
    tolua_constant(tolua_S,"FORMAT_ETC2_RGB8A1",media::Image::FORMAT_ETC2_RGB8A1);
    tolua_constant(tolua_S,"FORMAT_MAX",media::Image::FORMAT_MAX);
    tolua_function(tolua_S,"delete",tolua_Image_media_Image_delete00);
    tolua_function(tolua_S,"initWithFileHandel",tolua_Image_media_Image_initWithFileHandel00);
    tolua_function(tolua_S,"initWithFileData",tolua_Image_media_Image_initWithFileData00);
    tolua_function(tolua_S,"initWithImageInfo",tolua_Image_media_Image_initWithImageInfo00);
    tolua_function(tolua_S,"setPixels",tolua_Image_media_Image_setPixels00);
    tolua_function(tolua_S,"getPixels",tolua_Image_media_Image_getPixels00);
    tolua_function(tolua_S,"getWidth",tolua_Image_media_Image_getWidth00);
    tolua_function(tolua_S,"getHeight",tolua_Image_media_Image_getHeight00);
    tolua_function(tolua_S,"getLineSize",tolua_Image_media_Image_getLineSize00);
    tolua_function(tolua_S,"getComponents",tolua_Image_media_Image_getComponents00);
    tolua_function(tolua_S,"isUpdated",tolua_Image_media_Image_isUpdated00);
    tolua_function(tolua_S,"setUpdated",tolua_Image_media_Image_setUpdated00);
    tolua_function(tolua_S,"getFormat",tolua_Image_media_Image_getFormat00);
    tolua_function(tolua_S,"size",tolua_Image_media_Image_size00);
    tolua_function(tolua_S,"create",tolua_Image_media_Image_create00);
    tolua_function(tolua_S,"new",tolua_Image_media_Image_new00);
    tolua_function(tolua_S,"new_local",tolua_Image_media_Image_new00_local);
    tolua_function(tolua_S,".call",tolua_Image_media_Image_new00_local);
    tolua_function(tolua_S,"new",tolua_Image_media_Image_new01);
    tolua_function(tolua_S,"new_local",tolua_Image_media_Image_new01_local);
    tolua_function(tolua_S,".call",tolua_Image_media_Image_new01_local);
    tolua_function(tolua_S,"get_format_pixel_size",tolua_Image_media_Image_get_format_pixel_size00);
    tolua_function(tolua_S,"get_format_pixel_rshift",tolua_Image_media_Image_get_format_pixel_rshift00);
    tolua_function(tolua_S,"get_format_block_size",tolua_Image_media_Image_get_format_block_size00);
    tolua_function(tolua_S,"get_format_min_pixel_size",tolua_Image_media_Image_get_format_min_pixel_size00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Image (lua_State* tolua_S) {
 return tolua_Image_open(tolua_S);
};
#endif

