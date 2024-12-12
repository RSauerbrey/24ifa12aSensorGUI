#include "model.h"
#include "view.h"
#include "temperatursensor.h"
#include "feuchtesensor.h"
#include <QDebug>
Model::Model()
{
    qDebug() << "Model erstellt";
}

void Model::update(string command)
{
    //WENN command == ADDTEMP
    // DANN neuen Sensor anlegen und in sensor[] speichern
    if( command == "ADDTEMP" )
    {
        sensoren.append(new TemperaturSensor);
    }
    else if( command == "ADDFEUCHTE" )
    {
        sensoren.append(new FeuchteSensor);
    }
    else if( command == "SHOWVALUES" )
    {
        double werte[100];
        sensoren.front()->fetchData(werte);
        for(int i = 0; i < sensoren.front()->dataSize(); i++)
        {
            state.append(to_string(werte[i]));
            state.append("\n");
        }

        view->notify();

    }
}

QString Model::getState()
{
    return QString::fromStdString(state);
}

//Gibt den dG Zeiger zurück, wenn im Array noch Platz war, ansonsten nullptr
DataGate* Model::addSensor(DataGate *dG)
{
    sensoren.append(dG);
    return dG;
}

void Model::setView(View *view)
{
    this->view = view;
}
