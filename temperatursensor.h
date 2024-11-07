#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include "datagate.h"

class TemperaturSensor : public DataGate
{
private:
    double werte[5];
public:
    TemperaturSensor();
    string getSensorType();
    void fetchData(double data[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H
