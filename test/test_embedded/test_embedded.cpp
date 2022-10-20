#include <Arduino.h>
#include <PowerMeter.h>

PowerMeter powerMeter;

void setup()
{
    Serial.begin(115200);

    powerMeter.setAdcCallback();
}

void loop()
{
    return;
}