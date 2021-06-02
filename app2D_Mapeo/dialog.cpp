#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>
using namespace std;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    dibujoOrientacionNormal = dibujoMapeado = false;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    canvas = new QPainter(this);
    if(dibujoOrientacionNormal)
        dibujarFigura();
    else if(dibujoMapeado)
        dibujarFiguarMapeada();

    canvas->end();
}
void Dialog::asignarFigura()
{                                 // TENIA 1

    //espacio de una hoja de maquina
    //Fig[0][0] = 11; Fig[0][1] = 0; Fig[0][2]= 1;
    Fig[0][0] = 11; Fig[0][1] = 28; Fig[0][2]= 1;
    Fig[1][0] = 0; Fig[1][1] = 28; Fig[1][2]= 1;
    //Fig[2][0] = 11; Fig[2][1] =18.5; Fig[2][2]= 1;
    //Fig[3][0] = 0; Fig[3][1] = 0000; Fig[3][2]= 1;
    Fig2[0][0] = 11; Fig2[0][1] = 28; Fig2[0][2]= 1;
    Fig2[1][0] = 22; Fig2[1][1] = 0; Fig2[1][2]= 1;
//    Fig2[2][0] = 11; Fig2[2][1] = 18.5; Fig2[2][2]= 1;
//    //
    Fig3[0][0] = 0; Fig3[0][1] = 18; Fig3[0][2]= 1;
    Fig3[1][0] = 22; Fig3[1][1] = 18; Fig3[1][2]= 1;
//    Fig3[2][0] = 22; Fig3[2][1] = 9; Fig3[2][2]= 1;
    //
    Fig4[0][1] = 0; Fig4[0][1] = 18; Fig4[0][2]= 1;
    Fig4[1][0] = 22; Fig4[1][1] = 0; Fig4[1][2]= 1;
//    Fig4[2][0] = 16.5; Fig4[2][1] = 14; Fig4[2][2]= 1;
//    //
//    Fig5[0][0] = 22; Fig5[0][1] = 9; Fig5[0][2]= 1;
//    Fig5[1][0] = 16.5; Fig5[1][1] = 14; Fig5[1][2]= 1;
//    Fig5[2][0] = 14.5; Fig5[2][1] = 9; Fig5[2][2]= 1;


    for(int r = 0; r < 4; r++){
        for(int c = 0; c < 3 ; c++ ){
            FigAux[r][c] = Fig[r][c];
            FigAux2[r][c] = Fig2[r][c];
             FigAux3[r][c] = Fig3[r][c];
             FigAux4[r][c] = Fig4[r][c];
//             FigAux5[r][c] = Fig5[r][c];
        }
    }

    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho / 2;
    centroY = this->size().height()/2;


}
void Dialog::dibujarFigura()
{
//dibujar los ejes cartesianos
    //LINEA HORIZONTAL
    canvas->drawLine(0, size().height()/2,ancho,size().height()/2);
    //LINEA VERTICAL
    canvas->drawLine(ancho/2,0,ancho/2,size().height());
    canvas->setPen(QColor(255,0,0));
    for(int i = 0; i < 3; i++){
        //ESQ. SUP. IZQ
       //canvas->drawLine(Fig[i][0],Fig[i][1], Fig[i+1][0], Fig[i+1][1]);
        //CENTRO
        canvas->drawLine(centroX+Fig[i][0],centroY+Fig[i][1], centroX+Fig[i+1][0], centroY+Fig[i+1][1]);
        canvas->drawLine(centroX+Fig2[i][0],centroY+Fig2[i][1], centroX+Fig2[i+1][0], centroY+Fig2[i+1][1]);
        canvas->drawLine(centroX+Fig3[i][0],centroY+Fig3[i][1], centroX+Fig3[i+1][0], centroY+Fig3[i+1][1]);
//        canvas->drawLine(centroX+Fig4[i][0],centroY+Fig4[i][1], centroX+Fig4[i+1][0], centroY+Fig4[i+1][1]);
//        canvas->drawLine(centroX+Fig5[i][0],centroY+Fig5[i][1], centroX+Fig5[i+1][0], centroY+Fig5[i+1][1]);
}

}
void Dialog::dibujarFiguarMapeada()
{
    Mapeo dibujo;
    //colocacion del puerto en el centro de la forma donde se esta dibujando
    dibujo.ventana(0,0,22,28);

    int zoom = ui->spinBox->value(); //:D
    dibujo.puerto(150-zoom,100-zoom,350+zoom,400+zoom); //:D

    //el valor de m=    ypvmin + ypvmax
    //dibujar el rectangulo que mostrara el puerto de vision
    canvas->drawRect(150-zoom,100-zoom,200+(zoom *2),300+(zoom*2)); //:D
    // en el rect            ancho alto
    canvas->setPen(QColor(0,0,255));
    //REPRESENTAN EL ORIGEN EN EL MAPEO, ESQ. INF. IZQ.
   // int L = 0;
   // int M = this->size().height();
    int L = 0; // si XPVMIN ES EL FACTOR DE TRANSLACION
    int M = 500;//ypvmin
    int x1, y1,x2,y2;
    //CALCULAR LOS EXTREMOS DE LA LINEA
    dibujo.mapear(Fig[0][0],Fig[0][1],x1,y1, L, M );
    dibujo.mapear(Fig[2][0], Fig[2][1], x2, y2, L , M);
    canvas->drawLine(x1,y1,x2,y2);
    cout<< "F1 X1 = " << x1 <<endl;
    cout<< "F1 X2 = " << x2 <<endl;
    cout<< "F1 Y1 = " << y1 <<endl;
    cout<< "F1 Y2 = " << y2 <<endl;
    dibujo.mapear(Fig2[0][0],Fig2[0][1],x1,y1, L, M );
    dibujo.mapear(Fig2[2][0], Fig2[2][1], x2, y2, L , M);
    canvas->drawLine(x1,y1,x2,y2);
    cout<< "F2 X1 = " << x1 <<endl;
    cout<< "F2 X2 = " << x2 <<endl;
    cout<< "F2 Y1 = " << y1 <<endl;
    cout<< "F2 Y2 = " << y2 <<endl;
    dibujo.mapear(Fig3[0][0],Fig3[0][1],x1,y1, L, M );
    dibujo.mapear(Fig3[2][0], Fig3[2][1], x2, y2, L , M);
    canvas->drawLine(x1,y1,x2,y2);
    cout<< "F3 X1 = " << x1 <<endl;
    cout<< "F3 X2 = " << x2 <<endl;
    cout<< "F3 Y1 = " << y1 <<endl;
    cout<< "F3 Y2 = " << y2 <<endl;
    dibujo.mapear(Fig4[0][0],Fig4[0][1],x1,y1, L, M );
    dibujo.mapear(Fig4[2][0], Fig4[2][1], x2, y2, L , M);
   canvas->drawLine(x1,y1,x2,y2);
//    cout<< "F4 X1 = " << x1 <<endl;
//    cout<< "F4 X2 = " << x2 <<endl;
//    cout<< "F4 Y1 = " << y1 <<endl;
//    cout<< "F4 Y2 = " << y2 <<endl;
//    dibujo.mapear(Fig5[0][0],Fig5[0][1],x1,y1, L, M );
//    dibujo.mapear(Fig5[2][0], Fig5[2][1], x2, y2, L , M);
//    canvas->drawLine(x1,y1,x2,y2);
//    cout<< "F5 X1 = " << x1 <<endl;
//    cout<< "F5 X2 = " << x2 <<endl;
//    cout<< "F5 Y1 = " << y1 <<endl;
//    cout<< "F5 Y2 = " << y2 <<endl;
    for(int i = 0; i < 2; i++)
    {
        dibujo.mapear(Fig[i][0],Fig[i][1],x1,y1, L, M );
        dibujo.mapear(Fig[i+1][0], Fig[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig2[i][0],Fig2[i][1],x1,y1, L, M );
        dibujo.mapear(Fig2[i+1][0], Fig2[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig3[i][0],Fig3[i][1],x1,y1, L, M );
        dibujo.mapear(Fig3[i+1][0], Fig3[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig4[i][0],Fig4[i][1],x1,y1, L, M );
        dibujo.mapear(Fig4[i+1][0], Fig4[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

//        dibujo.mapear(Fig5[i][0],Fig5[i][1],x1,y1, L, M );
//        dibujo.mapear(Fig5[i+1][0], Fig5[i+1][1], x2, y2, L , M);
//        canvas->drawLine(x1,y1,x2,y2);
    }



}
void Dialog::on_pushButton_clicked()
{
   asignarFigura();
   dibujoOrientacionNormal = true;
   dibujoMapeado = false;
   repaint();
}

void Dialog::on_pushButton_2_clicked()
{
    asignarFigura();
    dibujoOrientacionNormal = false;
    dibujoMapeado = true;
    repaint();
}
/*Fig[0][0] = 10; Fig[0][1] = 10; Fig[0][2]= 1;
Fig[1][0] = 30; Fig[1][1] = 10; Fig[1][2]= 1;
Fig[2][0] = 10; Fig[2][1] = 30; Fig[2][2]= 1;
//REGRESA AL INICIO DE LA FIGURA
Fig[3][0] = 10; Fig[3][1] = 10; Fig[3][2]= 1;
*/
//        Fig[0][0] = 0; Fig[0][1] = 0; Fig[0][2]= 1;
//        Fig[1][0] = 10000; Fig[1][1] = 0000; Fig[1][2]= 1;
//        Fig[2][0] = 00000; Fig[2][1] = 10000; Fig[2][2]= 1;
//        //REGRESA AL INICIO DE LA FIGURA
//        Fig[3][0] = 0; Fig[3][1] = 0000; Fig[3][2]= 1;

    //realizar para que se vea 10 x 10
//RESPALDAR LA FIGURA ORIGINAL PARA RESETEARLA CUANDO SEA NECESARIO
//    Fig[0][0] = 0; Fig[0][1] = 0; Fig[0][2]= 1;
//    Fig[1][0] = 7.3; Fig[1][1] = 3.2; Fig[1][2]= 1;
//    Fig[2][0] = 5.5; Fig[2][1] = 5.5; Fig[2][2]= 1;
//REGRESA AL INICIO DE LA FIGURA







//dibujar los ejes cartesianos
    //LINEA HORIZONTAL
    //canvas->drawLine(0, size().height()/2,ancho,size().height()/2);
    //LINEA VERTICAL
    //canvas->drawLine(ancho/2,0,ancho/2,size().height());

// VENTANA REPRESENTA EL MUNDO REAL
//dibujo.ventana(0,0,ancho,size().height());
//dibujo.ventana(0,0,ancho,size().height());
//PUERTO DE VISION REPRESENTA EL AREA DE DESPLIEGUE EN EL DISPOSITIVO
//dibujo.puerto(0,0,ancho,size().height());
//    dibujo.ventana(0,0,10000,10000);
//dibujo.ventana(0,0,10,10);
//dibujo.ventana(0,0,21.5,28); //pulgadas ventana (0,0,8.5,11)
//dibujo.ventana(0,0,22,28);
//dibujo.puerto(0,0,ancho/2,size().height()/2);

void Dialog::on_spinBox_textChanged(const QString &arg1)
{

}

void Dialog::on_spinBox_valueChanged(int arg1)
{

}
