#include "rectanguloitem.h"
#include <QTimer>
RectanguloItem::RectanguloItem(int ancho, int alto)
{
    this->ancho = ancho;
    this->alto = alto;

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(mover()));
}

void RectanguloItem::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_Left)
        setPos(this->x()-10, this->y());
    if(evento->key() == Qt::Key_Right)
        setPos(this->x()+10, this->y());
    if(evento->key() == Qt::Key_Up)
        setPos(this->x(), this->y()-10);
    if(evento->key() == Qt::Key_Down)
        setPos(this->x(), this->y()+10);

    if(evento->key() == Qt::Key_Space){
        timer->start(50);
        mover();
    }

    if(evento->key() == Qt::Key_S){
        timer->stop();
    }
}

void RectanguloItem::mover(){

    //Implementar rebotes.
    static bool bandX = true;
    static bool bandY = true;


    if(this->x() < ancho - 10 && bandX){
        setPos(x() + 10, y());
            if (x() == ancho - 10){
                bandX = false;
            }
    }

    if(!bandX){
        setPos(x() -10, y());
        if(y() == 0){
            bandX = true;
        }
    }

    if(this->y() < alto - 10 && bandY){
        setPos(x() + 10, y());
            if (y() == alto - 10){
                bandY = false;
            }
    }

    if(!bandY){
        setPos(x(), y()-10);
        if(y() == 0){
            bandY = true;
        }
    }

}
