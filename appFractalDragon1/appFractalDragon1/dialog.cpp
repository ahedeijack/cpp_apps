#include "dialog.h"
#include "ui_dialog.h"
#include "graficos.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)
    dragon();
}

void Dialog::dragon()
{
    QPainter canvas(this);
    int i;
    paso = 4096;
    signo = -1;
    ejeX[1] = canvas.window().width()/4;
    ejeX[4097] = 3 * canvas.window().width()/4;
    ejeY[1] = ejeY[4097] = canvas.window().height()/2;

   // canvas.setFont(QFont("ROCKWELL",10));
   // canvas.drawText(15,5,"CURVA FRACTAL DEL DRAGON");
    //canvas.setPen(QColor(50,50,200));



    //dibujar primera linea
    canvas.drawLine(ejeX[1],ejeY[1],ejeX[4097],ejeY[4097]);
    for(int i = 1;i<=11;i++)
    {
        generarDragon(&canvas);
        paso/=2;
    }
}

void Dialog::generarDragon(QPainter *canvas)
{
    int j,dx,dy;
    j = paso/2;
    canvas->setPen(QColor(0,0,qrand()%155+100));
    for(int i = 1; i <= 4096 ; i+=paso)
    {
     dx = ejeX[paso + i] - ejeX[i];
     dy = ejeY[paso +i] - ejeY[i];
     signo *= -1;
     ejeX[i + j] = ejeX[i] + ( dx + ( dy * signo ) ) / 2;
     ejeY[i + j] = ejeY[i] + ( dy - ( dx * signo ) ) / 2;

     QString datos = "X1_= " +QString::number(ejeX[i]);
     datos +=  "Y1 : " +QString(ejeY[i]) + " X2 = " +QString::number(ejeX[i+j]) + "Y2 = " + QString::number(ejeY[i+j]);
     canvas->drawText(5,20,datos);

     canvas->drawLine(ejeX[i],ejeY[i],ejeX[i+j],ejeY[i+j]);

//     QString datos2 = "X1 = " +QString::number(ejeX[i+j]);

//     datos2 +=  "Y1 : " +QString(ejeY[i+j]) + " X2 = " +QString::number(ejeX[i+paso]) + "Y2 = " + QString::number(ejeY[i+paso]);
//     canvas->drawText(5,40,datos2);

     canvas->drawLine(ejeX[i+j],ejeY[i+j],ejeX[i+paso],ejeY[i+paso]);
    }
}

