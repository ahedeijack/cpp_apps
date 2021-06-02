#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(moverImagen1() ));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnIniciar_clicked()
{
    timer->start(20);
}

void MainWindow::on_btnDetener_clicked()
{
    timer->stop();
}

void MainWindow::on_btnSalir_clicked()
{
    this->close();
}

void MainWindow::moverImagen1(){
    static int x = 0;
    int y = ui->label ->geometry().y();
    static bool band = true;

    ui->label->setStyleSheet("background-image: url(:/img/img/pez3.png)");

        if (ui->label->geometry().x() < (ui->peceraWidget->geometry().width() - ui->label->geometry().width()) && band ){

            ui->label->setGeometry(x, y, ui->label->width(), ui->label->width());
            x+= 10;

            if(ui->label->geometry().x() >= (ui->peceraWidget->geometry().width() - ui->label->geometry().width()) ){
                ui->label->setStyleSheet("background-image: url(:/img/img/pez4.png)");
                band = false;
            }

        }

        if(!band){
            ui->label->setStyleSheet("background-image: url(:/img/img/pez4.png)");
            x-= 10;
           ui->label->setGeometry(x, y, ui->label->width(), ui->label->width());

           if(x == 0){
               band = true;
                 ui->label->setStyleSheet("background-image: url(:/img/img/pez3.png)");
           }
        }

}



