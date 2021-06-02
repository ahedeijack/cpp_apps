#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QPainter>

#include "mapeo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void paintEvent(QPaintEvent *event);
    void asignarFigura();
    void dibujarFigura();
    void dibujarFiguraMapeada();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Dialog *ui;
    QPainter *canvas;

    float Fig[4][3]; //Triangulo o figura original.
    float FigAux[4][3];

    float Fig2[4][3]; // FIGURA ORIGINAL (DE INICIO SE USARA UN TRIANGULO)
    float FigAux2[4][3];

    float Fig3[4][3]; // TRIANGULO O FIG. ORIGINAL
    float FigAux3[4][3];

    float Fig4[4][3]; // FIGURA ORIGINAL (DE INICIO SE USARA UN TRIANGULO)
    float FigAux4[4][3];

    float Fig5[4][3];
    float FigAux5[4][3];

    float Fig6[4][3];
    float FigAux6[4][3];

    float Fig7[4][3];
    float FigAux7[4][3];

    float Fig8[4][3];
    float FigAux8[4][3];

    float Fig9[4][3];
    float FigAux9[4][3];

    float Fig10[4][3];
    float FigAux10[4][3];

    float Fig11[4][3];
    float FigAux11[4][3];

    float Fig12[4][3];
    float FigAux12[4][3];

    float Fig13[4][3];
    float FigAux13[4][3];

    float Fig14[4][3];
    float FigAux14[4][3];

    float Fig15[4][3];
    float FigAux15[4][3];

    float Fig16[4][3];
    float FigAux16[4][3];

    float Fig17[4][3];
    float FigAux17[4][3];

    float Fig18[4][3];
    float FigAux18[4][3];

    float Fig19[4][3];
    float FigAux19[4][3];

    float Fig20[4][3];
    float FigAux20[4][3];

    float Fig21[4][3];
    float FigAux21[4][3];



    int ancho;  // ANCHO DEL AREA DE DIBUJO
    int centroX, centroY;

    bool dibujoOrientacionNormal; //Y hacía abajo
    bool dibujoMapeado; //H hacía arriba


};
#endif // DIALOG_H
