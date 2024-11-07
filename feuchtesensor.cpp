#include "feuchtesensor.h"

FeuchteSensor::FeuchteSensor()
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
        werte[i] = rand() % 1001 / 10.0;
}

string FeuchteSensor::getSensorType()
{
    return "Feuchtigkeit";
}
void FeuchteSensor::fetchData(double data[])
{
    for(int i = 0; i < 10 ; i++)
        data[i] = werte[i];
}

int FeuchteSensor::dataSize()
{
    return 10;
}
