#ifndef MTRef_h
#define MTRef_h

#include <string>

#include "base/MTConfig.h"
#include "base/MTMacros.h"
#include "platform/MTStdC.h"

NS_MEDIA_BEGIN

/**
 * Interface that defines how to clone an Ref.
 */
class Clonable
{
public:
    /**
     * Returns a copy of the Ref.
     */
    virtual Clonable *clone() const = 0;
    virtual ~Clonable() {};
};

/**
 * Ref is used for reference count management. If a class inherits from Ref,
 * then it is easy to be shared in different places.
 * @js NA
 */
class Ref
{
    friend class AutoreleasePool;
public:

    enum RefType
    {
        normal_type = 0,
        gl_type = 1,
    };

    /**
     * Retains the ownership.
     *
     * This increases the Ref's reference count.
     *
     * @see release, autorelease
     * @js NA
     */
    void retain();

    /**
     * Releases the ownership immediately.
     *
     * This decrements the Ref's reference count.
     *
     * If the reference count reaches 0 after the decrement, this Ref is
     * destructed.
     *
     * @see retain, autorelease
     */
    void release();

    /**
     * Releases the ownership sometime soon automatically.
     *
     * This decrements the Ref's reference count at the end of current
     * autorelease pool block.
     *
     * If the reference count reaches 0 after the decrement, this Ref is
     * destructed.
     *
     * @returns The Ref itself.
     *
     * @see AutoreleasePool, retain, release
     *
     * @warning It is not multi-threads safe
     */
    Ref *autorelease();

    /**
     * Returns the Ref's current reference count.
     *
     * @returns The Ref's reference count.
     * @js NA
     */
    unsigned int getReferenceCount() const;

    /**
     * Set ref type
     * @param type
     */
    void setType(RefType type);

#if MT_REF_TEST
    /**
     * Get ref tag
     */
    const std::string &getTag() const;
#endif
protected:
    /**
     * Constructor
     *
     * The Ref's reference count is 1 after construction.
     * @js NA
     */
    Ref();

public:
    /**
     * Destructor
     *
     * @js NA
     * @lua NA
     */
    virtual ~Ref();

public:
    /// count of references
    unsigned int m_nReferenceCount;
    /// type of ref
    RefType m_refType;
#if MT_REF_TEST
    /// tag of ref
    std::string m_sTag;
#endif
};

NS_MEDIA_END

#endif /* MTRef_h */
