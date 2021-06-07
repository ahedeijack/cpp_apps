#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QRandomGenerator>

#include "rectanguloitem.h"
#include "Goal.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//CREAR LA ESCENA
    QGraphicsScene *escena = new QGraphicsScene();

    RectanguloItem *rectangulo = new RectanguloItem(400,400);
    Goal *goal = new Goal(20,20);

    goal->setRect(0, 100, 10,10);
    rectangulo->setRect(0,0,50,50);

    rectangulo->setFlag(QGraphicsItem::ItemIsFocusable);


    rectangulo->setFocus();

    escena->addItem(rectangulo);
    escena->addItem(goal);
//CREAR LA VISTA, USAR LA ESCENA QUE SE CREO
    QGraphicsView *vista = new QGraphicsView(escena);

    if(rectangulo->collidesWithItem(goal)){
        escena->removeItem(goal);
    }

    vista->resize(400,400);

    vista->show();

    return a.exec();
}
