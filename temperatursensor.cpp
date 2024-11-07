#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor()
{
    srand(time(NULL));
    for(int i = 0; i < 5; i++)
        werte[i] = (-40 + rand() % 101) / 10.0;
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}
void TemperaturSensor::fetchData(double data[])
{
    for(int i = 0; i < 5 ; i++)
        data[i] = werte[i];
}

int TemperaturSensor::dataSize()
{
    return 5;
}
