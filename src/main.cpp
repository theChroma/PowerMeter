#include <Arduino.h>
#include <EmonLib.h>

EnergyMonitor emon;

void setup()
{
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH);
    emon.voltage(33, 543.13, 0.0);
    emon.current(32, 17.53);
}

void loop()
{
    emon.calcVI(20, 2000);
    emon.serialprint();
}