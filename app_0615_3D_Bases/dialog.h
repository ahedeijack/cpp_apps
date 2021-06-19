#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void paintEvent(QPaintEvent *evento);
    void asignarCubo();
    void proyeccionCubo();
    void dibujarCubo();
    void inicializarPuerto();

    void lineTo3D(int x, int y, int z, float alpha, float phi, int i);
    void moveTo3D(int x, int y, int z, float alpha, float phi, int i);

private:
    Ui::Dialog *ui;

    QPainter *canvas;
    QPointF points[16];

    Puntos3D *cubo;

    Mapeo mapeo;
    int L,M;
    int ancho;
    float alpha;
    float phi;

};
#endif // DIALOG_H
