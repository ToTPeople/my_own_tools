#ifndef GRAPHICSSPRITE_H
#define GRAPHICSSPRITE_H

#include <list>

#include "base/MTRef.h"
#include "base/Types.h"
#include "math/Vec3.h"
#include "module/media/MTMVDefine.h"
#include "platform/MTGL.h"

NS_MEDIA_BEGIN

class Texture2D;
class GLES20Shader;
class FileHandle;
class GLES20FramebufferObject;

/**
 * @brief Class GraphicsSprite
 * @version v2.0
 */
class GraphicsSprite : public media::Ref
{
    friend class CBaseGraphicsService;
public:
    /**
     * Defines the flip flags used for rendering the sprite.
     */
    enum FlipFlags
    {
        FLIP_NONE,
        FLIP_VERTICAL,
        FLIP_HORIZONTAL
    };

    /**
     * @brief Creates an empty sprite without texture. You can call setTexture method subsequently.
     *
     * @return A sprite object
     */
    static GraphicsSprite *create();

    /**
     * @brief Creates a sprite with a image file
     *
     * @param file A pointer to a image file
     * @return A sprite object
     */
    static GraphicsSprite *createWithFileHandle(FileHandle *file);

    /**
     * @brief Creates a sprite with a Texture2D object.
     *
     * @param texture A pointer to a Texture2D object.
     * @return A sprite object
     */
    static GraphicsSprite *createWithTexture(Texture2D *texture);

    /**
     * @brief Constructor
     */
    GraphicsSprite();

    /**
     * @brief Destructor
     */
    virtual ~GraphicsSprite();

    /**
     * @brief Render the sprite per frame.
     */
    virtual void update();

    /**
     * @brief Event callback that is invoked every time when the Sprite enters the 'stage'.
     *
     * `onEnter` function will cause the Sprite to be added to the `GraphicsService`
     */
    virtual void onEnter();

    /**
     * @brief Event callback that is invoked every time the Sprite leaves the 'stage'.
     *
     * `onExit` function will cause the Sprite to be removed from the `GraphicsService`
     */
    virtual void onExit();

    /**
     * @brief Cleans all running resources.
     */
    virtual void cleanup();

    /**
     * @brief Sets whether the sprite is visible.
     *
     * The default value is true, a sprite is default to visible.
     *
     * @param visible   true if the sprite is visible, false if the sprite is hidden.
     */
    void setVisible(bool visible) { m_bVisible = visible; };

    /**
     * @brief Determines if the node is visible.
     *
     * @see `setVisible(bool)`
     *
     * @return true if the node is visible, false if the node is hidden.
     */
    virtual bool isVisible() const { return m_bVisible && m_fWidth >= 1.0f && m_fHeight >= 1.0f; };

    /**
     * @brief Returns whether or not the sprite is "running".
     *
     * If the sprite is running it will accept event callbacks update().
     *
     * @return Whether or not the sprite is running.
     */
    bool isRunning() const;

    /**
     * @brief Determines if the point is in the sprite
     * @param pointX
     * @param pointY
     * @return Whether or not the point is in the sprite.
     */
    bool isInSprite(float pointX, float pointY) const;

    /**
     * @brief Sets a new texture to the sprite.
     * @param texture
     */
    void setTexture(Texture2D *texture);

    /**
     * @brief Returns texture of the sprite
     * @return The texture of the sprite
     */
    Texture2D *getTexture() const { return m_pTexture; }

    /**
     * @brief Returns GL texture of the Texture2D
     * @return GL texture
     */
    GLuint getGLTexture() const;

    /**
     * @brief Returns the width of texture
     * @return
     */
    int getTextureWidth() const;

    /**
     * @brief Returns the height of texture
     * @return
     */
    int getTextureHeight() const;

    /**
     * @brief Where the sprite has a shader
     * @return True if sprite has a shader, false otherwise.
     */
    const bool hasShader() const;

    /**
     * @brief Sets a shader to the sprite
     * @param pShader
     */
    void setShader(GLES20Shader *pShader);

    /**
     * @brief Returns the shader of the sprite
     * @return The shader of the sprite
     */
    GLES20Shader *getShader() const { return m_pShader; }

