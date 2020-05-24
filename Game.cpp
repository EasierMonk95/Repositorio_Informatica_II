#include "Game.h"
#include <QImage>
#include <QLabel>
#include <QMovie>
#include <QDebug>
#include <QList>


Game::Game (QWidget *parent){
    escena = new QGraphicsScene();
    pacman = new Pacman;
    fondo = new Fondo;
    fondo->shapeMode();
    escena->addItem(fondo);
    //Organiza todo lo que se refiere al tamaño de la escena
    /*QMovie *movie = new QMovie(":/Animations/Pacman200%.gif");
    movie->start();
    gif_anim->setAttribute(Qt::WA_NoSystemBackground);
    gif_anim->setMovie(movie);
    escena->addWidget(gif_anim);
    (int) gif_anim->pos().x();    */
    //QGraphicsProxyWidget *proxy = escena->addWidget(gif_anim);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    escena->addItem(pacman);    
    pacman->setFlag(QGraphicsItem::ItemIsFocusable);
    pacman->setFocus();
    setScene(escena);
   // pacman->setPos(QPoint(100,100));
    pacman->setPos(300,300);
    setFixedSize(700,700);
    escena->setSceneRect(0,0,700,700);
    if(pacman->collidesWithItem(fondo)==true){
       qDebug()<<"Chocaste con algo." ;
    }

    //setStyleSheet("QWidget {background-image: url(:/Fondos/BlankBackground.png) }");


    //setBackgroundBrush(QBrush(QImage("qrc:/Fondos/Background.png")));



}
