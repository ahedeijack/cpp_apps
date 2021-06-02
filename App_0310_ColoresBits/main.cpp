#include <QApplication>
#include <QWidget>
#include <QPalette>
#include<QBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *widget = new QWidget();

    widget->setGeometry(100,100,300,300);

    QPalette paleta(widget->palette());

    int color =16777215;
    color &= 65280;

    paleta.setColor(QPalette::Window,QColor(color));


    widget->setAutoFillBackground(true);
    widget->setPalette(paleta);

    widget->show();

    return a.exec();
}
