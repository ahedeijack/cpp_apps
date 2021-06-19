#include "dialog.h"
#include "ui_dialog.h"
//App Felix
#include <QTimer>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    asignarFigura();
    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(rotarAnimacion1()));

    timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(rotarAnimacion2()));

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    canvas = new QPainter(this);

    if(dibujoMapeado){
        dibujarFiguraMapeada();
    }


    canvas->end();
}
void Dialog::asignarFigura()
{
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

    Fig7[0][0] = 16; Fig7[0][1] = 12.5; Fig7[0][2]= 1;
    Fig7[1][0] = 12; Fig7[1][1] = 17.5; Fig7[1][2]= 1;
    Fig7[2][0] = 12; Fig7[2][1] = 17.5; Fig7[2][2]= 1;

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
            FigAux5[r][c] = Fig5[r][c];
            FigAux6[r][c] = Fig6[r][c];
            FigAux7[r][c] = Fig7[r][c];
            FigAux8[r][c] = Fig8[r][c];
            FigAux9[r][c] = Fig9[r][c];
            FigAux10[r][c] = Fig10[r][c];
            FigAux11[r][c] = Fig11[r][c];
            FigAux12[r][c] = Fig12[r][c];
            FigAux13[r][c] = Fig13[r][c];
            FigAux14[r][c] = Fig14[r][c];
        }
    }



    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho / 2;
    centroY = this->size().height()/2;
}

