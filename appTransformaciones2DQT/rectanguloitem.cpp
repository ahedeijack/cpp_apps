#include "rectanguloitem.h"

RectanguloItem::RectanguloItem(int ancho, int alto) //QObject *parent) : QObject(parent)
{
    this->ancho = ancho;
    this->alto = alto;
}

void RectanguloItem::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_Left)
        setPos(this->x() - 10, this->y());

    if(evento->key() == Qt::Key_Right)
        setPos(this->x() + 10, this->y());

    if(evento->key() == Qt::Key_Up)
        setPos(this->x(), this->y() - 10);

    if(evento->key() == Qt::Key_Down)
        setPos(this->x(), this->y() + 10);
}
