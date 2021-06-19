#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>

#include "mapeo.h"
#include "matrix.h"

#include <QTimer>
#include <QKeyEvent>
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
    void dibujarFigura(); //Ya no se va a utilizar
    void dibujarFiguraMapeada();

    void trasladar(int tX, int tY);
    void escalar(float sX, float sY);
    void escalarPuntoFijo(float sX, float sY, int pfx, int pfy);
    void rotar(double grad);

        void KeyPressEvent( QKeyEvent * evento);
private slots:
    void on_btnIzq_clicked();

    void on_btnArriba_clicked();

    void on_btnDer_clicked();

    void on_btnAbajo_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_doubleSpinBox_textChanged(const QString &arg1);

    void on_verticalSlider_sliderMoved(int position);

    void on_pushButton_3_clicked();

    void on_dial_angulo_sliderMoved(int position);

    void rotarAnimacion1();

    void rotarAnimacion2();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_checkBox_stateChanged(int arg1);

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



    int ancho; //Ancho del area de dibujo
    int centroX, centroY;
    bool dibujoMapeado; //H hacía arriba
    //TRASLACION
    int tx, ty;
    QTimer *timer1, *timer2;

};
#endif // DIALOG_H
