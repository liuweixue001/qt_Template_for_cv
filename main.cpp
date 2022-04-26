#include "qt_for_detection.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_for_detection w;
    w.show();
    return a.exec();
}
