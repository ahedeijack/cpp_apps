#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *evt)
{
    Q_UNUSED(evt)

    pixeles();

    if(ui->radioButton_1->isChecked()){
        cuadro1();
    }
    if(ui->radioButton_2->isChecked()){
        cuadro2();
    }
    if(ui->radioButton_3->isChecked()){
        cuadro3();
    }
    if(ui->radioButton_4->isChecked()){
        cuadro4();
    }
}

void Dialog::pixeles()
{
       QPainter canvas(this);
        if(ui->radioButPantalla->isChecked()){
       for(int i=0;i<10000;i++){
           QPen pen1(QColor(ui->sliderRojo->value(),
                            ui->sliderVerde->value(),
                            ui->sliderAzul->value()));
           pen1.setWidth(3);
           canvas.setPen(pen1);
           canvas.drawPoint(qrand()%this->width(),qrand()%(height())-120);
         }
        }else if(ui->radioButCuadrado->isChecked()){
            for(int i=0;i<10000;i++){
                QPen pen1(QColor(ui->sliderRojo->value(),
                                 ui->sliderVerde->value(),
                                 ui->sliderAzul->value()));
                pen1.setWidth(3);
                canvas.setPen(pen1);
                canvas.drawPoint(qrand()%this->width()/2+width()/4,qrand()%height()/2+height()/4-60);
        }
        }
}

void Dialog::cuadro1()
{
    QPainter canvas(this);
    for(int i=0;i<10000;i++){
        QPen pen1(QColor(ui->sliderRojo->value(),
                         ui->sliderVerde->value(),
                         ui->sliderAzul->value()));
        pen1.setWidth(3);
        canvas.setPen(pen1);
        canvas.drawPoint(qrand()%(this->width()/2),qrand()%(height()/2)-60);
    }
}

void Dialog::cuadro2()
{
    QPainter canvas(this);
    for(int i=0;i<10000;i++){
        QPen pen1(QColor(ui->sliderRojo->value(),
                         ui->sliderVerde->value(),
                         ui->sliderAzul->value()));
        pen1.setWidth(3);
        canvas.setPen(pen1);
        canvas.drawPoint(qrand()%(this->width()/2)+((this->width()/2)+10)
                         ,qrand()%(height()/2)-60);
    }
}

void Dialog::cuadro3()
{
    QPainter canvas(this);
    for(int i=0;i<10000;i++){
        QPen pen1(QColor(ui->sliderRojo->value(),
                         ui->sliderVerde->value(),
                         ui->sliderAzul->value()));
        pen1.setWidth(3);
        canvas.setPen(pen1);
        canvas.drawPoint(qrand()%(this->width()/2),qrand()%(height()/2-60)+(height()/2)-60);
    }
}

void Dialog::cuadro4()
{
    QPainter canvas(this);
    for(int i=0;i<10000;i++){
        QPen pen1(QColor(ui->sliderRojo->value(),
                         ui->sliderVerde->value(),
                         ui->sliderAzul->value()));
        pen1.setWidth(3);
        canvas.setPen(pen1);
        canvas.drawPoint(qrand()%(this->width()/2)+((this->width()/2)),
                         qrand()%(height()/2-60)+(height()/2)-60);
    }
}

void Dialog::on_buttIniciar_clicked()
{
 timer->start(30);
}

void Dialog::on_butDetener_clicked()
{
 timer->stop();
}

void Dialog::on_butSalir_clicked()
{
 close();
}

void Dialog::on_sliderRojo_valueChanged(int value)
{
    ui->valorRojo->setText(QString::number(value));
}

void Dialog::on_sliderVerde_valueChanged(int value)
{
    ui->valorVerde->setText(QString::number(value));
}

void Dialog::on_sliderAzul_valueChanged(int value)
{
    ui->valorAzul->setText(QString::number(value));
}

