#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QtGui>

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
    void on_btnMover_clicked();
    void on_btnVertical_clicked();
    void on_btnDetener_clicked();
    void on_btnDvd_clicked();

    void moverEtiqueta();
    void moverVertical();

private:
    Ui::Dialog *ui;

    //Timer random sera utilizado para poder mover la etiqueta aleatoriamente dentro del Layout.
    //Timer Dvd sera utilizado para hacer la animación que normalmente tiene el Dvd al momento de entrar en Stand by.
    QTimer *timer, *timerVertical;

};
#endif // DIALOG_H
