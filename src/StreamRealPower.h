#ifndef StreamRealPower_h
#define StreamRealPower_h

#include <stddef.h>

class StreamRealPower
{
public:
    inline float add(float value);
    inline float operator<<(float value);
    inline float get() const;
    inline operator float() const;
    inline void reset();

private: 
    size_t numValue;

};

#endif