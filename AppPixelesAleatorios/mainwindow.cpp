#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    timer = new QTimer();
    //connect(timer,SIGNAL(timeout()),this,SLOT(repaint())));
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    //update y repaint invocan al metodo paint event automaticamente

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    timer->start(30);
}

void MainWindow::on_pushButton_2_clicked()
{
    timer->stop();
}

void MainWindow::on_pushButton_3_clicked()
{
    close();
}

void MainWindow::paintEvent(QPaintEvent *evt)
{
    Q_UNUSED(evt)
    QPainter canvas(this);
     QString r = ui->lineEdit ->text();
     QString g = ui->lineEdit_2 -> text();
     QString b = ui ->lineEdit_3 -> text();

    for(int i = 0; i < 100; i++){
        QPen pen1(QColor(r.toInt(),g.toInt(),b.toInt()));
        pen1.setWidth(20);
        canvas.setPen(pen1);
        canvas.drawPoint(rand()%this->width()+10,rand()% height() -50);
    }

}
void MainWindow::pixeles()
{

}

void MainWindow::on_horizontalSliderR_valueChanged(int value)
{
}

void MainWindow::on_horizontalSliderG_valueChanged(int value)
{

}

void MainWindow::on_horizontalSliderB_valueChanged(int value)
{

}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{

}
