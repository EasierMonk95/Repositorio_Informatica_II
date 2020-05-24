#ifndef FONDO_H
#define FONDO_H

#include <QGraphicsPixmapItem>


class Fondo: public QGraphicsPixmapItem{
public:
    Fondo(QGraphicsItem *parent = 0);
    QGraphicsPixmapItem * fondo;
};

#endif // FONDO_H