void Dialog::dibujarFiguraMapeada()
{
    Mapeo dibujo;

    canvas->drawLine(0, size().height()/2, ancho, size().height()/2);
    canvas->drawLine(ancho/2,0,ancho/2,size().height());



    //Colocacion del puerto en el centro de la forma donde se esta dibujando
    dibujo.ventana(0,0,22,28);
    int zoom = ui->verticalSlider->value(); //:D
    dibujo.puerto(150-zoom,100-zoom,350+zoom,400+zoom); //:D


    //En el rectangulo el ancho y el alto

    canvas->setPen(QColor(0,0,255));

    int L = centroX-250;
    int M = centroY+250; //YPVMIN + YPVMAX

    int x1, y1, x2, y2;

    //Calcular los extremos de la linea
    //dibujo.mapear(Fig[0][0], Fig[0][1], x1, y1, L, M);
    //dibujo.mapear(Fig[2][0], Fig[2][1], x2, y2, L, M);

    //canvas->drawLine(x1, y1, x2, y2);

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

void Dialog::trasladar(int tX, int tY)
{
    Matrix fig, id, figres; //OBJETOS ESTATICOS
    Matrix fig2, id2, figres2; //OBJETOS ESTATICOS
    Matrix fig3, id3, figres3; //OBJETOS ESTATICOS
    Matrix fig4, id4, figres4; //OBJETOS ESTATICOS
    Matrix fig5, id5, figres5; //OBJETOS ESTATICOS
    Matrix fig6, id6, figres6; //OBJETOS ESTATICOS
    Matrix fig7, id7, figres7; //OBJETOS ESTATICOS
    Matrix fig8, id8, figres8; //OBJETOS ESTATICOS
    Matrix fig9, id9, figres9; //OBJETOS ESTATICOS
    Matrix fig10, id10, figres10; //OBJETOS ESTATICOS
    Matrix fig11, id11, figres11; //OBJETOS ESTATICOS
    Matrix fig12, id12, figres12; //OBJETOS ESTATICOS
    Matrix fig13, id13, figres13; //OBJETOS ESTATICOS
    Matrix fig14, id14, figres14; //OBJETOS ESTATICOS

    fig.Inicializa(4,3);
    fig2.Inicializa(4,3);
    fig3.Inicializa(4,3);
    fig4.Inicializa(4,3);
    fig5.Inicializa(4,3);
    fig6.Inicializa(4,3);
    fig7.Inicializa(4,3);
    fig8.Inicializa(4,3);
    fig9.Inicializa(4,3);
    fig10.Inicializa(4,3);
    fig11.Inicializa(4,3);
    fig12.Inicializa(4,3);
    fig13.Inicializa(4,3);
    fig14.Inicializa(4,3);

    figres.Inicializa(4,3);
    figres2.Inicializa(4,3);
    figres3.Inicializa(4,3);
    figres4.Inicializa(4,3);
    figres5.Inicializa(4,3);
    figres6.Inicializa(4,3);
    figres7.Inicializa(4,3);
    figres8.Inicializa(4,3);
    figres9.Inicializa(4,3);
    figres10.Inicializa(4,3);
    figres11.Inicializa(4,3);
    figres12.Inicializa(4,3);
    figres13.Inicializa(4,3);
    figres14.Inicializa(4,3);


    id.Inicializa(3,3);
    id2.Inicializa(3,3);
    id3.Inicializa(3,3);
    id4.Inicializa(3,3);
    id5.Inicializa(3,3);
    id6.Inicializa(3,3);
    id7.Inicializa(3,3);
    id8.Inicializa(3,3);
    id9.Inicializa(3,3);
    id10.Inicializa(3,3);
    id11.Inicializa(3,3);
    id12.Inicializa(3,3);
    id13.Inicializa(3,3);
    id14.Inicializa(3,3);

    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
            fig2.SET(i,j,Fig2[i][j]);
            fig3.SET(i,j,Fig3[i][j]);
            fig4.SET(i,j,Fig4[i][j]);
            fig5.SET(i,j,Fig5[i][j]);
            fig6.SET(i,j,Fig6[i][j]);
            fig7.SET(i,j,Fig7[i][j]);
            fig8.SET(i,j,Fig8[i][j]);
            fig9.SET(i,j,Fig9[i][j]);
            fig10.SET(i,j,Fig10[i][j]);
            fig11.SET(i,j,Fig11[i][j]);
            fig12.SET(i,j,Fig12[i][j]);
            fig13.SET(i,j,Fig13[i][j]);
            fig14.SET(i,j,Fig14[i][j]);

        }
    }

    //Aplicar traslacion
    figres.traslacion(fig, id, tX, tY);
    figres2.traslacion(fig2, id2, tX, tY);
    figres3.traslacion(fig3, id3, tX, tY);
    figres4.traslacion(fig4, id4, tX, tY);
    figres5.traslacion(fig5, id5, tX, tY);
    figres6.traslacion(fig6, id6, tX, tY);
    figres7.traslacion(fig7, id7, tX, tY);
    figres8.traslacion(fig7, id8, tX, tY);
    figres9.traslacion(fig8, id9, tX, tY);
    figres10.traslacion(fig10, id10, tX, tY);
    figres11.traslacion(fig11, id11, tX, tY);
    figres12.traslacion(fig12, id12, tX, tY);
    figres13.traslacion(fig13, id13, tX, tY);
    figres14.traslacion(fig14, id14, tX, tY);


    //Guardamos los puntos transformados en la fig original
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            Fig[i][j] = figres.GET(i,j);
            Fig2[i][j] = figres2.GET(i,j);
            Fig3[i][j] = figres3.GET(i,j);
            Fig4[i][j] = figres4.GET(i,j);
            Fig5[i][j] = figres5.GET(i,j);
            Fig6[i][j] = figres6.GET(i,j);
            Fig7[i][j] = figres7.GET(i,j);
            Fig8[i][j] = figres8.GET(i,j);
            Fig9[i][j] = figres9.GET(i,j);
            Fig10[i][j] = figres10.GET(i,j);
            Fig11[i][j] = figres11.GET(i,j);
            Fig12[i][j] = figres12.GET(i,j);
            Fig13[i][j] = figres13.GET(i,j);
            Fig14[i][j] = figres14.GET(i,j);
        }
    }

    repaint();
}

