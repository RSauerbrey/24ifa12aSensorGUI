#include "model.h"

Model::Model() {}

void Model::update(string command)
{
    //WENN command == ADDTEMP
    // DANN neuen Sensor anlegen und in sensor[] speichern

}

QString Model::getState()
{
    return "ToDo Status";
}

//Gibt den dG Zeiger zurück, wenn im Array noch Platz war, ansonsten nullptr
DataGate* Model::addSensor(DataGate *dG)
{
    for( int i = 0; i < 1; i++)
    {
        if( sensoren[i] == nullptr )
        {
            sensoren[i] = dG;
            return dG;
        }
    }
    return nullptr;
}
