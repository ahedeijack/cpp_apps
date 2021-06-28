#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtGui>

#include "mapeo.h"

//MACRO
#define radianes(g) ((double)(g) * M_PI / 180.0)

//ESTRUCTURA PARA DEFINIR CADA PUNTO DEL CUBO
struct Puntos3D{
    int x,y,z;
    bool opcion; //PARA MOVERSE O UTILIZAR LINEA. 0: moverse,   1:trazar linea
};

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *evt);
    void asignarCubo();
    void proyeccionCubo();
    void dibujarCubo();
    void inicializarPuerto();

    void lineTo3D(int x, int y, int z, float alpha, float phi, int i);
    void moveTo3D(int x, int y, int z, float alpha, float phi, int i);

    void keyPressedEvent(QKeyEvent *event);

private slots:
    void on_dialAplha_valueChanged(int value);

    void on_dialPhi_sliderMoved(int position);

    void on_pushButtonDerecha_clicked();

    void on_pushButtonIzquierda_clicked();

    void on_pushButtonArriba_clicked();

    void on_pushButtonAbajo_clicked();

    void on_pushButtonZMas_clicked();

    void on_pushButtonZMenos_clicked();

    void on_checkBox_clicked();

    void on_pushButtonDerecha_3_clicked();

    void on_pushButtonIzquierda_3_clicked();

    void on_pushButtonArriba_3_clicked();

    void on_pushButtonAbajo_3_clicked();

    void on_pushButtonZMas_3_clicked();

    void on_pushButtonZMenos_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;

    QPainter *canvas;
    QPointF points[16];
    Puntos3D *cubo;
    Mapeo mapeo;

    int L,M;
    int ancho;
    float alpha, phi;

    //TRASLACION
    int Tx, Ty, Tz;

    //ESCALACION
    int Sx, Sy, Sz;
    int PFX, PFY, PFZ;
    int escX, escY, escZ;

    //ROTACION
    int angulo;
    int rotX, rotY, rotZ;
};
#endif // WIDGET_H
