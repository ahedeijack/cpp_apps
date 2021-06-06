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
    RectanguloItem *rect = new RectanguloItem(400,400);

    rect->setRect(0,0,50,50);

    rect->setFlag(QGraphicsItem::ItemIsFocusable );

    rect->setFocus();
    escena->addItem(rect);

    //Crear la vista
    QGraphicsView *vista = new QGraphicsView(escena);

    vista->resize(400,400);

    vista->show();

    return a.exec();
}
