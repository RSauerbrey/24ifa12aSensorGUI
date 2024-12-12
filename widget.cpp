#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnBeenden, SIGNAL( clicked() ), this, SLOT( beenden() ));
    connect(ui->btnAction, SIGNAL( clicked() ), this, SLOT( action() ));
    connect(ui->btnAddSensor, SIGNAL( clicked() ), this, SLOT( addSensor() ));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setSensor(DataGate *sensor)
{
    this->sensor = sensor;
}

void Widget::setController(Controller *controller)
{
    this->controller = controller;
}

Ui::Widget *Widget::getUI()
{
    return ui;
}

void Widget::beenden()
{
    this->close();
}

void Widget::action()
{
    //QString str = QString::fromStdString( sensor->getSensorType());
    //ui->edtEingabe->setText(str);
    controller->action("SHOWVALUES");
}

void Widget::addSensor()
{
    //Abfrage der Radiobuttons
    //Aufruf der Methode action beim Controller und Übergabe der Information
    // z.B. "ADDTEMP"
    controller->action("ADDTEMP");
}
