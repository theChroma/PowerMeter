#ifndef PowerMeter_h
#define PowerMeter_h

#include <Arduino.h>

class PowerMeter
{
    

public:
    void setADC(uint8_t adcBits);
    void setVoltageInput(uint8_t voltagePin, float voltageFactor);
    void setVoltageInput(uint8_t voltagePin, float currentFactor);
    void setPhaseShift(float phaseShift);
    void setZeroVolts(uint16_t zeroVolts);
    void setZeroAmps(uint16_t zeroAmps);

private:
    uint8_t m_voltagePin;
    uint8_t m_currentPin;
    float m_voltageFactor;
    float m_currentFactor;
    float m_phaseShift;
};


#endif