    /**
     * @brief Set UpdateCallback function and it will replace the update function.
     *
     * 通过外部给定的渲染函数，绘制该sprite
     */
    typedef std::function<void()> UpdateCallback;
    void setUpdateCallback(UpdateCallback callback);

    /// @{
    /// @name Only for `ShaderAnimation`
    /**
     * @brief
     * @param aShader
     */
    void addAnimationShader(GLES20Shader *aShader);

    /**
     * @brief
     * @param aShader
     */
    void removeAnimationShader(GLES20Shader *aShader);

    /**
     * @brief
     * @return
     */
    const std::list<GLES20Shader *> &getAnimationShaders() const;
    /// @} end of Only for `ShaderAnimation`


    /// @{
    /// @name Setters & Getters for Graphic Properties

    /**
     * @brief Sets the type of the sprite which the same as `Track`
     *
     * 类型决定了Sprite的渲染行为，不同的类型采用不同的渲染方式
     *
     * @param type TrackType
     * @see `enum TrackType`
     */
    void setTrackType(TrackType type);

    /**
     * @brief Returns the type of sprite
     *
     * @return The type of sprite
     */
    const TrackType &getTrackType() const;

    /**
     * @brief Returns the quad (tex coords, vertex coords and color) information.
     * @return The quad (tex coords, vertex coords and color) information.
     */
    const V3F_C4F_T2F_Quad *getQuads() const { return &m_quads; };

    /**
     * @brief Sets the ZOrder of the sprite
     *
     * ZOrder is the 'key' used to sort the node.
     * ZOrder值小的在底层，值大的绘制在上层
     *
     * @param order
     */
    void setZOrder(int order) { m_nZOrder = order; }

    /**
     * @brief Returns the ZOrder
     * @return ZOrder of sprite
     */
    const int getZOrder() const { return m_nZOrder; }

    /**
     * @brief Sets Texture2D rotation in degree
     *
     * `MediaCodec`解码出来的帧本身是有角度的，绘制的时候需要做旋转(视频素材)
     * 只可能是{0, -90, -180, -270}之一
     *
     * @param angle Values in {0, -90, -180, -270}
     */
    void setContentRotation(int angle);

    /**
     * @brief Returns the rotation of `Texture2D`
     * @return the rotation of `Texture2D` in degree
     */
    const int getContentRotation() const { return m_nUVContentRotation; }

    /**
     * @brief Sets the rotation (angle) of the sprite in degrees.
     *
     * 0 is the default rotation angle.
     * Positive values rotate node clockwise, and negative values for anti-clockwise.
     *
     * @param rotation
     */
    void setRotation(float rotation);

    /**
     * @brief Returns the rotation (angle) of sprite
     * @return The rotation (angle) of sprite
     */
    const float getRotation() const { return m_fRotation; };

    /**
     * @brief Sets the untransformed size of the node.
     *
     * The contentSize remains the same no matter the node is scaled or rotated.
     *
     * @param width
     * @param height
     */
    void setWidthAndHeight(float width, float height);

    /**
     * @brief Returns the width of sprite
     * @return The width of sprite
     */
    const float getWidth() const { return m_fWidth; };

    /**
     * @brief Returns the height of sprite
     * @return The height of sprite
     */
    const float getHeight() const { return m_fHeight; };

    /**
     * @brief Sets the scale (x,y) of the sprite.
     *
     * It is a scaling factor that multiplies the width, height.
     *
     * @param scale     The scale factor for both X and Y axis.
     */
    void setScale(float scale);

    /**
     * @brief Returns the scale factor of the sprite,  when X and Y have the same scale factor.
     *
     * @warning Assert when `_scaleX != _scaleY`
     * @see setScale(float)
     *
     * @return The scale factor of the sprite.
     */
    const float getScale() const;

    /**
     * @brief Sets the scale (x,y) of the node.
     *
     * It is a scaling factor that multiplies the width and height of the sprite.
     *
     * @param scaleX     The scale factor on X axis.
     * @param scaleY     The scale factor on Y axis.
     */
    void setScale(float scaleX, float scaleY);

    /**
     * @brief Returns the scale factor on X axis of this sprite
     * @return The scale factor on X axis.
     */
    const float getScaleX() const { return m_fScaleX; }

