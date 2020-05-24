#include "Pacman.h"
#include "Fondo.h"
#include <QDebug>



Pacman::Pacman(QGraphicsItem *parent): QGraphicsPixmapItem(parent){        
}

void Pacman::keyPressEvent(QKeyEvent *evento)
{
    bool Retrieve=false;
    QList<QGraphicsItem *> colliding_items = collidingItems() ;
    for(int i=0, n=colliding_items.size();i<n;i++){
      if(typeid (*(colliding_items[i])) == typeid(Fondo)){
          //Retrieve=false;
          Retrieve=evento->QKeyEvent::isAutoRepeat();
          qDebug()<<Retrieve;
      }}
    //Mueve el pacman
    if(evento->key() == Qt::Key_A && Retrieve==false ){
        if(pos().x()>17) setPos(x()-4,y());
        setTransformOriginPoint(14,16);
        setRotation(180);
    }
    else if(evento->key() == Qt::Key_D && Retrieve==false){
        if(pos().x()<656) setPos(x()+4,y());
        setTransformOriginPoint(14,16);
        setRotation(0);
    }
    else if(evento->key() == Qt::Key_W && Retrieve==false){
        if(pos().y()>14) setPos(x(),y()-4);
        setTransformOriginPoint(14,16);
        setRotation(270);
    }
    else if(evento->key() == Qt::Key_S && Retrieve==false){
        if(pos().y()<656) setPos(x(),y()+4);
        setTransformOriginPoint(14,16);
        setRotation(90);        
    }
    if(imagen==0){
        imagen=1;
        setPixmap(QPixmap(":/Animations/Pacman200%-export1.png"));
    }
    else if(imagen==1){
        imagen=2;
        setPixmap(QPixmap(":/Animations/Pacman200%-export2.png"));
    }
    else{
        imagen=0;
        setPixmap(QPixmap(":/Animations/Pacman200%-export3.png"));
    }
    Retrieve=false;
}

void Pacman::AnimationP(){

}
