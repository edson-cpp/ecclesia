#ifndef DIOCESE_H
#define DIOCESE_H

#include <QWidget>

namespace Ui {
class Diocese;
}

class Diocese : public QWidget
{
    Q_OBJECT

public:
    explicit Diocese(QWidget *parent = nullptr);
    ~Diocese();

private:
    Ui::Diocese *ui;
};

#endif // DIOCESE_H
