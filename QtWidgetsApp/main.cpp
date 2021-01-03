#include "WidgetsMain.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetsMain w;
    w.show();
    return a.exec();
}
