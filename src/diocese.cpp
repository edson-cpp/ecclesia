#include "diocese.h"
#include "ui_diocese.h"

Diocese::Diocese(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diocese)
{
    ui->setupUi(this);
}

Diocese::~Diocese()
{
    delete ui;
}
