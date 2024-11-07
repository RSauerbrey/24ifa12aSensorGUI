#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnBeenden, SIGNAL( clicked() ), this, SLOT( beenden() ));
    connect(ui->btnAction, SIGNAL( clicked() ), this, SLOT( action() ));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setSensor(DataGate *sensor)
{
    this->sensor = sensor;
}

void Widget::beenden()
{
    this->close();
}

void Widget::action()
{
    QString str = QString::fromStdString( sensor->getSensorType());
    ui->edtEingabe->setText(str);
}
