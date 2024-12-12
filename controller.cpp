#include "controller.h"
#include <QDebug>
Controller::Controller() {}

void Controller::action(string command)
{
    model->update(command);
    qDebug() << command;
}

void Controller::setModel(Model *model)
{
    this->model = model;
}

void Controller::setView(View *view)
{
    this->view = view;
}
