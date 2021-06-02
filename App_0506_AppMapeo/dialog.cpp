#include "dialog.h"
#include "ui_dialog.h"

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

void Dialog::paintEvent(QPaintEvent *event){
    Q_UNUSED(event)
    canvas = new QPainter(this);

    if (dibujoOrientacionNormal){
        dibujarFigura();
    } else if(dibujoMapeado){
        dibujarFiguraMapeada();
    }

}
void Dialog::asignarFigura(){ // TENIA 1

    //Puntas Inferiores V
    Fig[0][0] = 8; Fig[0][1] = 7.5; Fig[0][2]= 1;
    Fig[1][0] = 12; Fig[1][1] = 5; Fig[1][2]= 1;
    Fig[2][0] = 12; Fig[2][1] = 5; Fig[2][2]= 1;

    Fig2[0][0] = 12; Fig2[0][1] = 5; Fig2[0][2]= 1;
    Fig2[1][0] = 16; Fig2[1][1] = 7.5; Fig2[1][2]= 1;
    Fig2[2][0] = 16; Fig2[2][1] = 7.5; Fig2[2][2]= 1;

    // Tres lineas inferiores. I I I
    Fig3[0][0] = 8; Fig3[0][1] = 7.5; Fig3[0][2]= 1;
    Fig3[1][0] = 8; Fig3[1][1] = 12.5; Fig3[1][2]= 1;
    Fig3[2][0] = 8; Fig3[2][1] = 12.5; Fig3[2][2]= 1;

    Fig4[0][0] = 12; Fig4[0][1] = 7.5; Fig4[0][2]= 1;
    Fig4[1][0] = 12; Fig4[1][1] = 12.5; Fig4[1][2]= 1;
    Fig4[2][0] = 12; Fig4[2][1] = 12.5; Fig4[2][2]= 1;

    Fig5[0][0] = 16; Fig5[0][1] = 7.5; Fig5[0][2]= 1;
    Fig5[1][0] = 16; Fig5[1][1] = 12.5; Fig5[1][2]= 1;
    Fig5[2][0] = 16; Fig5[2][1] = 12.5; Fig5[2][2]= 1;

    //Lineas diagonales de conexión //
    Fig6[0][0] = 12; Fig6[0][1] = 12.5; Fig6[0][2]= 1;
    Fig6[1][0] = 8; Fig6[1][1] = 17.5; Fig6[1][2]= 1;
    Fig6[2][0] = 8; Fig6[2][1] = 17.5; Fig6[2][2]= 1;

    Fig7[0][0] = 16; Fig7[0][1] = 12.5; Fig8[0][2]= 1;
    Fig7[1][0] = 12; Fig7[1][1] = 17.5; Fig8[1][2]= 1;
    Fig7[2][0] = 12; Fig7[2][1] = 17.5; Fig8[2][2]= 1;

    //Lineas de subida  III

    Fig8[0][0] = 8; Fig8[0][1] = 17.5; Fig8[0][2]= 1;
    Fig8[1][0] = 8; Fig8[1][1] = 22.5; Fig8[1][2]= 1;
    Fig8[2][0] = 8; Fig8[2][1] = 22.5; Fig8[2][2]= 1;

    Fig9[0][0] = 12; Fig9[0][1] = 17.5; Fig9[0][2]= 1;
    Fig9[1][0] = 12; Fig9[1][1] = 22.5; Fig9[1][2]= 1;
    Fig9[2][0] = 12; Fig9[2][1] = 22.5; Fig9[2][2]= 1;

    Fig10[0][0] = 16; Fig10[0][1] = 17.5; Fig10[0][2]= 1;
    Fig10[1][0] = 16; Fig10[1][1] = 22.5; Fig10[1][2]= 1;
    Fig10[2][0] = 16; Fig10[2][1] = 22.5; Fig10[2][2]= 1;

    //Esquinas superiores II
    Fig11[0][0] = 8; Fig11[0][1] = 22.5; Fig11[0][2]= 1;
    Fig11[1][0] = 12; Fig11[1][1] = 24; Fig11[1][2]= 1;
    Fig11[2][0] = 12; Fig11[2][1] = 24; Fig11[2][2]= 1;

    Fig12[0][0] = 12; Fig12[0][1] = 24; Fig12[0][2]= 1;
    Fig12[1][0] = 16; Fig12[1][1] = 22.5; Fig12[1][2]= 1;
    Fig12[2][0] = 16; Fig12[2][1] = 22.5; Fig12[2][2]= 1;

    //Lineas de conexión --
    Fig13[0][0] = 8; Fig13[0][1] = 12.5; Fig13[0][2]= 1;
    Fig13[1][0] = 12; Fig13[1][1] = 12.5; Fig13[1][2]= 1;
    Fig13[2][0] = 12; Fig13[2][1] = 12.5; Fig13[2][2]= 1;

    Fig14[0][0] = 12; Fig14[0][1] = 17.5; Fig14[0][2]= 1;
    Fig14[1][0] = 16; Fig14[1][1] = 17.5; Fig14[1][2]= 1;
    Fig14[2][0] = 16; Fig14[2][1] = 17.5; Fig14[2][2]= 1;



    //RESPALDAR LA FIGURA ORIGINAL PARA RESETEARLA CUANDO SEA NECESARIO
    for(int r = 0; r < 4; r++){
        for(int c = 0; c < 3 ; c++ ){
            FigAux[r][c] = Fig[r][c];
            FigAux2[r][c] = Fig2[r][c];
            FigAux3[r][c] = Fig3[r][c];
            FigAux4[r][c] = Fig4[r][c];
            FigAux5[r][c] = Fig4[r][c];
            FigAux6[r][c] = Fig4[r][c];
            FigAux4[r][c] = Fig4[r][c];
            FigAux7[r][c] = Fig4[r][c];
            FigAux8[r][c] = Fig4[r][c];
            FigAux9[r][c] = Fig4[r][c];
            FigAux10[r][c] = Fig4[r][c];
            FigAux12[r][c] = Fig4[r][c];
            FigAux13[r][c] = Fig4[r][c];
            FigAux14[r][c] = Fig4[r][c];
        }
    }



    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho / 2;
    centroY = this->size().height()/2;
}
void Dialog::dibujarFigura(){
        //dibujar los ejes cartesianos
        //LINEA HORIZONTAL
        canvas->drawLine(0,
                         size().height()/2,
                         ancho,
                         size().height()/2);

        //LINEA VERTICAL
        canvas->drawLine(ancho/2,
                         0,
                         ancho/2,
                         size().height());

        canvas->setPen(QColor(0,0,255));

        for(int i = 0; i < 3; i++)
            //ESQ. SUP. IZQ
           //canvas->drawLine(Fig[i][0],Fig[i][1], Fig[i+1][0], Fig[i+1][1]);
            //CENTRO
            canvas->drawLine(centroX+Fig[i][0],centroY+Fig[i][1], centroX+Fig[i+1][0], centroY+Fig[i+1][1]);


}
void Dialog::dibujarFiguraMapeada()
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

    dibujo.mapear(Fig2[0][0],Fig2[0][1],x1,y1, L, M );
    dibujo.mapear(Fig2[2][0], Fig2[2][1], x2, y2, L , M);
    canvas->drawLine(x1,y1,x2,y2);

    dibujo.mapear(Fig3[0][0],Fig3[0][1],x1,y1, L, M );
    dibujo.mapear(Fig3[2][0], Fig3[2][1], x2, y2, L , M);
    canvas->drawLine(x1,y1,x2,y2);

    dibujo.mapear(Fig4[0][0],Fig4[0][1],x1,y1, L, M );
    dibujo.mapear(Fig4[2][0], Fig4[2][1], x2, y2, L , M);
   canvas->drawLine(x1,y1,x2,y2);

   dibujo.mapear(Fig5[0][0],Fig5[0][1],x1,y1, L, M );
   dibujo.mapear(Fig5[2][0], Fig5[2][1], x2, y2, L , M);
  canvas->drawLine(x1,y1,x2,y2);

  dibujo.mapear(Fig6[0][0],Fig7[0][1],x1,y1, L, M );
  dibujo.mapear(Fig6[2][0], Fig7[2][1], x2, y2, L , M);
 canvas->drawLine(x1,y1,x2,y2);

 dibujo.mapear(Fig8[0][0],Fig8[0][1],x1,y1, L, M );
 dibujo.mapear(Fig8[2][0], Fig8[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig9[0][0],Fig9[0][1],x1,y1, L, M );
dibujo.mapear(Fig9[2][0], Fig9[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig10[0][0],Fig10[0][1],x1,y1, L, M );
dibujo.mapear(Fig10[2][0], Fig10[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig11[0][0],Fig11[0][1],x1,y1, L, M );
dibujo.mapear(Fig11[2][0], Fig11[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig12[0][0],Fig12[0][1],x1,y1, L, M );
dibujo.mapear(Fig12[2][0], Fig12[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig4[0][0],Fig4[0][1],x1,y1, L, M );
dibujo.mapear(Fig4[2][0], Fig4[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig13[0][0],Fig13[0][1],x1,y1, L, M );
dibujo.mapear(Fig13[2][0], Fig13[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

dibujo.mapear(Fig14[0][0],Fig14[0][1],x1,y1, L, M );
dibujo.mapear(Fig14[2][0], Fig14[2][1], x2, y2, L , M);
canvas->drawLine(x1,y1,x2,y2);

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

        dibujo.mapear(Fig4[i][0],Fig4[i][1],x1,y1, L, M );
        dibujo.mapear(Fig4[i+1][0], Fig4[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig5[i][0],Fig5[i][1],x1,y1, L, M );
        dibujo.mapear(Fig5[i+1][0], Fig5[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig6[i][0],Fig6[i][1],x1,y1, L, M );
        dibujo.mapear(Fig6[i+1][0], Fig6[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig7[i][0],Fig7[i][1],x1,y1, L, M );
        dibujo.mapear(Fig7[i+1][0], Fig7[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig8[i][0],Fig8[i][1],x1,y1, L, M );
        dibujo.mapear(Fig8[i+1][0], Fig8[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig9[i][0],Fig9[i][1],x1,y1, L, M );
        dibujo.mapear(Fig9[i+1][0], Fig9[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig10[i][0],Fig10[i][1],x1,y1, L, M );
        dibujo.mapear(Fig10[i+1][0], Fig10[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig11[i][0],Fig11[i][1],x1,y1, L, M );
        dibujo.mapear(Fig11[i+1][0], Fig11[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);


        dibujo.mapear(Fig12[i][0],Fig12[i][1],x1,y1, L, M );
        dibujo.mapear(Fig12[i+1][0], Fig12[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);


        dibujo.mapear(Fig13[i][0],Fig13[i][1],x1,y1, L, M );
        dibujo.mapear(Fig13[i+1][0], Fig13[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);

        dibujo.mapear(Fig14[i][0],Fig14[i][1],x1,y1, L, M );
        dibujo.mapear(Fig14[i+1][0], Fig14[i+1][1], x2, y2, L , M);
        canvas->drawLine(x1,y1,x2,y2);
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

void Dialog::on_spinBox_valueChanged(int arg1)
{
    asignarFigura();
    dibujoOrientacionNormal = false;
    dibujoMapeado = true;
    repaint();
}
