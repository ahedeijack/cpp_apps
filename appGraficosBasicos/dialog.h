#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QColorDialog>
#include <QMouseEvent>
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

    //void mousePressEvent(QMouseEvent *event);

private slots:
    void on_btnLinea_clicked();//Dibujar linea DDA

    void on_btnColor_clicked();//Seleccionar color

    void on_btnBresenham_clicked();

private:
    Ui::Dialog *ui;

    void paintEvent(QPaintEvent *evt) override;
    QPainter *Canvas;

    QColor color;

    int x1,y1,x2,y2;

    bool linea;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

    void mouseDoubleClickEvent(QMouseEvent *event) override;

};
#endif // DIALOG_H
