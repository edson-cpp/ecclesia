#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>
#include "diocese.h"

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
    void on_actionDiocese_triggered();
    void loadSubWindow(QWidget *widget);

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
