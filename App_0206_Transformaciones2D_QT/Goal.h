#ifndef GOAL_H
#define GOAL_H
#include <QObject>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QTimer>

class Goal : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    explicit Goal(int ancho = 20, int alto = 20);//QObject *parent = nullptr);

    void keyPressEvent(QKeyEvent *evento);
signals:

private:
    int ancho, alto;
    QTimer *timer;
public slots:
    void moverGoal();
};


#endif // GOAL_H
