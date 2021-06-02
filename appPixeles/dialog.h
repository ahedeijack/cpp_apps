#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QPainter>
#include <qrandom.h>
#include <QInputDialog>

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
    void on_buttIniciar_clicked();

    void on_butDetener_clicked();

    void on_butSalir_clicked();

    void on_sliderRojo_valueChanged(int value);

    void on_sliderVerde_valueChanged(int value);

    void on_sliderAzul_valueChanged(int value);

private:
    Ui::Dialog *ui;

    QTimer *timer;

    void paintEvent(QPaintEvent * evt) override;

    void pixeles();

    void cuadro1();

    void cuadro2();

    void cuadro3();

    void cuadro4();

};
#endif // DIALOG_H
