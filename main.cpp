#include "controller.h"
#include "model.h"
#include "myview_1.h"

#include "feuchtesensor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Model *model = new Model;
    Controller *controller = new Controller;
    View *view = new MyView_1;
    model->setView(view);
    view->setModel(model);
    view->setController(controller);
    controller->setModel(model);
    controller->setView(view);


    return a.exec();
}
