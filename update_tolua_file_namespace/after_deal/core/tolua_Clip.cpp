/*
** Lua binding: Clip
** Generated automatically by tolua++-1.0.93-lua53 on Tue Jul 24 11:21:17 2018.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Clip_open (lua_State* tolua_S);

#include "core/Clip.h"
using namespace media;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_media__Clip (lua_State* tolua_S)
{
 media::Clip* self = (media::Clip*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Json__Value (lua_State* tolua_S)
{
 Json::Value* self = (Json::Value*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"media::Clip");
 tolua_usertype(tolua_S,"AudioParams");
 tolua_usertype(tolua_S,"media::ClipBase");
 tolua_usertype(tolua_S,"media::ReaderBase");
 tolua_usertype(tolua_S,"media::MTMediaEffect");
 tolua_usertype(tolua_S,"media::Keyframe");
 tolua_usertype(tolua_S,"media::AudioFrame");
 tolua_usertype(tolua_S,"media::VideoFrame");
 tolua_usertype(tolua_S,"Json::Value");
}

/* get function: gravity of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_gravity
static int tolua_get_media__Clip_gravity(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->gravity);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gravity of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_gravity
static int tolua_set_media__Clip_gravity(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gravity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gravity = ((media::GravityType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_scale
static int tolua_get_media__Clip_scale(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->scale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_scale
static int tolua_set_media__Clip_scale(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scale = ((media::ScaleType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: anchor of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_anchor
static int tolua_get_media__Clip_anchor(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchor'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->anchor);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: anchor of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_anchor
static int tolua_set_media__Clip_anchor(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchor'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->anchor = ((media::AnchorType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: display of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_display
static int tolua_get_media__Clip_display(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'display'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->display);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: display of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_display
static int tolua_set_media__Clip_display(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'display'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->display = ((media::FrameDisplayType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_new00
static int tolua_Clip_media_Clip_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Clip* tolua_ret = (media::Clip*)  Mtolua_new((media::Clip)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Clip");
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

/* method: new_local of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_new00_local
static int tolua_Clip_media_Clip_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   media::Clip* tolua_ret = (media::Clip*)  Mtolua_new((media::Clip)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Clip");
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

/* method: new of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_new01
static int tolua_Clip_media_Clip_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  string path = ((string)  tolua_tocppstring(tolua_S,2,0));
  {
   media::Clip* tolua_ret = (media::Clip*)  Mtolua_new((media::Clip)(path));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Clip");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Clip_media_Clip_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_new01_local
static int tolua_Clip_media_Clip_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  string path = ((string)  tolua_tocppstring(tolua_S,2,0));
  {
   media::Clip* tolua_ret = (media::Clip*)  Mtolua_new((media::Clip)(path));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Clip");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Clip_media_Clip_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_new02
static int tolua_Clip_media_Clip_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::ReaderBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ReaderBase* new_reader = ((ReaderBase*)  tolua_tousertype(tolua_S,2,0));
  {
   media::Clip* tolua_ret = (media::Clip*)  Mtolua_new((media::Clip)(new_reader));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Clip");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Clip_media_Clip_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_new02_local
static int tolua_Clip_media_Clip_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::ReaderBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ReaderBase* new_reader = ((ReaderBase*)  tolua_tousertype(tolua_S,2,0));
  {
   media::Clip* tolua_ret = (media::Clip*)  Mtolua_new((media::Clip)(new_reader));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::Clip");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Clip_media_Clip_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_delete00
static int tolua_Clip_media_Clip_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getAudioFrame of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_getAudioFrame00
static int tolua_Clip_media_Clip_getAudioFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::AudioFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  AudioFrame* frame = ((AudioFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAudioFrame'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getAudioFrame(frame);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAudioFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrameByTime of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_GetFrameByTime00
static int tolua_Clip_media_Clip_GetFrameByTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::VideoFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  VideoFrame* frame = ((VideoFrame*)  tolua_tousertype(tolua_S,2,0));
  long long time = (( long long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrameByTime'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetFrameByTime(frame,time);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameByTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReader of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_getReader00
static int tolua_Clip_media_Clip_getReader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReader'", NULL);
#endif
  {
   ReaderBase* tolua_ret = (ReaderBase*)  self->getReader();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::ReaderBase");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekTo of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_seekTo00
static int tolua_Clip_media_Clip_seekTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  long long time = (( long long)  tolua_tonumber(tolua_S,2,0));
  int mode = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seekTo'", NULL);
#endif
  {
   self->seekTo(time,mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAudioParams of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_setAudioParams00
static int tolua_Clip_media_Clip_setAudioParams00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AudioParams",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  AudioParams* externAudioParam = ((AudioParams*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAudioParams'", NULL);
#endif
  {
   self->setAudioParams(externAudioParam);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAudioParams'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyEffect of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_applyEffect00
static int tolua_Clip_media_Clip_applyEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::MTMediaEffect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  MTMediaEffect* effect = ((MTMediaEffect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyEffect'", NULL);
#endif
  {
   self->applyEffect(effect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasVideo of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_hasVideo00
static int tolua_Clip_media_Clip_hasVideo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasVideo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasVideo();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasVideo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasAudio of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_hasAudio00
static int tolua_Clip_media_Clip_hasAudio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasAudio'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasAudio();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasAudio'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_getRotation00
static int tolua_Clip_media_Clip_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRotation();
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

/* method: disableAudio of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_disableAudio00
static int tolua_Clip_media_Clip_disableAudio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disableAudio'", NULL);
#endif
  {
   self->disableAudio();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disableAudio'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: disableVideo of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_disableVideo00
static int tolua_Clip_media_Clip_disableVideo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disableVideo'", NULL);
#endif
  {
   self->disableVideo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disableVideo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_open00
static int tolua_Clip_media_Clip_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   self->open();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_close00
static int tolua_Clip_media_Clip_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pause of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_pause00
static int tolua_Clip_media_Clip_pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pause'", NULL);
#endif
  {
   self->pause();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resume of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_resume00
static int tolua_Clip_media_Clip_resume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resume'", NULL);
#endif
  {
   self->resume();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startDecoder of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_startDecoder00
static int tolua_Clip_media_Clip_startDecoder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startDecoder'", NULL);
#endif
  {
   self->startDecoder();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startDecoder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopDecoder of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_stopDecoder00
static int tolua_Clip_media_Clip_stopDecoder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopDecoder'", NULL);
#endif
  {
   self->stopDecoder();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopDecoder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: switchAudioTrack of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_switchAudioTrack00
static int tolua_Clip_media_Clip_switchAudioTrack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'switchAudioTrack'", NULL);
#endif
  {
   self->switchAudioTrack();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switchAudioTrack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Reader of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_Reader00
static int tolua_Clip_media_Clip_Reader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"media::ReaderBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  ReaderBase* new_reader = ((ReaderBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Reader'", NULL);
#endif
  {
   self->Reader(new_reader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Reader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Reader of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_Reader01
static int tolua_Clip_media_Clip_Reader01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Reader'", NULL);
#endif
  {
   ReaderBase* tolua_ret = (ReaderBase*)  self->Reader();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"media::ReaderBase");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Clip_media_Clip_Reader00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: End of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_End00
static int tolua_Clip_media_Clip_End00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'End'", NULL);
#endif
  {
   float tolua_ret = (float)  self->End();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'End'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: End of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_End01
static int tolua_Clip_media_Clip_End01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'End'", NULL);
#endif
  {
   self->End(value);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Clip_media_Clip_End00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Json of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_Json00
static int tolua_Clip_media_Clip_Json00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Json'", NULL);
#endif
  {
   string tolua_ret = (string)  self->Json();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Json'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetJson of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_SetJson00
static int tolua_Clip_media_Clip_SetJson00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  string value = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetJson'", NULL);
#endif
  {
   self->SetJson(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetJson'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: JsonValue of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_JsonValue00
static int tolua_Clip_media_Clip_JsonValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'JsonValue'", NULL);
#endif
  {
   Json::Value tolua_ret = (Json::Value)  self->JsonValue();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Json::Value)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Json::Value");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Json::Value));
     tolua_pushusertype(tolua_S,tolua_obj,"Json::Value");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'JsonValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetJsonValue of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_SetJsonValue00
static int tolua_Clip_media_Clip_SetJsonValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Json::Value",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  Json::Value root = *((Json::Value*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetJsonValue'", NULL);
#endif
  {
   self->SetJsonValue(root);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetJsonValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PropertiesJSON of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_Clip_media_Clip_PropertiesJSON00
static int tolua_Clip_media_Clip_PropertiesJSON00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"media::Clip",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
  long long requested_frame = (( long long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PropertiesJSON'", NULL);
#endif
  {
   string tolua_ret = (string)  self->PropertiesJSON(requested_frame);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PropertiesJSON'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_scale_x
static int tolua_get_media__Clip_scale_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->scale_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_scale_x
static int tolua_set_media__Clip_scale_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scale_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_scale_y
static int tolua_get_media__Clip_scale_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->scale_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_scale_y
static int tolua_set_media__Clip_scale_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scale_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_location_x
static int tolua_get_media__Clip_location_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_location_x
static int tolua_set_media__Clip_location_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_location_y
static int tolua_get_media__Clip_location_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_location_y
static int tolua_set_media__Clip_location_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: alpha of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_alpha
static int tolua_get_media__Clip_alpha(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alpha'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->alpha,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: alpha of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_alpha
static int tolua_set_media__Clip_alpha(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alpha'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->alpha = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rotation of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_rotation
static int tolua_get_media__Clip_rotation(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->rotation,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rotation of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_rotation
static int tolua_set_media__Clip_rotation(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotation'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->rotation = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: time of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_time
static int tolua_get_media__Clip_time(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'time'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->time,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: time of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_time
static int tolua_set_media__Clip_time(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'time'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->time = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: volume of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_volume
static int tolua_get_media__Clip_volume(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'volume'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->volume,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: volume of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_volume
static int tolua_set_media__Clip_volume(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'volume'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->volume = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crop_gravity of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_crop_gravity
static int tolua_get_media__Clip_crop_gravity(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_gravity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->crop_gravity);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crop_gravity of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_crop_gravity
static int tolua_set_media__Clip_crop_gravity(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_gravity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->crop_gravity = ((media::GravityType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crop_width of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_crop_width
static int tolua_get_media__Clip_crop_width(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_width'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->crop_width,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crop_width of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_crop_width
static int tolua_set_media__Clip_crop_width(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_width'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->crop_width = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crop_height of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_crop_height
static int tolua_get_media__Clip_crop_height(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_height'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->crop_height,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crop_height of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_crop_height
static int tolua_set_media__Clip_crop_height(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_height'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->crop_height = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crop_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_crop_x
static int tolua_get_media__Clip_crop_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->crop_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crop_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_crop_x
static int tolua_set_media__Clip_crop_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->crop_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crop_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_crop_y
static int tolua_get_media__Clip_crop_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->crop_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crop_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_crop_y
static int tolua_set_media__Clip_crop_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crop_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->crop_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: shear_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_shear_x
static int tolua_get_media__Clip_shear_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shear_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->shear_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: shear_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_shear_x
static int tolua_set_media__Clip_shear_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shear_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->shear_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: shear_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_shear_y
static int tolua_get_media__Clip_shear_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shear_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->shear_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: shear_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_shear_y
static int tolua_set_media__Clip_shear_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'shear_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->shear_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c1_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c1_x
static int tolua_get_media__Clip_perspective_c1_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c1_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c1_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c1_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c1_x
static int tolua_set_media__Clip_perspective_c1_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c1_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c1_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c1_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c1_y
static int tolua_get_media__Clip_perspective_c1_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c1_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c1_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c1_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c1_y
static int tolua_set_media__Clip_perspective_c1_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c1_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c1_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c2_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c2_x
static int tolua_get_media__Clip_perspective_c2_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c2_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c2_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c2_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c2_x
static int tolua_set_media__Clip_perspective_c2_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c2_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c2_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c2_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c2_y
static int tolua_get_media__Clip_perspective_c2_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c2_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c2_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c2_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c2_y
static int tolua_set_media__Clip_perspective_c2_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c2_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c2_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c3_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c3_x
static int tolua_get_media__Clip_perspective_c3_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c3_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c3_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c3_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c3_x
static int tolua_set_media__Clip_perspective_c3_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c3_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c3_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c3_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c3_y
static int tolua_get_media__Clip_perspective_c3_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c3_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c3_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c3_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c3_y
static int tolua_set_media__Clip_perspective_c3_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c3_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c3_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c4_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c4_x
static int tolua_get_media__Clip_perspective_c4_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c4_x'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c4_x,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c4_x of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c4_x
static int tolua_set_media__Clip_perspective_c4_x(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c4_x'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c4_x = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: perspective_c4_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_perspective_c4_y
static int tolua_get_media__Clip_perspective_c4_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c4_y'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->perspective_c4_y,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: perspective_c4_y of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_perspective_c4_y
static int tolua_set_media__Clip_perspective_c4_y(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'perspective_c4_y'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->perspective_c4_y = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: channel_filter of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_channel_filter
static int tolua_get_media__Clip_channel_filter(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'channel_filter'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->channel_filter,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: channel_filter of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_channel_filter
static int tolua_set_media__Clip_channel_filter(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'channel_filter'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->channel_filter = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: channel_mapping of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_channel_mapping
static int tolua_get_media__Clip_channel_mapping(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'channel_mapping'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->channel_mapping,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: channel_mapping of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_channel_mapping
static int tolua_set_media__Clip_channel_mapping(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'channel_mapping'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->channel_mapping = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: has_audio of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_has_audio
static int tolua_get_media__Clip_has_audio(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'has_audio'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->has_audio,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: has_audio of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_has_audio
static int tolua_set_media__Clip_has_audio(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'has_audio'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->has_audio = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: has_video of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_get_media__Clip_has_video
static int tolua_get_media__Clip_has_video(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'has_video'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->has_video,"media::Keyframe");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: has_video of class  media::Clip */
#ifndef TOLUA_DISABLE_tolua_set_media__Clip_has_video
static int tolua_set_media__Clip_has_video(lua_State* tolua_S)
{
  media::Clip* self = (media::Clip*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'has_video'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"media::Keyframe",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->has_video = *((Keyframe*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Clip_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"media",0);
  tolua_beginmodule(tolua_S,"media");
   tolua_constant(tolua_S,"GRAVITY_TOP_LEFT",media::GRAVITY_TOP_LEFT);
   tolua_constant(tolua_S,"GRAVITY_TOP",media::GRAVITY_TOP);
   tolua_constant(tolua_S,"GRAVITY_TOP_RIGHT",media::GRAVITY_TOP_RIGHT);
   tolua_constant(tolua_S,"GRAVITY_LEFT",media::GRAVITY_LEFT);
   tolua_constant(tolua_S,"GRAVITY_CENTER",media::GRAVITY_CENTER);
   tolua_constant(tolua_S,"GRAVITY_RIGHT",media::GRAVITY_RIGHT);
   tolua_constant(tolua_S,"GRAVITY_BOTTOM_LEFT",media::GRAVITY_BOTTOM_LEFT);
   tolua_constant(tolua_S,"GRAVITY_BOTTOM",media::GRAVITY_BOTTOM);
   tolua_constant(tolua_S,"GRAVITY_BOTTOM_RIGHT",media::GRAVITY_BOTTOM_RIGHT);
   tolua_constant(tolua_S,"SCALE_CROP",media::SCALE_CROP);
   tolua_constant(tolua_S,"SCALE_FIT",media::SCALE_FIT);
   tolua_constant(tolua_S,"SCALE_STRETCH",media::SCALE_STRETCH);
   tolua_constant(tolua_S,"SCALE_NONE",media::SCALE_NONE);
   tolua_constant(tolua_S,"ANCHOR_CANVAS",media::ANCHOR_CANVAS);
   tolua_constant(tolua_S,"ANCHOR_VIEWPORT",media::ANCHOR_VIEWPORT);
   tolua_constant(tolua_S,"FRAME_DISPLAY_NONE",media::FRAME_DISPLAY_NONE);
   tolua_constant(tolua_S,"FRAME_DISPLAY_CLIP",media::FRAME_DISPLAY_CLIP);
   tolua_constant(tolua_S,"FRAME_DISPLAY_TIMELINE",media::FRAME_DISPLAY_TIMELINE);
   tolua_constant(tolua_S,"FRAME_DISPLAY_BOTH",media::FRAME_DISPLAY_BOTH);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Clip","media::Clip","media::ClipBase",tolua_collect_media__Clip);
   #else
   tolua_cclass(tolua_S,"Clip","media::Clip","media::ClipBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Clip");
    tolua_variable(tolua_S,"gravity",tolua_get_media__Clip_gravity,tolua_set_media__Clip_gravity);
    tolua_variable(tolua_S,"scale",tolua_get_media__Clip_scale,tolua_set_media__Clip_scale);
    tolua_variable(tolua_S,"anchor",tolua_get_media__Clip_anchor,tolua_set_media__Clip_anchor);
    tolua_variable(tolua_S,"display",tolua_get_media__Clip_display,tolua_set_media__Clip_display);
    tolua_function(tolua_S,"new",tolua_Clip_media_Clip_new00);
    tolua_function(tolua_S,"new_local",tolua_Clip_media_Clip_new00_local);
    tolua_function(tolua_S,".call",tolua_Clip_media_Clip_new00_local);
    tolua_function(tolua_S,"new",tolua_Clip_media_Clip_new01);
    tolua_function(tolua_S,"new_local",tolua_Clip_media_Clip_new01_local);
    tolua_function(tolua_S,".call",tolua_Clip_media_Clip_new01_local);
    tolua_function(tolua_S,"new",tolua_Clip_media_Clip_new02);
    tolua_function(tolua_S,"new_local",tolua_Clip_media_Clip_new02_local);
    tolua_function(tolua_S,".call",tolua_Clip_media_Clip_new02_local);
    tolua_function(tolua_S,"delete",tolua_Clip_media_Clip_delete00);
    tolua_function(tolua_S,"getAudioFrame",tolua_Clip_media_Clip_getAudioFrame00);
    tolua_function(tolua_S,"GetFrameByTime",tolua_Clip_media_Clip_GetFrameByTime00);
    tolua_function(tolua_S,"getReader",tolua_Clip_media_Clip_getReader00);
    tolua_function(tolua_S,"seekTo",tolua_Clip_media_Clip_seekTo00);
    tolua_function(tolua_S,"setAudioParams",tolua_Clip_media_Clip_setAudioParams00);
    tolua_function(tolua_S,"applyEffect",tolua_Clip_media_Clip_applyEffect00);
    tolua_function(tolua_S,"hasVideo",tolua_Clip_media_Clip_hasVideo00);
    tolua_function(tolua_S,"hasAudio",tolua_Clip_media_Clip_hasAudio00);
    tolua_function(tolua_S,"getRotation",tolua_Clip_media_Clip_getRotation00);
    tolua_function(tolua_S,"disableAudio",tolua_Clip_media_Clip_disableAudio00);
    tolua_function(tolua_S,"disableVideo",tolua_Clip_media_Clip_disableVideo00);
    tolua_function(tolua_S,"open",tolua_Clip_media_Clip_open00);
    tolua_function(tolua_S,"close",tolua_Clip_media_Clip_close00);
    tolua_function(tolua_S,"pause",tolua_Clip_media_Clip_pause00);
    tolua_function(tolua_S,"resume",tolua_Clip_media_Clip_resume00);
    tolua_function(tolua_S,"startDecoder",tolua_Clip_media_Clip_startDecoder00);
    tolua_function(tolua_S,"stopDecoder",tolua_Clip_media_Clip_stopDecoder00);
    tolua_function(tolua_S,"switchAudioTrack",tolua_Clip_media_Clip_switchAudioTrack00);
    tolua_function(tolua_S,"Reader",tolua_Clip_media_Clip_Reader00);
    tolua_function(tolua_S,"Reader",tolua_Clip_media_Clip_Reader01);
    tolua_function(tolua_S,"End",tolua_Clip_media_Clip_End00);
    tolua_function(tolua_S,"End",tolua_Clip_media_Clip_End01);
    tolua_function(tolua_S,"Json",tolua_Clip_media_Clip_Json00);
    tolua_function(tolua_S,"SetJson",tolua_Clip_media_Clip_SetJson00);
    tolua_function(tolua_S,"JsonValue",tolua_Clip_media_Clip_JsonValue00);
    tolua_function(tolua_S,"SetJsonValue",tolua_Clip_media_Clip_SetJsonValue00);
    tolua_function(tolua_S,"PropertiesJSON",tolua_Clip_media_Clip_PropertiesJSON00);
    tolua_variable(tolua_S,"scale_x",tolua_get_media__Clip_scale_x,tolua_set_media__Clip_scale_x);
    tolua_variable(tolua_S,"scale_y",tolua_get_media__Clip_scale_y,tolua_set_media__Clip_scale_y);
    tolua_variable(tolua_S,"location_x",tolua_get_media__Clip_location_x,tolua_set_media__Clip_location_x);
    tolua_variable(tolua_S,"location_y",tolua_get_media__Clip_location_y,tolua_set_media__Clip_location_y);
    tolua_variable(tolua_S,"alpha",tolua_get_media__Clip_alpha,tolua_set_media__Clip_alpha);
    tolua_variable(tolua_S,"rotation",tolua_get_media__Clip_rotation,tolua_set_media__Clip_rotation);
    tolua_variable(tolua_S,"time",tolua_get_media__Clip_time,tolua_set_media__Clip_time);
    tolua_variable(tolua_S,"volume",tolua_get_media__Clip_volume,tolua_set_media__Clip_volume);
    tolua_variable(tolua_S,"crop_gravity",tolua_get_media__Clip_crop_gravity,tolua_set_media__Clip_crop_gravity);
    tolua_variable(tolua_S,"crop_width",tolua_get_media__Clip_crop_width,tolua_set_media__Clip_crop_width);
    tolua_variable(tolua_S,"crop_height",tolua_get_media__Clip_crop_height,tolua_set_media__Clip_crop_height);
    tolua_variable(tolua_S,"crop_x",tolua_get_media__Clip_crop_x,tolua_set_media__Clip_crop_x);
    tolua_variable(tolua_S,"crop_y",tolua_get_media__Clip_crop_y,tolua_set_media__Clip_crop_y);
    tolua_variable(tolua_S,"shear_x",tolua_get_media__Clip_shear_x,tolua_set_media__Clip_shear_x);
    tolua_variable(tolua_S,"shear_y",tolua_get_media__Clip_shear_y,tolua_set_media__Clip_shear_y);
    tolua_variable(tolua_S,"perspective_c1_x",tolua_get_media__Clip_perspective_c1_x,tolua_set_media__Clip_perspective_c1_x);
    tolua_variable(tolua_S,"perspective_c1_y",tolua_get_media__Clip_perspective_c1_y,tolua_set_media__Clip_perspective_c1_y);
    tolua_variable(tolua_S,"perspective_c2_x",tolua_get_media__Clip_perspective_c2_x,tolua_set_media__Clip_perspective_c2_x);
    tolua_variable(tolua_S,"perspective_c2_y",tolua_get_media__Clip_perspective_c2_y,tolua_set_media__Clip_perspective_c2_y);
    tolua_variable(tolua_S,"perspective_c3_x",tolua_get_media__Clip_perspective_c3_x,tolua_set_media__Clip_perspective_c3_x);
    tolua_variable(tolua_S,"perspective_c3_y",tolua_get_media__Clip_perspective_c3_y,tolua_set_media__Clip_perspective_c3_y);
    tolua_variable(tolua_S,"perspective_c4_x",tolua_get_media__Clip_perspective_c4_x,tolua_set_media__Clip_perspective_c4_x);
    tolua_variable(tolua_S,"perspective_c4_y",tolua_get_media__Clip_perspective_c4_y,tolua_set_media__Clip_perspective_c4_y);
    tolua_variable(tolua_S,"channel_filter",tolua_get_media__Clip_channel_filter,tolua_set_media__Clip_channel_filter);
    tolua_variable(tolua_S,"channel_mapping",tolua_get_media__Clip_channel_mapping,tolua_set_media__Clip_channel_mapping);
    tolua_variable(tolua_S,"has_audio",tolua_get_media__Clip_has_audio,tolua_set_media__Clip_has_audio);
    tolua_variable(tolua_S,"has_video",tolua_get_media__Clip_has_video,tolua_set_media__Clip_has_video);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Clip (lua_State* tolua_S) {
 return tolua_Clip_open(tolua_S);
};
#endif


