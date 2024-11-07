#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "view.h"
#include "datagate.h"
class Model
{
public:
    Model();
    void update();
    QString getState();
    DataGate* addSensor(DataGate* dG); //Gibt den dG Zeiger zurück, wenn im Array noch Platz war, ansonsten nullptr
protected:
    View *view;
    DataGate *sensoren[10] = {nullptr};
};

#endif // MODEL_H
