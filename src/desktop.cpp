#include "desktop.h"
#include "ui_desktop.h"
#include "forms/cad/comunid.h"
#include <QMdiSubWindow>
#include <QStyle>
#include <QDesktopWidget>
#include <QtGui>
#include <QtCore>

Desktop::Desktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
}

Desktop::~Desktop()
{
    delete ui;
}

void Desktop::loadSubWindow(QWidget *widget)
{
    auto window = ui->mdiArea->addSubWindow(widget);
    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());
    window->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight, Qt::AlignCenter,
            window->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    window->show();
}

void Desktop::on_actionComunid_triggered()
{
    loadSubWindow(new Comunid(this));
}

void Desktop::on_actionTeste_triggered()
{
    ui->statusbar->showMessage("Hello");
}