void Dialog::escalar(float sX, float sY)
{
    Matrix fig, id, figres; //OBJETOS ESTATICOS
    Matrix fig2, id2, figres2; //OBJETOS ESTATICOS
    Matrix fig3, id3, figres3; //OBJETOS ESTATICOS
    Matrix fig4, id4, figres4; //OBJETOS ESTATICOS
    Matrix fig5, id5, figres5; //OBJETOS ESTATICOS
    Matrix fig6, id6, figres6; //OBJETOS ESTATICOS
    Matrix fig7, id7, figres7; //OBJETOS ESTATICOS
    Matrix fig8, id8, figres8; //OBJETOS ESTATICOS
    Matrix fig9, id9, figres9; //OBJETOS ESTATICOS
    Matrix fig10, id10, figres10; //OBJETOS ESTATICOS
    Matrix fig11, id11, figres11; //OBJETOS ESTATICOS
    Matrix fig12, id12, figres12; //OBJETOS ESTATICOS //OBJETOS ESTATICOS
    Matrix fig13, id13, figres13; //OBJETOS ESTATICOS
    Matrix fig14, id14, figres14; //OBJETOS ESTATICOS


    fig.Inicializa(4,3);
    fig2.Inicializa(4,3);
    fig3.Inicializa(4,3);
    fig4.Inicializa(4,3);
    fig5.Inicializa(4,3);
    fig6.Inicializa(4,3);
    fig7.Inicializa(4,3);
    fig8.Inicializa(4,3);
    fig9.Inicializa(4,3);
    fig10.Inicializa(4,3);
    fig11.Inicializa(4,3);
    fig12.Inicializa(4,3);
    fig13.Inicializa(4,3);
    fig14.Inicializa(4,3);

    figres.Inicializa(4,3);
    figres2.Inicializa(4,3);
    figres3.Inicializa(4,3);
    figres4.Inicializa(4,3);
    figres5.Inicializa(4,3);
    figres6.Inicializa(4,3);
    figres7.Inicializa(4,3);
    figres8.Inicializa(4,3);
    figres9.Inicializa(4,3);
    figres10.Inicializa(4,3);
    figres11.Inicializa(4,3);
    figres12.Inicializa(4,3);
    figres13.Inicializa(4,3);
    figres14.Inicializa(4,3);



    id.Inicializa(4,3);
    id2.Inicializa(4,3);
    id3.Inicializa(4,3);
    id4.Inicializa(4,3);
    id5.Inicializa(4,3);
    id6.Inicializa(4,3);
    id7.Inicializa(4,3);
    id8.Inicializa(4,3);
    id9.Inicializa(4,3);
    id10.Inicializa(4,3);
    id11.Inicializa(4,3);
    id12.Inicializa(4,3);
    id13.Inicializa(4,3);
    id14.Inicializa(4,3);



    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
            fig2.SET(i,j,Fig2[i][j]);
            fig3.SET(i,j,Fig3[i][j]);
            fig4.SET(i,j,Fig4[i][j]);
            fig5.SET(i,j,Fig5[i][j]);
            fig6.SET(i,j,Fig6[i][j]);
            fig7.SET(i,j,Fig7[i][j]);
            fig8.SET(i,j,Fig8[i][j]);
            fig9.SET(i,j,Fig9[i][j]);
            fig10.SET(i,j,Fig10[i][j]);
            fig11.SET(i,j,Fig11[i][j]);
            fig12.SET(i,j,Fig12[i][j]);
            fig13.SET(i,j,Fig13[i][j]);
            fig14.SET(i,j,Fig14[i][j]);
        }
    }

    figres.escalacion(fig, id, sX, sY);
    figres2.escalacion(fig2, id2, sX, sY);
    figres3.escalacion(fig3, id3, sX, sY);
    figres4.escalacion(fig4, id4, sX, sY);
    figres5.escalacion(fig5, id5, sX, sY);
    figres6.escalacion(fig6, id6, sX, sY);
    figres7.escalacion(fig7, id7, sX, sY);
    figres8.escalacion(fig8, id8, sX, sY);
    figres9.escalacion(fig9, id9, sX, sY);
    figres10.escalacion(fig10, id10, sX, sY);
    figres11.escalacion(fig11, id11, sX, sY);
    figres12.escalacion(fig12, id12, sX, sY);
    figres13.escalacion(fig13, id13, sX, sY);
    figres14.escalacion(fig14, id14, sX, sY);


    //Guardamos los puntos transformados en la fig original
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            Fig[i][j] = figres.GET(i,j);
            Fig2[i][j] = figres2.GET(i,j);
            Fig3[i][j] = figres3.GET(i,j);
            Fig4[i][j] = figres4.GET(i,j);
            Fig5[i][j] = figres5.GET(i,j);
            Fig6[i][j] = figres6.GET(i,j);
            Fig7[i][j] = figres7.GET(i,j);
            Fig8[i][j] = figres8.GET(i,j);
            Fig9[i][j] = figres9.GET(i,j);
            Fig10[i][j] = figres10.GET(i,j);
            Fig11[i][j] = figres11.GET(i,j);
            Fig12[i][j] = figres12.GET(i,j);
            Fig13[i][j] = figres13.GET(i,j);
            Fig14[i][j] = figres14.GET(i,j);

        }
    }

    repaint();
    /*
    Matrix fig, id, fres;
    fig.Inicializa(4, 3);
    id.Inicializa(3, 3);
    fres.Inicializa(4, 3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i, j, Fig[i][j]);
    fres.escalacion(fig, id, sX, sY);

    for(int i = 0; i < fres.numRen(); i++)
        for(int j = 0; j < fres.numCol(); j++)
            Fig[i][j] = fres.GET(i, j);

    repaint();

    */
}

