#include "rectanguloitem.h"

RectanguloItem::RectanguloItem(int ancho, int alto)
{
    this->ancho = ancho;
    this->alto = alto;
}

void RectanguloItem::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left)
        setPos(this->x() - 10, y());
    if(event->key() == Qt::Key_Right)
        setPos(this->x() + 10, y());
    if(event->key() == Qt::Key_Up)
        setPos(this->x(), y() - 10);
    if(event->key() == Qt::Key_Down)
        setPos(this->x(), y() + 10);
}
