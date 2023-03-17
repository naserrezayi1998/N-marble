#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "compiled-marble/include/marble/MarbleWidget.h"
#include "compiled-marble/include/marble/MarbleDirs.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Marble::MarbleWidget *map_widget_ = nullptr;

private slots:
    void SetCoodinates(qreal, qreal, Marble::GeoDataCoordinates::Unit);
    void on_projection_bottun_clicked();
};
#endif // MAINWINDOW_H