void Dialog::escalarPuntoFijo(float sX, float sY, int pfx, int pfy){
    Matrix fig, id, figres; //OBJETOS ESTATICOS
    Matrix fig2, id2, figres2; //OBJETOS ESTATICOS
    Matrix fig3, id3, figres3; //OBJETOS ESTATICOS
    Matrix fig4, id4, figres4; //OBJETOS ESTATICOS
    Matrix fig5, id5, figres5; //OBJETOS ESTATICOS
    Matrix fig6, id6, figres6; //OBJETOS ESTATICOS
    Matrix fig7, id7, figres7; //OBJETOS ESTATICOS
    Matrix fig8, id8, figres8; //OBJETOS ESTATICOS
    Matrix fig9, id9, figres9; //OBJETOS ESTATICOS
    Matrix fig10, id10, figres10; //OBJETOS ESTATICOS
    Matrix fig11, id11, figres11; //OBJETOS ESTATICOS
    Matrix fig12, id12, figres12; //OBJETOS ESTATICOS //OBJETOS ESTATICOS
    Matrix fig13, id13, figres13; //OBJETOS ESTATICOS
    Matrix fig14, id14, figres14; //OBJETOS ESTATICOS


    fig.Inicializa(4,3);
    fig2.Inicializa(4,3);
    fig3.Inicializa(4,3);
    fig4.Inicializa(4,3);
    fig5.Inicializa(4,3);
    fig6.Inicializa(4,3);
    fig7.Inicializa(4,3);
    fig8.Inicializa(4,3);
    fig9.Inicializa(4,3);
    fig10.Inicializa(4,3);
    fig11.Inicializa(4,3);
    fig12.Inicializa(4,3);
    fig13.Inicializa(4,3);
    fig14.Inicializa(4,3);

    figres.Inicializa(4,3);
    figres2.Inicializa(4,3);
    figres3.Inicializa(4,3);
    figres4.Inicializa(4,3);
    figres5.Inicializa(4,3);
    figres6.Inicializa(4,3);
    figres7.Inicializa(4,3);
    figres8.Inicializa(4,3);
    figres9.Inicializa(4,3);
    figres10.Inicializa(4,3);
    figres11.Inicializa(4,3);
    figres12.Inicializa(4,3);
    figres13.Inicializa(4,3);
    figres14.Inicializa(4,3);



    id.Inicializa(4,3);
    id2.Inicializa(4,3);
    id3.Inicializa(4,3);
    id4.Inicializa(4,3);
    id5.Inicializa(4,3);
    id6.Inicializa(4,3);
    id7.Inicializa(4,3);
    id8.Inicializa(4,3);
    id9.Inicializa(4,3);
    id10.Inicializa(4,3);
    id11.Inicializa(4,3);
    id12.Inicializa(4,3);
    id13.Inicializa(4,3);
    id14.Inicializa(4,3);



    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
            fig2.SET(i,j,Fig2[i][j]);
            fig3.SET(i,j,Fig3[i][j]);
            fig4.SET(i,j,Fig4[i][j]);
            fig5.SET(i,j,Fig5[i][j]);
            fig6.SET(i,j,Fig6[i][j]);
            fig7.SET(i,j,Fig7[i][j]);
            fig8.SET(i,j,Fig8[i][j]);
            fig9.SET(i,j,Fig9[i][j]);
            fig10.SET(i,j,Fig10[i][j]);
            fig11.SET(i,j,Fig11[i][j]);
            fig12.SET(i,j,Fig12[i][j]);
            fig13.SET(i,j,Fig13[i][j]);
            fig14.SET(i,j,Fig14[i][j]);
        }
    }

    figres.escalacionPuntoFijo(fig, id, sX, sY, pfx, pfy);
    figres2.escalacionPuntoFijo(fig2, id2, sX, sY, pfx, pfy);
    figres3.escalacionPuntoFijo(fig3, id3, sX, sY, pfx, pfy);
    figres4.escalacionPuntoFijo(fig4, id4, sX, sY, pfx, pfy);
    figres5.escalacionPuntoFijo(fig5, id5, sX, sY, pfx, pfy);
    figres6.escalacionPuntoFijo(fig6, id6, sX, sY, pfx, pfy);
    figres7.escalacionPuntoFijo(fig7, id7, sX, sY, pfx, pfy);
    figres8.escalacionPuntoFijo(fig8, id8, sX, sY, pfx, pfy);
    figres9.escalacionPuntoFijo(fig9, id9, sX, sY, pfx, pfy);
    figres10.escalacionPuntoFijo(fig10, id10, sX, sY, pfx, pfy);
    figres11.escalacionPuntoFijo(fig11, id11, sX, sY, pfx, pfy);
    figres12.escalacionPuntoFijo(fig12, id12, sX, sY, pfx, pfy);
    figres13.escalacionPuntoFijo(fig13, id13, sX, sY, pfx, pfy);
    figres14.escalacionPuntoFijo(fig14, id14, sX, sY, pfx, pfy);


    //Guardamos los puntos transformados en la fig original
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            Fig[i][j] = figres.GET(i,j);
            Fig2[i][j] = figres2.GET(i,j);
            Fig3[i][j] = figres3.GET(i,j);
            Fig4[i][j] = figres4.GET(i,j);
            Fig5[i][j] = figres5.GET(i,j);
            Fig6[i][j] = figres6.GET(i,j);
            Fig7[i][j] = figres7.GET(i,j);
            Fig8[i][j] = figres8.GET(i,j);
            Fig9[i][j] = figres9.GET(i,j);
            Fig10[i][j] = figres10.GET(i,j);
            Fig11[i][j] = figres11.GET(i,j);
            Fig12[i][j] = figres12.GET(i,j);
            Fig13[i][j] = figres13.GET(i,j);
            Fig14[i][j] = figres14.GET(i,j);

        }
    }

    repaint();
}

