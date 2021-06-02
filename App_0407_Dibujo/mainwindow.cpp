#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer();

    connect(timer,SIGNAL(
                timeout()),
            this,SLOT(
                update()
                ));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_start_clicked()
{
   timer->start(30);
}

void MainWindow::on_btn_stop_clicked()
{
timer->stop();
}

void MainWindow::paintEvent(QPaintEvent *evt)
{
    Q_UNUSED(evt)
      QPainter canvas(ui->frame_canva);
        QString red = ui->txt_red->text();
        QString green = ui->txt_green->text();
        QString blue = ui->txt_blue->text();

        for(int i = 0; i < 100; i++){
            QPen pen1(
                        QColor(
                            red.toInt(),
                            green.toInt(),
                            blue.toInt())
                        );

            pen1.setWidth(20);

            canvas.setPen(pen1);

            canvas.drawPoint(
                        rand()%this->width()+10,
                        rand()% height() -50
             );
        }
}
