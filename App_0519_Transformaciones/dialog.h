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
    void PaintEvent(QPaintEvent *event);
    void asignarFigura();
    void dibujarFiguraMapeada();
    void trasladar(int tX, int tY);

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::Dialog *ui;

    QPainter *canvas;
    float Fig[4][3];
    float

};
#endif // DIALOG_H
