#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>

namespace Ui {
class Desktop;
}

class Desktop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Desktop(QWidget *parent = 0);
    ~Desktop();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
