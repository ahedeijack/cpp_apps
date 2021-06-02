#include "dialog.h"
#include "ui_dialog.h"


//Definimos una variable global la cual cambiara cuando se haga un clicked

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer();
    timerVertical = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(moverEtiqueta()));
    connect(timerVertical, SIGNAL(timeout()), this, SLOT(moverVertical()));
}



Dialog::~Dialog()
{
    delete ui;
}

//Iniciar Timers
void Dialog::on_btnMover_clicked()
{
    timer->start(100);
}
void Dialog::on_btnVertical_clicked(){
    timerVertical->start(100);
}
void Dialog::on_btnDvd_clicked()
{
    timerVertical->start(100);
     timer->start(100);
}

//Detener el Timer
void Dialog::on_btnDetener_clicked()
{
    timer->stop();
    timerVertical->stop();
}

void Dialog::moverEtiqueta(){

        /*
        Estas variables que tienen el modificador static
        mantienen el valor en sucesivas llamadas al metodo,
        Pero solo se inicializan al inicio y despues mantienen el valor.
        */
        static int x =ui->label->geometry().x();
        static bool band = true;
        int y = ui->label->geometry().y();


        //Derecha
        if(ui->label->geometry().x() < this->width() - ui->label->width() && band){
            ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
            x+= 20;

            if(ui->label->geometry().x() > this->width() - ui->label->width()){
                band = false;
            }
        }
            else
        //Izquierda
        if(!band){
            x-= 20;
            ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());

            if(x == 0 || x<0){
                band = true;
            }
        }

}

void Dialog::moverVertical(){
    static int y =ui->label->geometry().y();
    static bool band = true;
    int x = ui->label->geometry().x();

        //Abajo
                    //Para bajar sin tapar los botones, le restamos las unidades que cubren los botones al Layout
                    //para que solo baje lo necesario, y al momento de hacer el cambio de bandera, la comparación
                    //de igual manera, tiene que tener en cuenta que se han restado las 100 unidades.
        if(ui->label->geometry().y() < ((this->height()-100) - ui->label->height()) && band){

                ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
                y+= 10;

            if(ui->label->geometry().y() > (this->height()-100) - ui->label->height()){
                band = false;
            }


        //Arriba
            //Aquí no se cambia nada.
        }else if(!band){

            y-= 10;
            ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());

            if(y == 0 || y<0){
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



