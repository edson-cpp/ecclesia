#include "desktop.h"
#include "ui_desktop.h"
#include "diocese.h"
#include <QMdiSubWindow>
#include <QStyle>
#include <QDesktopWidget>

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

void Desktop::on_actionDiocese_triggered()
{
    loadSubWindow(new Diocese(this));
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
