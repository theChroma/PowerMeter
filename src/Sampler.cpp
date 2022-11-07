#include <Sampler.h>

template<uint32_t adcRange, uint8_t filterAlpha>
Sampler<adcRange, filterAlpha>::Sampler(uint8_t pin, float calibrationFactor) :
    m_pin(pin),
    m_calibrationFactor(calibrationFactor)
{}

template<uint32_t adcRange, uint8_t filterAlpha>
void Sampler<adcRange, filterAlpha>::setPin(uint8_t pin)
{
    m_pin = pin;
}

template<uint32_t adcRange, uint8_t filterAlpha>
void Sampler<adcRange, filterAlpha>::setCalibrationFactor(float calibrationFactor)
{
    m_calibrationFactor = calibrationFactor;
}

template<uint32_t adcRange, uint8_t filterAlpha>
float Sampler<adcRange, filterAlpha>::readSample()
{

}