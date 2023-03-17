#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // Load Marble using OpenStreetMap in Mercator projection

    // here you must give the path to marble/data


    return a.exec();
}
