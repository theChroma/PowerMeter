#ifndef ADC_h
#define ADC_h

#include <Arduino.h>

#if defined(ESP32) || defined(ESP8266) 
#define DEFAULT_ADC_BITS 12
#else
#define DEFAULT_ADC_BITS 10
#endif

class ADC
{
    typedef int (*ADCCallback_t)(uint8_t);

public:
    ADC(uint8_t pin, ADCCallback_t reader = analogRead);
    void setPin(uint8_t pin);
    static void setBits(uint8_t bits);
    void setReader();
    float getPercent();

private:
    uint8_t m_pin;
    uint8_t m_adcBits = DEFAULT_ADC_BITS;
};

#endif