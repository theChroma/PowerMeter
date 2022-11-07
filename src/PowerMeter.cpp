#include "PowerMeter.h"

ACPower PowerMeter::getPower()
{
    
}

void PowerMeter::measurePeriod()

bool PowerMeter::detectZeroCross()
{
    uint16_t newSample = analogRead(m_pinU);
    static uint16_t lastSample;
    bool zeroCross = false;

    if (newSample <= 2048 && lastSample > 2048)
        zeroCross = true;
    if (newSample >= 2048 && lastSample < 2048)
        zeroCross = true;

    lastSample = newSample;
    
    return zeroCross;
}