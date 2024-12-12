#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "view.h"
#include "datagate.h"
#include <QVector>
class Model
{
public:
    Model();
    void update(string);
    QString getState();
    DataGate* addSensor(DataGate* dG);    //Gibt den dG Zeiger zurück, wenn im Array noch Platz war, ansonsten nullptr
    void setView(View* view);
protected:
    View *view;
    QVector <DataGate*> sensoren;
    string state;
};

#endif // MODEL_H
