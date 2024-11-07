#ifndef DATAGATE_H
#define DATAGATE_H

#include <iostream>
using namespace std;

//Schnittstelle
class DataGate
{
public:
    DataGate();
    virtual string getSensorType() = 0;
    virtual void fetchData(double data[]) = 0;
    virtual int dataSize() = 0;
};

#endif // DATAGATE_H
