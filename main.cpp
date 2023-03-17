#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // Load Marble using OpenStreetMap in Mercator projection
    Marble::MarbleWidget *mapWidget = new Marble::MarbleWidget;
    // here you must give the path to marble/data
    Marble::MarbleDirs::setMarbleDataPath("/home/traveller/hello-marble/compiled-marble/share/marble/data/");
    mapWidget->setProjection(Marble::Spherical);
    mapWidget->setMapThemeId("earth/google Hybrid/google Hybrid.dgml");
    mapWidget->setWindowTitle("Hello Marble!");
    mapWidget->show();
    return a.exec();
}
