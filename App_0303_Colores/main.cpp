#include <QApplication>
#include <QWidget>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *widget = new QWidget();

    //Principal punto en cuenta:
    //Todo esta relativo al 0,0 (sup izquierda)

    widget->setGeometry(100,100,300,300);

    QPalette paleta(widget->palette());

    //paleta.setColor(QPalette::Background, Qt::cyan);
    //paleta.setColor(QPalette::Window, QColor(cyan));
    //paleta.setColor(QPalette::Window, QColor::fromRgb(100,100,100));

    //srand(time(NULL));
    //paleta.setColor(QPalette::Window, QColor::fromRgb(rand()%155+100,rand()%150+100,rand()%150+100));
    //paleta.setColor(QPalette::Window, QColor(16711680)); //Rojo, los demás están invertidos.
    //paleta.setColor(QPalette::Window, QColor(65280)); //
    //paleta.setColor(QPalette::Window, QColor(255));

    int color =16777215;
    color &= 65280;
    //color &=16711680;


    //Implementar un metodo para aplicar los operadores a nivel de bit.
   //El metodo regresara el resultado del color en una variable entera.
    //Asigne el operador a nivel de bit a utilizar.
    paleta.setColor(QPalette::Window,QColor(color));


    //Investigar Qrandom
    //estudiar operadores a nivel bit (bitwise)
    widget->setAutoFillBackground(true);
    widget->setPalette(paleta);

    widget->show();
    return a.exec();
}

