#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graficos.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dragon = arabesco = curvaHenon = malthus1 = malthus2 = mandelbrot = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    arabesco = curvaHenon = malthus1 = malthus2 = mandelbrot = false;
    dragon = true;
    update();
}

void MainWindow::on_pushButton_2_clicked()
{
    dragon = curvaHenon = malthus1 = malthus2 = mandelbrot = false;
    arabesco = true;
    update();
}

void MainWindow::on_pushButton_3_clicked()
{
    dragon = arabesco = malthus1 = malthus2 = mandelbrot = false;
    curvaHenon = true;
    update();
}

void MainWindow::on_pushButton_4_clicked()
{
    dragon = arabesco = curvaHenon = malthus2 = mandelbrot = false;
    malthus1 = true;
    update();
}

void MainWindow::on_pushButton_5_clicked()
{
    dragon = arabesco = curvaHenon = malthus1 = mandelbrot = false;
    malthus2 = true;
    update();
}

void MainWindow::on_pushButton_6_clicked()
{
    dragon = arabesco = curvaHenon = malthus1 = malthus2 = false;
    mandelbrot = true;
    update();
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)

    Canvas = new QPainter(this);

    graficos = new class graficos(); //CONSTRUIMOS NUESTRO OBJETO GRAFICOS

    if (dragon)
        graficos->dragon(Canvas);
    else if (arabesco)
        graficos->dragonArabesco(Canvas);
    else if (curvaHenon)
        graficos->curvaHenon(Canvas);
    else if (malthus1)
        graficos->malthus1(Canvas);
    else if (malthus2)
        graficos->malthus2(Canvas);
    else if (mandelbrot)
        graficos->mandelbrot(Canvas);

    Canvas->end();
}
