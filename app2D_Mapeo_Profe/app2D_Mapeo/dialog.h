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

private:
    Ui::Dialog *ui;

    QPainter *canvas;

    float Fig[4][3]; // TRIANGULO O FIG. ORIGINAL
    float FigAux[4][3];

    int ancho;  // ANCHO DEL AREA DE DIBUJO
    int centroX, centroY;

    bool dibujoOrientacionNormal; // Y hacia abajo
    bool dibujoMapeado; // Y hacia arriba


};
#endif // DIALOG_H
