#include "controller.h"
#include "model.h"
#include "myview_1.h"
#
#include "feuchtesensor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FeuchteSensor *f = new FeuchteSensor;

    Model *m = new Model;
    Controller *c = new Controller;
    View *view1 = new MyView_1;
    return a.exec();
}
