#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QColorDialog>

#include "graficos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked(); //Dibujar Linea Add

    void on_pushButton_2_clicked(); //Seleccionar Color

private:
    Ui::Dialog *ui;

    void paintEvent(QPaintEvent evt);

    QColor color;

    int x1, y1, x2, y2;

    bool linea;
};
#endif // DIALOG_H
