#include "Goal.h"
#include <QRandomGenerator>
#include "rectanguloitem.h"
#include <QGraphicsRectItem>

Goal::Goal(int ancho, int alto) //QObject *parent) : QObject(parent)
{
    this->ancho = ancho;
    this->alto = alto;

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(moverGoal()));
}

void Goal::keyPressEvent(QKeyEvent *evento){
    if(evento->key()==Qt::Key_Space){
        timer->start(50);
        moverGoal();
    }
}

void Goal::moverGoal(){

    this->setPos(qrand()%50,qrand()%50);


}
