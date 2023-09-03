#include "comunid.h"
#include "ui_comunid.h"
#include "desktop.h"

Comunid::Comunid(QWidget *parent) : QWidget(parent), ui(new Ui::Comunid)
{
    ui->setupUi(this);
}

Comunid::~Comunid()
{
    delete ui;
}

void Comunid::on_txtBisposAux_destroyed()
{

}

void Comunid::on_btnAlterar_clicked()
{
    //ui->statusbar->showMessage("Hello");
}
