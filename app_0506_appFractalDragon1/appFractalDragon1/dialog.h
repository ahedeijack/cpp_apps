#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
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

private:
    Ui::Dialog *ui;
    void paintEvent(QPaintEvent *e) override;
    void dragon();
    QPainter *canvas;
    void generarDragon(QPainter *canvas);
    int ejeX[4098],ejeY[4098],paso;
    int signo;
};
#endif // DIALOG_H
