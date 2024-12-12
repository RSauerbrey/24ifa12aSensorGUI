#include "view.h"

View::View() {}

void View::setController(Controller *controller)
{
    this->controller = controller;
}

void View::setModel(Model *model)
{
    this->model = model;
}
