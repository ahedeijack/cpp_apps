#include <QApplication>
#include <QLabel>
#include <QSpinBox>
#include <QSLider>
#include <QPushButton>
#include <QHBoxLayout>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     QWidget ventana;
     //QVBoxLayout *layoutPrincipal = new QVBoxLayout(&ventana);
    // QHBoxLayout *layoutPrincipal = new QHBoxLayout(&ventana);

        QGridLayout *gridLayout = new QGridLayout(&ventana);

     QLabel *label = new QLabel("0");
     QSpinBox *spinBox = new QSpinBox;
     QSlider *slider = new QSlider(Qt :: Horizontal);
     QPushButton *boton1 = new QPushButton("Salir");
     QPushButton *boton2 = new QPushButton("Sumar");
/*
     layoutPrincipal -> addWidget(label1);
     layoutPrincipal -> addWidget(spinBox);
     layoutPrincipal -> addWiget(slider);
    layoutPrincipal -> addWidget(boton1);
    layoutPrincipal -> addWidget(boton2);
*/
        gridLayout->addWidget(label, 0,0,1,1);
        gridLayout->addWidget(spinBox,0,1,1,1);
        gridLayout->addWidget(slider, 1,3);
        gridLayout->addWidget(boton1,2,0,1,1);
        gridLayout->addWidget(boton2,2,1,1,1);

       QObject::connect(spinBox,SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(slider,SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(slider,SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox,SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
        QObject::connect(boton1, SIGNAL(clicked()), qApp, SLOT(quit()));

        ventana.show();
    return a.exec();
}
