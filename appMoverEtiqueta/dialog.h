#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QtGui>
#include <QMessageBox>

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
    void on_pushButton_2_clicked();

    void on_btnDetener_clicked();

    void moverEtiqueta();

    void definirTimer();

    void movimientoX(int v);
    void movimientoY(int v);

private:
    Ui::Dialog *ui;

    QTimer *timerX;
    QTimer *timerY;
    QTimer *timerR;
    QMessageBox MsgBx;
};
#endif // DIALOG_H
