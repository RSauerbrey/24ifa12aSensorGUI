#include "myview_1.h"
#include "ui_widget.h"
MyView_1::MyView_1()
{
    widget = new Widget;
    widget->show();
    qDebug() << "Widget erstellt";
}

MyView_1::~MyView_1()
{
    delete widget;
}

void MyView_1::update()
{

}

void MyView_1::notify()
{
    QString str = model->getState();
    widget->getUI()->edtEingabe->append(str);
}

void MyView_1::setController(Controller *controller)
{
    this->controller = controller;
    widget->setController(controller);
}
