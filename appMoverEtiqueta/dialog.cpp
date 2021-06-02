#include "dialog.h"
#include "ui_dialog.h"
#include <time.h>

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);

}


Dialog::~Dialog()
{
    delete ui;
}

//Iniciar Timer
void Dialog::on_pushButton_2_clicked()
{
    if(!ui->RBHorizontal->isChecked() && !ui->RBVertical->isChecked() && !ui->RBAleatorio->isChecked())
    {
        MsgBx.setInformativeText("Seleccione una opción de movimiento");
        MsgBx.exec();
    }
    else

    {
        ui->pushButton_2->setDisabled(true);

        if(!ui->pushButton_2->isEnabled())
        {
            ui->pushButton_2->setStyleSheet("color: rgb(0, 0, 0);");
        }

        definirTimer();

        if(ui->RBHorizontal->isChecked())
        {
            timerX->start(100);
        }
            else
        if(ui->RBVertical->isChecked())
        {
            timerY->start(100);
        }
            else
        if(ui->RBAleatorio->isChecked())
        {
            timerR->start(100);
        }
    }

}

//Detener el Timer
void Dialog::on_btnDetener_clicked()
{
    if(!ui->pushButton_2->isEnabled())
    {
        ui->pushButton_2->setDisabled(false);
        ui->pushButton_2->setStyleSheet("background-color: rgb(40, 40, 40);");
        ui->pushButton_2->setStyleSheet("color: rgb(255, 255, 255);");
    }

    if(ui->RBHorizontal->isChecked())
    {
        timerX->stop();
    }
        else
    if(ui->RBVertical->isChecked())
    {
        timerY->stop();
    }
        else
    if(ui->RBAleatorio->isChecked())
    {
        timerR->stop();
    }
}

void Dialog::moverEtiqueta()
{
    if(ui->RBHorizontal->isChecked())
    {
        movimientoX(10);
    }
        else
    if(ui->RBVertical->isChecked())
    {
        movimientoY(10);
    }
        else
    if(ui->RBAleatorio->isChecked())
    {
        srand(time(nullptr));
        //int mov = (int)rand()%5+5;

        movimientoX(10);
        movimientoY(10);
    }
}

void Dialog::definirTimer()
{
    if(ui->RBHorizontal->isChecked())
    {
        timerX = new QTimer();
        connect(timerX, SIGNAL(timeout()), this, SLOT(moverEtiqueta()));
    }
        else
    if(ui->RBVertical->isChecked())
    {
        timerY = new QTimer();
        connect(timerY, SIGNAL(timeout()), this, SLOT(moverEtiqueta()));
    }
        else
    if(ui->RBAleatorio->isChecked())
    {
        timerR = new QTimer();
        connect(timerR, SIGNAL(timeout()), this, SLOT(moverEtiqueta()));
    }
}

void Dialog::movimientoX(int n)
{
    static int x = ui->label->geometry().x();// 0;

    static bool band = true;
    int y = ui->label->geometry().y();

    //Derecha
    if(ui->label->geometry().x() < this->width() - ui->label->width() - 5 && band)
    {
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        x+= n;

        if(ui->label->geometry().x() > this->width() - ui->label->width() - 5)
        {
            band = false;
        }
    }
        else
    //Izquierda
    if(!band)
    {
        x-= n;
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());

        if(x == 0 || x < 0)
        {
            band = true;
        }
    }
}

void Dialog::movimientoY(int n)
{
    static int y = ui->label->geometry().y();//0;

    static bool band = true;
    int x = ui->label->geometry().x();

    //Abajo
    if(ui->label->geometry().y() < this->height() - ui->label->height() - ui->btnDetener->height() - 25 && band)
    {
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        y+= n;

        if(ui->label->geometry().y() > this->height() - ui->label->height() - ui->btnDetener->height() - 25)
        {
            band = false;
        }
    }
        else
    //Arriba
    if(!band)
    {
        y-= n;
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());

        if(y == 0 || y < 0)
        {
            band = true;
        }
    }
}

/*
 *Tarea
 *1) Mover verticalmente sin tapar los botones
 *2) Mover Aleatorio
 * Validando que no quede detras de los botones.
 * Subir a la plataforma el Domingo y grabar un pequeño video para
 * La revision del lunes
*/

//    static int x = 0; //Estas variables que tienen el modificador static
                      //mantienen el valor en sucesivas llamadas al metodo,
                      //Pero solo se inicializan al inicio y despues mantienen el valor.
