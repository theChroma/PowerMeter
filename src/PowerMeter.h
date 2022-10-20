#ifndef PowerMeter_h
#define PowerMeter_h

#include <Arduino.h>
#include <ACPower.h>

typedef int (*AdcCallback_t)(uint8_t);

class PowerMeter
{
public:
    void setAdcCallback(AdcCallback_t readAdc = analogRead);
    void setAdcBits(uint8_t adcBits);
    void setVoltageInput(uint8_t voltagePin, float voltageFactor);
    void setCurrentInput(uint8_t currentPin, float currentFactor);
    void setPhaseShift(float phaseShift);
    void setZeroVolts(uint16_t zeroVolts);
    void setZeroAmps(uint16_t zeroAmps);

private:
    uint8_t m_voltagePin;
    uint8_t m_currentPin;
    float m_voltageFactor;
    float m_currentFactor;
    float m_phaseShift;
    uint16_t zeroVolts;
    uint16_t zeroAmps;
    AdcCallback_t m_readAdc;
};

#endif