#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "view.h"
#include "model.h"

class Controller
{
public:
    Controller();
    void action(string);
    void setModel(Model* model);
    void setView(View* view);
protected:
    Model *model;
    View *view;
};

#endif // CONTROLLER_H
