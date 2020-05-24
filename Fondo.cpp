#include "Fondo.h"

Fondo::Fondo(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/Fondos/BlankBackground.png"));
}

