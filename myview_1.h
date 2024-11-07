#ifndef MYVIEW_1_H
#define MYVIEW_1_H

#include <QObject>
#include "view.h"
#include "widget.h"

class MyView_1 : public View
{
public:
    MyView_1();
    ~MyView_1();

    void update();
    void notify();

private:
    Widget *widget;
};

#endif // MYVIEW_1_H
