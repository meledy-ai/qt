#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setApplicationName("QtCalc");

    MainWindow w;
    w.show();
    return a.exec();
}
