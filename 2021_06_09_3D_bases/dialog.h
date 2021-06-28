#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <math.h>

#include "mapeo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

#define radianes(g) ((double)(g) * M_PI / 180.0)

struct Puntos3D
{
    int x,y,z;
    bool opcion; //SE USA PARA INDICAR MOVETO_3D O LINETO3D
};

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void paintEvent(QPaintEvent *evento);
    void asignaCubo();
    void proyeccionCubo();
    void dibujarCubo();
    void inicializaPuerto();

    void lineTo3D(int x, int y, int z, float alpha, float phi, int i);
    void moveTo3D(int x, int y, int z, float alpha, float phi, int i);

private slots:
    void on_dial_sliderMoved(int position);

    void on_dial_2_valueChanged(int value);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Dialog *ui;

    QPainter *canvas;
    QPointF points[16]; //x,y

    Puntos3D *cubo; //x,y,z,opvion

    Mapeo mapeo;
    int L,M;
    int ancho;
    float alpha;
    float phi;
    float tx, ty, tz;
};
#endif // DIALOG_H
