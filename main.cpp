#include "mainwindow.h"
#include <QApplication>
#include <QtCore> //For multithreading

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Password generator ESE");
    w.show();

    return a.exec();
}
