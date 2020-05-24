#ifndef PACMAN_H
#define PACMAN_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QObject>
#include <QMediaPlayer>
#include <QTimer>

class Pacman:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Pacman(QGraphicsItem * parent=0);

    int imagen=0;

    void keyPressEvent(QKeyEvent *evento);
    void AnimationP();


private:
    QMediaPlayer *balasonido;
};


#endif // PACMAN_H
