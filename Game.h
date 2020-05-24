#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMediaPlayer>
#include <QGraphicsProxyWidget>
#include <QLabel>
#include <Pacman.h>
#include "Fondo.h"

class Game: public QGraphicsView {
  public:
    Game (QWidget *parent = nullptr);
    QGraphicsScene *escena;
    QLabel *gif_anim = new QLabel();
    QGraphicsPixmapItem *pacman ;
    QGraphicsPixmapItem *fondo;
    //QGraphicsPixmapItem::MaskShape();



};

#endif // GAME_H
