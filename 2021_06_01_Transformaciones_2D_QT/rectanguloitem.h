#ifndef RECTANGULOITEM_H
#define RECTANGULOITEM_H

#include <QObject>
#include <QWidget>
#include <QGraphicsRectItem>
#include <QKeyEvent>

class RectanguloItem : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    explicit RectanguloItem(int ancho=100, int alto=100);

    void keyPressEvent(QKeyEvent *event);

signals:

private:
    int ancho, alto;

};

#endif // RECTANGULOITEM_H
