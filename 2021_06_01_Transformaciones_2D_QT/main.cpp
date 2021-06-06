#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

#include "rectanguloitem.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Crear la escena
    QGraphicsScene *escena = new QGraphicsScene();

    RectanguloItem *rectangulo = new RectanguloItem(400,400);

    rectangulo->setRect(0,0,50,50);

    rectangulo->setFlag(QGraphicsItem::ItemIsFocusable);

    rectangulo->setFocus();
    escena->addItem(rectangulo);

    //Crear la vista. Usar la escena que se creo
    QGraphicsView *vista = new QGraphicsView(escena);

    vista->resize(400,400);

    vista->show();

    return a.exec();
}
