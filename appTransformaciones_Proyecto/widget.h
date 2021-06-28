#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QKeyEvent>
#include <QtGui>
#include <QTimer>

#include "mapeo.h"
#include "matrix.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void paintEvent(QPaintEvent *event) override;
    void asignarFigura();

    void dibujarFiguraMapeada();

    //TRANSFORMACIONES 2D
    void trasladar(int tx, int ty);
    void escalar2D (int sx, int sy);
    void escalarPuntoFijo(int pfx, int pfy, int sx, int sy);
    void rotacion(double grad);
    void rotacionPuntoFijo(double grad, double xr, double yr);
    void reflexion2DEjeX();
    void reflexion2DEjeY();
    void reflexion2DCoordenado();
    void reflexion2DRectaYX();
    void reflexion2DRectaYnX();

    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    //void on_pushButton_8_clicked();

    //void on_pushButton_9_clicked();

    void rotarAnimacion1();
    void rotarAnimacion2();

private:
    Ui::Widget *ui;

    float Fig[14][3];
    float FigAux[14][3];

    float Fig1[4][3];
    float FigAux1[4][3];

    float Fig2[2][3];
    float FigAux2[2][3];

    float Fig3[4][3];
    float FigAux3[4][3];

    float Fig4[4][3];
    float FigAux4[4][3];

    float Fig5[5][3];
    float FigAux5[5][3];

    float Fig6[4][3];
    float FigAux6[4][3];

    int ancho, altura;
    int centroX, centroY;
    int zoom1, zoom2;

    QTimer *timer1, *timer2;

    int tX, tY;
    int sX, SY;
    int Pfx, Pfy;
};
#endif // WIDGET_H
