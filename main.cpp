#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QLabel label;
    label.setText("Hello world!");
    w.setCentralWidget(&label);

    w.show();
    return a.exec();
}
