#include "desktop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Desktop w;
    //w.show();
    w.showMaximized();

    return a.exec();
}
