#include "mainwindow.h"
#include <QApplication>
#include "custombutton1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //CustomButton1 b;
    //b.show();

    return a.exec();
}
