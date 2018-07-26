#ifndef GLES20FramebufferObjectCache_h
#define GLES20FramebufferObjectCache_h

#include <map>
#include <string>

#include "module/graphics/opengl/GLES20FramebufferObject.h"

NS_MEDIA_BEGIN

class GLES20FramebufferObjectCache {
private:
    
    static const int MAX_FBO_CACHE = 30;
    
    //总共新建的数量
    static int _allocCount;
    
    //keep fbo that last time use,avoid use a same fbo continuous
    static GLES20FramebufferObject *_lastUsedFBO;
    
    //缓存map
    static std::map<std::string,GLES20FramebufferObject*> _framebufferObjectCache;
    
    //缓存数量map
    static std::map<std::string,int> _framebufferObjectCounts;
    
    /**
     根据GLES20FramebufferObject宽高生成对应的字符串
     
     @param widht GLES20FramebufferObject宽
     @param height GLES20FramebufferObject高
     @return 生成的字符串
     */
    static std::string hashForSize(int width ,int height);
    
public:
    
    /**
     从cache获取GLES20FramebufferObject对象
     
     @param width GLES20FramebufferObject宽
     @param height GLES20FramebufferObject高
     @return GLES20FramebufferObject
     */
    static GLES20FramebufferObject *fetchFramebufferObjectForSize(int width ,int height);
    
    /**
     从cache获取GLES20FramebufferObject对象
     
     @param width GLES20FramebufferObject宽
     @param height GLES20FramebufferObject高
     @param exFBO 不返回exFBO指向的FBO指针,重新获取一个
     @return GLES20FramebufferObject
     */
    static GLES20FramebufferObject *fetchFramebufferObjectForSize(int width ,int height ,GLES20FramebufferObject *exFBO);
    
    /**
     从cache获取GLES20FramebufferObject对象指针,保证连续两次获取到的GLES20FramebufferObject不是同一个
     
     @param width GLES20FramebufferObject宽
     @param height GLES20FramebufferObject高
     @return GLES20FramebufferObject
     */
    static GLES20FramebufferObject *fetchFramebufferObjectIncontinuity(int width ,int height);
    
    /**
     将GLES20FramebufferObject对象放到cache
     
     @param framebufferObject GLES20FramebufferObject
     */
    static void returnFramebufferObjectToCache(GLES20FramebufferObject *framebufferObject);
    
    /**
     清除所有GLES20FramebufferObject cache
     */
    static void purgeAllUnassignedFramebufferObjects();
};

NS_MEDIA_END

#endif /* GLES20FramebufferObjectCache_h */