    /**
     * @brief Returns the scale factor on Y axis of this sprite
     * @return The scale factor on Y axis.
     */
    const float getScaleY() const { return m_fScaleY; }

    /**
     * @brief Sets the position (x,y) of the sprite.
     * @param position  The position (x,y) of the sprite.
     */
    void setPosition(const Vec2 &position);

    /**
     * @brief Returns the position (x,y) of the sprite
     * @return  The position (x,y) of the sprite.
     */
    const Vec2& getPosition() const { return m_position; }

    /**
     * @brief Sets the anchor point in percent.
     *
     * anchorPoint is the point around which all transformations and positioning manipulations take place.
     * It's like a pin in the node where it is "attached" to its parent.
     * The anchorPoint is normalized, like a percentage. (0,0) means the bottom-left corner and (1,1) means the top-right corner.
     * But you can use values higher than (1,1) and lower than (0,0) too.
     * The default anchorPoint is (0.5,0.5), so it starts in the center of the node.
     * @note If node has a physics body, the anchor must be in the middle, you can't change this to other value.
     *
     * @param anchorPoint   The anchor point of node.
     */
    void setAnchorPoint(const Vec2 &anchorPoint);

    /**
     * @brief Returns the anchor point in percent.
     *
     * @see `setAnchorPoint(const Vec2&)`
     *
     * @return The anchor point of node.
     */
    const Vec2 &getAnchorPoint() const { return m_anchorPoint; }

    /**
     * @brief Sets the rect of this texture
     *
     * 针对视频和图片类型，先裁剪纹理再做滤镜
     * 其他类型一般没有滤镜操作，后裁剪（减少一次绘制纹理到FBO）
     *
     * @param rect Only the contents inside the rect of this texture will be applied for this sprite.
     */
    void setTextureRect(const NS_MEDIA::Rect rect);

    /**
     * @brief Returns the rect of the Sprite.
     * @return the rect of the Sprite
     */
    const NS_MEDIA::Rect& getTextureRect() const { return m_rect; }

    /**
     * Sets the flip flags used for rendering the sprite.
     *
     * @param flipFlags The flip flags used for rendering the sprite.
     * @see GraphicsSprite::FlipFlags
     */
    void setFlip(int flipFlags);

    /**
     * Gets the flip flags used for rendering the sprite.
     *
     * @return The flip flags used for rendering the sprite.
     * @see GraphicsSprite::FlipFlags
     */
    const int getFlip() const { return m_nFlipFlags; }

    /**
     * @brief Sets the alpha of sprite
     *
     * Shader脚本通过该值改变sprite的透明度
     * TODO 使用V3F_C4F_T2F_Quad替换
     *
     * @param alpha [0,1]
     */
    void setAlpha(float alpha) { m_fAlpha = alpha; }

    /**
     * @brief Returns the alpha value
     *
     * Shader脚本通过该值改变sprite的透明度
     *
     * @return The alpha of sprite
     */
    const float getAlpha() const { return m_fAlpha; }

    /**
     * @brief 设置纹理是否使用自定义颜色
     * @param use Flag属性
     */
    void setUseColor(bool use) { m_bUseTextureColor = use; }

    /**
     * @brief 获取纹理是否使用自定义颜色
     * @return Flag属性
     */
    const bool needUseColor() const { return m_bUseTextureColor; }

    /**
     * @brief 设置纹理的自定义颜色
     * @param color RGB
     */
    void setTextColor(const Vec3 &color) { m_textureColor = color; }

    /**
     * @brief 获取纹理的自定义颜色
     * @return RGB值
     */
    const Vec3 &getTextColor() const { return m_textureColor; }

    /**
     * @brief 设置裁剪区域
     *
     * 在滤镜等所有操作之后，再做裁剪
     * TODO `setTextureRect`有何不同
     *
     * @param rect
     * @param enableScissor
     */
    void setScissorBox(const NS_MEDIA::Rect &rect, bool enableScissor = true);

    /**
     * @brief 获取裁剪区域的左下角坐标
     * @return 裁剪区域的左下角坐标
     */
    const Vec2 &getScissorLowerLeft() const;

    /**
     * @brief 获取裁剪区域宽高
     * @return 裁剪区域宽高
     */
    const NS_MEDIA::Size &getScissorBox() const;

