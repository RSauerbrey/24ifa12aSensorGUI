#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "datagate.h"
#include "controller.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{

    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void setSensor(DataGate *sensor);
    void setController(Controller* controller);
    Ui::Widget* getUI();

public slots:
    void beenden();
    void action();
    void addSensor();

private:
    Ui::Widget *ui;
    DataGate *sensor;
    Controller* controller;
};
#endif // WIDGET_H
