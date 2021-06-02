#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>

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
    void dibujarFiguarMapeada();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_spinBox_textChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::Dialog *ui;

    QPainter *canvas;

    float Fig[4][3]; // TRIANGULO O FIG. ORIGINAL
    float FigAux[4][3];

    float Fig2[4][3]; // FIGURA ORIGINAL (DE INICIO SE USARA UN TRIANGULO)
    float FigAux2[4][3];

    float Fig3[4][3]; // TRIANGULO O FIG. ORIGINAL
    float FigAux3[4][3];

    float Fig4[4][3]; // FIGURA ORIGINAL (DE INICIO SE USARA UN TRIANGULO)
    float FigAux4[4][3];

    float Fig5[4][3]; // TRIANGULO O FIG. ORIGINAL
    float FigAux5[4][3];

    int ancho;  // ANCHO DEL AREA DE DIBUJO
    int centroX, centroY;

    bool dibujoOrientacionNormal; // Y hacia abajo
    bool dibujoMapeado; // Y hacia arriba


};
#endif // DIALOG_H