#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>
#include "forms/cad/comunid.h"

namespace Ui {
class Desktop;
}

class Desktop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Desktop(QWidget *parent = nullptr);
    ~Desktop();

private slots:
    void on_actionComunid_triggered();
    void loadSubWindow(QWidget *widget);

    void on_actionTeste_triggered();

    void on_actionDiocese_triggered();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
