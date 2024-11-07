#include "controller.h"
#include "model.h"
#include "myview_1.h"
#
#include "feuchtesensor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FeuchteSensor *f1 = new FeuchteSensor;
    FeuchteSensor *f2 = new FeuchteSensor;
    FeuchteSensor *f3 = new FeuchteSensor;


    Model *m = new Model;

    qDebug() << m->addSensor(f1);
    qDebug() << m->addSensor(f2);
    qDebug() << m->addSensor(f2);

    Controller *c = new Controller;
    View *view1 = new MyView_1;
    return a.exec();
}