void Dialog::rotar(double grad){
    Matrix fig, id, figres; //OBJETOS ESTATICOS
    Matrix fig2, id2, figres2; //OBJETOS ESTATICOS
    Matrix fig3, id3, figres3; //OBJETOS ESTATICOS
    Matrix fig4, id4, figres4; //OBJETOS ESTATICOS
    Matrix fig5, id5, figres5; //OBJETOS ESTATICOS
    Matrix fig6, id6, figres6; //OBJETOS ESTATICOS
    Matrix fig7, id7, figres7; //OBJETOS ESTATICOS
    Matrix fig8, id8, figres8; //OBJETOS ESTATICOS
    Matrix fig9, id9, figres9; //OBJETOS ESTATICOS
    Matrix fig10, id10, figres10; //OBJETOS ESTATICOS
    Matrix fig11, id11, figres11; //OBJETOS ESTATICOS
    Matrix fig12, id12, figres12; //OBJETOS ESTATICOS //OBJETOS ESTATICOS
    Matrix fig13, id13, figres13; //OBJETOS ESTATICOS
    Matrix fig14, id14, figres14; //OBJETOS ESTATICOS


    fig.Inicializa(4,3);
    fig2.Inicializa(4,3);
    fig3.Inicializa(4,3);
    fig4.Inicializa(4,3);
    fig5.Inicializa(4,3);
    fig6.Inicializa(4,3);
    fig7.Inicializa(4,3);
    fig8.Inicializa(4,3);
    fig9.Inicializa(4,3);
    fig10.Inicializa(4,3);
    fig11.Inicializa(4,3);
    fig12.Inicializa(4,3);
    fig13.Inicializa(4,3);
    fig14.Inicializa(4,3);

    figres.Inicializa(4,3);
    figres2.Inicializa(4,3);
    figres3.Inicializa(4,3);
    figres4.Inicializa(4,3);
    figres5.Inicializa(4,3);
    figres6.Inicializa(4,3);
    figres7.Inicializa(4,3);
    figres8.Inicializa(4,3);
    figres9.Inicializa(4,3);
    figres10.Inicializa(4,3);
    figres11.Inicializa(4,3);
    figres12.Inicializa(4,3);
    figres13.Inicializa(4,3);
    figres14.Inicializa(4,3);



    id.Inicializa(4,3);
    id2.Inicializa(4,3);
    id3.Inicializa(4,3);
    id4.Inicializa(4,3);
    id5.Inicializa(4,3);
    id6.Inicializa(4,3);
    id7.Inicializa(4,3);
    id8.Inicializa(4,3);
    id9.Inicializa(4,3);
    id10.Inicializa(4,3);
    id11.Inicializa(4,3);
    id12.Inicializa(4,3);
    id13.Inicializa(4,3);
    id14.Inicializa(4,3);



    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
            fig2.SET(i,j,Fig2[i][j]);
            fig3.SET(i,j,Fig3[i][j]);
            fig4.SET(i,j,Fig4[i][j]);
            fig5.SET(i,j,Fig5[i][j]);
            fig6.SET(i,j,Fig6[i][j]);
            fig7.SET(i,j,Fig7[i][j]);
            fig8.SET(i,j,Fig8[i][j]);
            fig9.SET(i,j,Fig9[i][j]);
            fig10.SET(i,j,Fig10[i][j]);
            fig11.SET(i,j,Fig11[i][j]);
            fig12.SET(i,j,Fig12[i][j]);
            fig13.SET(i,j,Fig13[i][j]);
            fig14.SET(i,j,Fig14[i][j]);
        }
    }

    figres.rotacion(fig, id, grad);
    figres2.rotacion(fig2, id2,grad);
    figres3.rotacion(fig3, id3, grad);
    figres4.rotacion(fig4, id4,grad);
    figres5.rotacion(fig5, id5, grad);
    figres6.rotacion(fig6, id6, grad);
    figres7.rotacion(fig7, id7, grad);
    figres8.rotacion(fig8, id8,grad);
    figres9.rotacion(fig9, id9, grad);
    figres10.rotacion(fig10, id10, grad);
    figres11.rotacion(fig11, id11, grad);
    figres12.rotacion(fig12, id12, grad);
    figres13.rotacion(fig13, id13, grad);
    figres14.rotacion(fig14, id14, grad);


    //Guardamos los puntos transformados en la fig original
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            Fig[i][j] = figres.GET(i,j);
            Fig2[i][j] = figres2.GET(i,j);
            Fig3[i][j] = figres3.GET(i,j);
            Fig4[i][j] = figres4.GET(i,j);
            Fig5[i][j] = figres5.GET(i,j);
            Fig6[i][j] = figres6.GET(i,j);
            Fig7[i][j] = figres7.GET(i,j);
            Fig8[i][j] = figres8.GET(i,j);
            Fig9[i][j] = figres9.GET(i,j);
            Fig10[i][j] = figres10.GET(i,j);
            Fig11[i][j] = figres11.GET(i,j);
            Fig12[i][j] = figres12.GET(i,j);
            Fig13[i][j] = figres13.GET(i,j);
            Fig14[i][j] = figres14.GET(i,j);

        }
    }

    repaint();
}


