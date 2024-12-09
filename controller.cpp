#include "controller.h"

Controller::Controller() {}

void Controller::action(string command)
{
    model->update(command);
}
