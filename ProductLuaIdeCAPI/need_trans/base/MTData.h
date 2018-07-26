#ifndef __mtmv__MTData__
#define __mtmv__MTData__

#include <string.h>
#include <stdint.h>

#include "base/MTRef.h"

NS_MEDIA_BEGIN

class MTData : public media::Ref{
public:
    /**
     * This parameter is defined for convenient reference if a null MTData object is needed.
     */
    static const MTData Null;
    
    /**
     * Constructor of MTData.
     */
    MTData();
    
    /**
     * Copy constructor of MTData.
     */
    MTData(const MTData& other);
    
    /**
     * Copy constructor of MTData.
     */
    MTData(MTData&& other);
    
    /**
     * Destructor of MTData.
     */
    ~MTData();
    
    /**
     * Overroads of operator=.
     */
    MTData& operator= (const MTData& other);
    
    /**
     * Overroads of operator=.
     */
    MTData& operator= (MTData&& other);
    
    /**
     * Gets internal bytes of MTData. It will retrun the pointer directly used in MTData, so don't delete it.
     *
     * @return Pointer of bytes used internal in MTData.
     */
    unsigned char* getBytes() const;
    
    /**
     * Gets the size of the bytes.
     *
     * @return The size of bytes of MTData.
     */
    ssize_t getSize() const;
    
    /** Copies the buffer pointer and its size.
     *  @note This method will copy the whole buffer.
     *        Developer should free the pointer after invoking this method.
     *  @see MTData::fastSet
     */
    void copy(const unsigned char* bytes, const ssize_t size);
    
    /** Fast set the buffer pointer and its size. Please use it carefully.
     *  @param bytes The buffer pointer, note that it have to be allocated by 'malloc' or 'calloc',
     *         since in the destructor of MTData, the buffer will be deleted by 'free'.
     *  @note 1. This method will move the ownship of 'bytes'pointer to MTData,
     *        2. The pointer should not be used outside after it was passed to this method.
     *  @see MTData::copy
     */
    void fastSet(unsigned char* bytes, const ssize_t size);
    
    /**
     * Clears MTData, free buffer and reset MTData size.
     */
    void clear();
    
    /**
     * Check whether the MTData is null.
     *
     * @return True if the the MTData is null, false if not.
     */
    bool isNull() const;
    
private:
    void move(MTData& other);
    
private:
    unsigned char* _bytes;
    ssize_t _size;
};

NS_MEDIA_END

#endif /* defined(__mtmv__MTData__) */
