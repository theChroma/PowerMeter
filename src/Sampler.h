#ifndef Sampler_h
#define Sampler_h

#include <Arduino.h>
#include <EwmaT.h>

template<uint32_t adcRange, uint8_t filterAlpha = 5>
class Sampler
{
public:
    Sampler(uint8_t pin, float calibrationFactor = 0);
    void setPin(uint8_t pin);
    void setCalibrationFactor(float calibrationFactor);
    float readSample();

private:
    uint8_t m_pin;
    float m_calibrationFactor;
    EwmaT<float> filter = EwmaT(filterAlpha, 100);
};

#endif