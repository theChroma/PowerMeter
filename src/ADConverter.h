#ifndef ADConverter_h
#define ADConverter_h

#include <Arduino.h>

class ADConverter
{
public:
    ADConverter(uint8_t pin) : m_pin(pin)
    {}

    void setPin(uint8_t pin)
    {
        m_pin = pin;
    }

    virtual float getVoltage() = 0;

private:
    uint8_t m_pin;
};

#endif