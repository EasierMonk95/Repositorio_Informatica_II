#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include <QGraphicsScene>
#include <QGraphicsItemAnimation>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public QGraphicsView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;
    QGraphicsPixmapItem *Background;

};
#endif // MAINWINDOW_H
