#ifndef VIEW_H
#define VIEW_H

#include <QObject>

class Controller;
class Model;
class View
{
public:
    View();
    virtual void update() = 0;
    virtual void notify() = 0;
    virtual void setController(Controller* controller);
    virtual void setModel(Model* model);
protected:
    Controller* controller;
    Model* model;
};

#endif // VIEW_H