    /**
     * @brief Determines whether or not to scissor the texture
     * @return True if scissors the texture, false otherwise
     */
    bool isEnableScissor() const;

    /**
     * @brief Sets PNG premultiplied alpha flag
     * @param premultiplied
     */
    void setAlphaPremultiplied(bool premultiplied) { m_bAlphaPremultiplied = premultiplied; }

    /**
     * @brief Returns PNG premultiplied alpha flag
     * @return PNG premultiplied alpha flag
     */
    const bool isAlphaPremultiplied() const { return m_bAlphaPremultiplied; }

    /// @}  end of Setters & Getters for Graphic Properties

protected:
    /**
     * @brief Initializes a sprite with a texture.
     *
     * @param texture A pointer to an existing Texture2D object.
     * @return True if the sprite is initialized properly, false otherwise.
     */
    bool initWithTexture(Texture2D *texture);

    /**
     * @brief update `vertex coord` information
     *
     * m_transform = tranMatrix * rotateMatrix * scaleMatrix * tranMatrix
     *
     * 旋转
     * Mat4 rotateMatrix;
     * rotateMatrix.m[0] = (float) cos(rotation);
     * rotateMatrix.m[4] = (float) -sin(rotation);
     * rotateMatrix.m[1] = (float) sin(rotation);
     * rotateMatrix.m[5] = (float) cos(rotation);
     * m_transform = m_transform * rotateMatrix;
     *
     * 缩放
     * Mat4 scaleMatrix;
     * scaleMatrix.m[0] = m_fScaleX;
     * scaleMatrix.m[5] = m_fScaleY;
     * m_transform = m_transform * scaleMatrix;
     *
     * 平移
     * Mat4 tranMatrix;
     * tranMatrix.m[8] = m_position.x;
     * tranMatrix.m[9] = m_position.y;
     * m_transform = m_transform * tranMatrix;
     */
    void updatePosition();

    /**
     * @brief update `tex coord` information
     *
     * 视频自带角度导致其对应的`Texture`也具有角度，因此需要根据调度调整UV坐标
     */
    void updateUV();

    /// Transform dirty flag
    bool m_bTransformDirty;
    /// UV position dirty flag
    bool m_bUVPositionDirty;
    /// Whether or not the sprite is running.
    bool m_bRunning;
    ///用于表示当前GraphicsSprite 是否要显示： true标识显示｜false表示隐藏
    bool m_bVisible;
    /// Png Premultiplied alpha flag
    bool m_bAlphaPremultiplied;

    /// The track's type that has this sprite;
    TrackType m_trackType;
    /// The GL positions of sprite
    V3F_C4F_T2F_Quad m_quads;

    /// zOrder greater displayed on the front
    int m_nZOrder;
    /// UV content rotation, values{0, -90, -180, -270}
    int m_nUVContentRotation;
    /// Flipping flag
    int m_nFlipFlags;

    /// The alpha value of the sprite
    float m_fAlpha;
    /// The rotation of the sprite in degrees.
    float m_fRotation;
    /// Content size of width (in pixels)
    float m_fWidth;
    /// Content size of height (in pixels)
    float m_fHeight;
    /// Scaling factor on x-axis
    float m_fScaleX;
    /// Scaling factor on y-axis
    float m_fScaleY;

    /// Position of sprite (in pixels)
    Vec2 m_position;
    /// Anchor point of sprite (in pixels)
    Vec2 m_anchorPoint;

    /// Rect of texture
    NS_MEDIA::Rect m_rect;

    /// Transform mat for [scale * rotate * translate]
    Mat4 m_transform;

    /// The color of texture
    bool m_bUseTextureColor;
    Vec3 m_textureColor;

    /// Scissors texture, after doing shader
    bool m_bEnableScissor;
    NS_MEDIA::Rect m_scissorRect;

    /// Texture of sprite
    Texture2D *m_pTexture;
    /// Sprite shader
    GLES20Shader *m_pShader;
    /// For ShaderAnimation
    std::list<GLES20Shader *> m_pAnimationShaders;
    /// Update function
    UpdateCallback m_updateCallback;
};

NS_MEDIA_END

#endif // !GRAPHICSSPRITE_H
