#include "PowerMeter.h"

void PowerMeter::setAdcCallback(AdcCallback_t readAdc = analogRead)
{
    m_readAdc = readAdc;
}


void PowerMeter::setADC(uint8_t adcBits)
{

}


void PowerMeter::setVoltageInput(uint8_t voltagePin, float voltageFactor)
{

}


void PowerMeter::setCurrentInput(uint8_t currentPin, float currentFactor)
{

}


void PowerMeter::setPhaseShift(float phaseShift)
{

}


void PowerMeter::setZeroVolts(uint16_t zeroVolts)
{

}


void PowerMeter::setZeroAmps(uint16_t zeroAmps)
{

}

