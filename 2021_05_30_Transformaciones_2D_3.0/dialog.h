#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QKeyEvent>

#include "mapeo.h"
#include "matrix.h"

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
    void keyPressEvent(QKeyEvent *evento);
    void asignarFigura();
    void dibujarFigura(); //Ya no se va a utilizar
    void dibujarFiguraMapeada();

    void trasladar(int tX, int tY);
    void escalar(float sX,float sY);
    void escalarPuntoFijo(float sX, float sY, int pfx, int pfy);
    void rotar(int angulo);
    void rotarPuntoFijo(float angulo,float pfx,float pfy);


private slots:
    void on_btnIzq_clicked();

    void on_btnArriba_clicked();

    void on_btnDer_clicked();

    void on_btnAbajo_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();
    void rotarAnimacion();
    void rotarAnimacion2();

private:
    Ui::Dialog *ui;

    QPainter *canvas;
    QTimer *timer;

    float Fig[23][3]; //Estrella
    float FigAux[23][3];

    int ancho; //Ancho del area de dibujo
    int centroX, centroY;

    //TRASLACION
    int tx, ty;
};
#endif // DIALOG_H
