#include "myview_1.h"

MyView_1::MyView_1()
{
    widget = new Widget;
    widget->show();
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

}