void Dialog::on_btnIzq_clicked()
{
    trasladar(tx - ui->spinBox->value(), 0);
}

void Dialog::on_btnArriba_clicked()
{
    trasladar(0, ty + ui->spinBox_2->value());
}

void Dialog::on_btnDer_clicked()
{
    trasladar(tx + ui->spinBox->value(), 0);
}

void Dialog::on_btnAbajo_clicked()
{
    trasladar(0, ty - ui->spinBox_2->value());
}

// Reiniciar
void Dialog::on_pushButton_clicked()
{
    timer1->stop();
    timer2->stop();

    // Asignamos los puntos guardados en figaux a la fig que está manipulando
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
                Fig[i][j] = FigAux[i][j];
                Fig2[i][j] = FigAux2[i][j];
                Fig3[i][j] = FigAux3[i][j];
                Fig4[i][j] = FigAux4[i][j];
                Fig5[i][j] = FigAux5[i][j];
                Fig6[i][j] = FigAux6[i][j];
                Fig7[i][j] = FigAux7[i][j];
                Fig8[i][j] = FigAux8[i][j];
                Fig9[i][j] = FigAux9[i][j];
                Fig10[i][j] = FigAux10[i][j];
                Fig11[i][j] = FigAux11[i][j];
                Fig12[i][j] = FigAux12[i][j];
                Fig13[i][j] = FigAux13[i][j];
                Fig14[i][j] = FigAux14[i][j];
        }
    }
    tx = ty = 0;
    update();
}

