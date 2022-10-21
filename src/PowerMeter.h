#ifndef PowerMeter_h
#define PowerMeter_h

#include <Arduino.h>
#include <ACPower.h>
#include <ADConverter.h>

class PowerMeter
{
public:
    ACPower getPower();
    void setADC(const ADConverter& adc);
    void calibrateVoltage(float voltageFactor);
    void calibrateCurrent(float currentFactor);
    void calibratePhaseShift(float phaseShift);

private:
    void detectZeroCross()
    uint8_t m_voltagePin;
    uint8_t m_currentPin;
    float m_voltageFactor;
    float m_currentFactor;
    float m_phaseShift;
};

#endif

/*
#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>

float generateSine(float phi_deg, float amplitude = 1.0f)
{
    return amplitude * sin(phi_deg * (3.1415926536f / 180));
}

float calcRMS(std::vector<float> values)
{
    float square = 0.0f;

    for (const auto& value : values)
    {
        square += value * value;
    }

    return sqrt(square / static_cast<float>(values.size()));
}

float calcRealPower(std::vector<float> voltage, std::vector<float> current)
{
    std::vector<float> power;
    for (size_t i = 0; i < 360; i++)
    {
        power.push_back(voltage[i] * current[i]);
    }

    return std::reduce(power.begin(), power.end()) / static_cast<float>(power.size());
}


int main()
{
    std::vector<float> voltage;
    std::vector<float> current;

    for (int i = 0; i < 360; i++)
    {
        voltage.push_back(generateSine(i));
        current.push_back(generateSine(i + 72));
    }
    
    std::cout << "Urms = " << calcRMS(voltage) << std::endl;
    std::cout << "Irms = " << calcRMS(current) << std::endl;
    std::cout << "S = " << calcRMS(voltage) * calcRMS(current) << std::endl;
    std::cout << "P = " << calcRealPower(voltage, current) << std::endl;

}





#include <Arduino.h>
#include <array>
#include <iostream>

constexpr uint8_t adcPin = 33;


bool isZeroCross(uint16_t newSample)
{
  static uint16_t lastSample;
  bool zeroCross = false;

  if (newSample <= 2048 && lastSample > 2048)
    zeroCross = true;
  if (newSample >= 2048 && lastSample < 2048)
    zeroCross = true;

  lastSample = newSample;
  
  return zeroCross;
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(isZeroCross(analogRead(adcPin)))
    std::cout << "Zero Cross\n";
}
*/