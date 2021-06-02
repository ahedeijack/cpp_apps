#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>

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
    void asignarFigura();
    void dibujarFigura(); //Ya no se va a utilizar
    void dibujarFiguraMapeada();

    void trasladar(int tX, int tY);
    void escalar(float sX, float sY);
private slots:
    void on_btnIzq_clicked();

    void on_btnArriba_clicked();

    void on_btnDer_clicked();

    void on_btnAbajo_clicked();

    void on_pushButton_clicked();

    void on_spinBox_textChanged(const QString &arg1);

    void on_spinBox_2_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;

    QPainter *canvas;

    float Fig[4][3]; //Estrella
    float FigAux[4][3];

    int ancho; //Ancho del area de dibujo
    int centroX, centroY;

    //TRASLACION
    int tx, ty;
};
#endif // DIALOG_H