void Dialog::on_pushButton_2_clicked()
{
    double sX = ui->doubleSpinBox->value();
    double sY = ui->doubleSpinBox_2->value();
    escalar(sX, sY);
}

void Dialog::on_doubleSpinBox_textChanged(const QString &arg1)
{

}

void Dialog::on_verticalSlider_sliderMoved(int position)
{
    asignarFigura();
    dibujoMapeado = true;
    repaint();
}

void Dialog::on_pushButton_3_clicked()
{
    double sX = ui->doubleSpinBox->value();
    double sY = ui->doubleSpinBox_2->value();
    int pfx = int(ui->doubleSpinBox_pfx->value());
    int pfy = int(ui->doubleSpinBox_pfy->value());

    escalarPuntoFijo(sX,sY,pfx,pfy);
}

void Dialog::on_dial_angulo_sliderMoved(int position)
{
    rotar(this->ui->dial_angulo->value());
}

void Dialog::on_pushButton_4_clicked()
{
    timer1->start();
    timer2->stop();
}

void Dialog::on_pushButton_5_clicked()
{
    timer1->stop();
    timer2->start();
}
void Dialog::rotarAnimacion1(){
    static int angulo = 0;
    static int cont = 0;

    if(cont <= 8){
        //Empieza en 45 grados
        angulo = 45;

        if(cont == 8){
            angulo = 0;
            cont = 0;
        }

        //Usar el valor de los Spinner
        double pfx = 20;
        double pfy = 30;

        rotar(angulo);+
        cont++;
    }
}
void Dialog::rotarAnimacion2(){
    static bool dir = true;
    static int angulo = 0;
    static int cont =0;

    if(cont <= 9 && dir == true){
        angulo = 45;
        double pfx = 0;
        double pfy = 0;
        rotar(angulo);
        cont ++;
        if(cont == 9){
            angulo = 0;
            cont = 0;
            dir = false;
        }
    }
    if(!dir){
        angulo = -45;
        double pfx = 10;
        double pfy = 10;
        rotar(angulo);
        cont++;
        if(cont == 9){
            angulo = 0;
            cont = 0;
            dir = true;
        }
    }
}


