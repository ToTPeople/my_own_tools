#ifndef __mtmv__Geometry__
#define __mtmv__Geometry__

#include "base/MTMacros.h"
#include "math/Vec2.h"

NS_MEDIA_BEGIN

class Size
{
public:
    float width;
    float height;
public:
    operator Vec2() const
    {
        return Vec2(width, height);
    }
    
public:
    Size();
    
    Size(float width, float height);
    
    Size(const Size& other);

    explicit Size(const Vec2& point);

    Size& operator= (const Size& other);

    Size& operator= (const Vec2& point);

    Size operator+(const Size& right) const;

    Size operator-(const Size& right) const;

    Size operator*(float a) const;

    Size operator/(float a) const;

    void setSize(float width, float height);

    bool equals(const Size& target) const;
    bool operator==(const Size &other);
    bool operator!=(const Size &other);

    static const Size ZERO;
};

class Rect
{
public:
    Vec2 origin;
    Size  size;
    
public:
    /**
     * @js NA
     */
    Rect();
    /**
     * @js NA
     */
    Rect(float x, float y, float width, float height);
    /**
     * @js NA
     * @lua NA
     */
    Rect(const Rect& other);
    /**
     * @js NA
     * @lua NA
     */
    Rect& operator= (const Rect& other);
    /**
     * @js NA
     * @lua NA
     */
    void setRect(float x, float y, float width, float height);
    /**
     * @js NA
     */
    float getMinX() const; /// return the leftmost x-value of current rect
    /**
     * @js NA
     */
    float getMidX() const; /// return the midpoint x-value of current rect
    /**
     * @js NA
     */
    float getMaxX() const; /// return the rightmost x-value of current rect
    /**
     * @js NA
     */
    float getMinY() const; /// return the bottommost y-value of current rect
    /**
     * @js NA
     */
    float getMidY() const; /// return the midpoint y-value of current rect
    /**
     * @js NA
     */
    float getMaxY() const; /// return the topmost y-value of current rect
    /**
     * @js NA
     */
    bool equals(const Rect& rect) const;
    /**
     * @js NA
     */
    bool containsPoint(const Vec2& point) const;
    /**
     * @js NA
     */
    bool intersectsRect(const Rect& rect) const;
    /**
     * @js NA
     * @lua NA
     */
    Rect unionWithRect(const Rect & rect) const;
    
    void merge(const Rect& rect);
    
    static const Rect ZERO;
};

NS_MEDIA_END

#endif /* defined(__mtmv__Geometry__) */
