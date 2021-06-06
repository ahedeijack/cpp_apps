#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

#include "rectanguloitem.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//CREAR LA ESCENA
    QGraphicsScene *escena = new QGraphicsScene();

    RectanguloItem *rectangulo = new RectanguloItem(400,400);
    RectanguloItem *rectanguloPared = new RectanguloItem(10,10);

    rectangulo->setRect(0,0,50,50);
    rectanguloPared->setRect(0,0,10,10);
    rectangulo->setFlag(QGraphicsItem::ItemIsFocusable);


    rectangulo->setFocus();

    escena->addItem(rectanguloPared);
    escena->addItem(rectangulo);
//CREAR LA VISTA, USAR LA ESCENA QUE SE CREO
    QGraphicsView *vista = new QGraphicsView(escena);

    vista->resize(400,400);

    vista->show();

    return a.exec();
}
