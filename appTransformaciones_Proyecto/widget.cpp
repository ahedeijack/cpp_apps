#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    asignarFigura();
    zoom1 = zoom2 = 250;

    timer1 = new QTimer();
    timer2 = new QTimer();

    connect(timer1, SIGNAL(timeout()),this, SLOT(rotarAnimacion1()));
    connect(timer2, SIGNAL(timeout()),this, SLOT(rotarAnimacion2()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event){
    Q_UNUSED(event)
    dibujarFiguraMapeada();
}

void Widget::keyPressEvent(QKeyEvent *event){
    if(event->key() ==  Qt::Key_W)
        trasladar(0, tY+10);
    if(event->key() == Qt::Key_S)
        trasladar(0, tY-10);
    if(event->key() == Qt::Key_D)
        trasladar(tX+10,0);
    if(event->key() == Qt::Key_A)
        trasladar(tX-10,0);
}

void Widget::asignarFigura(){
    //Cuerpo
    Fig[0][0] = 60;  Fig[0][1] = 40;  Fig[0][2] = 1;
    Fig[1][0] = 40;  Fig[1][1] = 60;  Fig[1][2] = 1;
    Fig[2][0] = 40;  Fig[2][1] = 80;  Fig[2][2] = 1;
    Fig[3][0] = 60;  Fig[3][1] = 100;  Fig[3][2] = 1;
    Fig[4][0] = 40;  Fig[4][1] = 120;  Fig[4][2] = 1;
    Fig[5][0] = 40;  Fig[5][1] = 140;  Fig[5][2] = 1;
    Fig[6][0] = 60;  Fig[6][1] = 160;  Fig[6][2] = 1;
    Fig[7][0] = 80;  Fig[7][1] = 160;  Fig[7][2] = 1;
    Fig[8][0] = 100;  Fig[8][1] = 140;  Fig[8][2] = 1;
    Fig[9][0] = 100;  Fig[9][1] = 120;  Fig[9][2] = 1;
    Fig[10][0] = 80;  Fig[10][1] = 100;  Fig[10][2] = 1;
    Fig[11][0] = 140;  Fig[11][1] = 80;  Fig[11][2] = 1;
    Fig[12][0] = 120;  Fig[12][1] = 40;  Fig[12][2] = 1;

    Fig[13][0] = 60;  Fig[13][1] = 40;  Fig[13][2] = 1;

    //Pico
    Fig1[0][0] = 40;  Fig1[0][1] = 120;  Fig1[0][2] = 1;
    Fig1[1][0] = 40;  Fig1[1][1] = 140;  Fig1[1][2] = 1;
    Fig1[2][0] = 20;  Fig1[2][1] = 120;  Fig1[2][2] = 1;

    Fig1[3][0] = 40;  Fig1[3][1] = 120;  Fig1[3][2] = 1;

    //Cola
    Fig2[0][0] = 140;  Fig2[0][1] = 80;  Fig2[0][2] = 1;
    Fig2[1][0] = 160;  Fig2[1][1] = 100;  Fig2[1][2] = 1;

    //Pata Der.
    Fig3[0][0] = 100;  Fig3[0][1] = 40;  Fig3[0][2] = 1;
    Fig3[1][0] = 100;  Fig3[1][1] = 20;  Fig3[1][2] = 1;
    Fig3[2][0] = 120;  Fig3[2][1] = 20;  Fig3[2][2] = 1;

    Fig3[3][0] = 100;  Fig3[3][1] = 40;  Fig3[3][2] = 1;

    //Pata Izq.
    Fig4[0][0] = 60;  Fig4[0][1] = 40;  Fig4[0][2] = 1;
    Fig4[1][0] = 60;  Fig4[1][1] = 20;  Fig4[1][2] = 1;
    Fig4[2][0] = 40;  Fig4[2][1] = 20;  Fig4[2][2] = 1;

    Fig4[3][0] = 60;  Fig4[3][1] = 40;  Fig4[3][2] = 1;

    //Ojos
    Fig5[0][0] = 60;  Fig5[0][1] = 140;  Fig5[0][2] = 1;
    Fig5[1][0] = 60;  Fig5[1][1] = 120;  Fig5[1][2] = 1;
    Fig5[2][0] = 80;  Fig5[2][1] = 120;  Fig5[2][2] = 1;
    Fig5[3][0] = 80;  Fig5[3][1] = 140;  Fig5[3][2] = 1;

    Fig5[4][0] = 60;  Fig5[4][1] = 140;  Fig5[4][2] = 1;

    //Ala
    Fig6[0][0] = 80;  Fig6[0][1] = 60;  Fig6[0][2] = 1;
    Fig6[1][0] = 100;  Fig6[1][1] = 60;  Fig6[1][2] = 1;
    Fig6[2][0] = 120;  Fig6[2][1] = 80;  Fig6[2][2] = 1;

    Fig6[3][0] = 80;  Fig6[3][1] = 60;  Fig6[3][2] = 1;

    for ( int r = 0; r < 14; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux[r][c] = Fig[r][c];

    for ( int r = 0; r < 5; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux5[r][c] = Fig5[r][c];

    for ( int r = 0; r < 2; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux2[r][c] = Fig2[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux1[r][c] = Fig1[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux3[r][c] = Fig3[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux4[r][c] = Fig4[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            FigAux6[r][c] = Fig6[r][c];


    ancho  = this->size().width() - ui->widget->size().width();
    centroX = ancho/2;
    centroY = this->size().height()/2;
    tX = 0;
    tY = 0;

}

void Widget::dibujarFiguraMapeada(){
    QPainter *canvas = new QPainter(this);
    canvas->setRenderHints(QPainter::Antialiasing, true);

    canvas->drawLine(0, centroY, ancho, centroY);

    canvas->drawLine(ancho/2, 0, ancho/2, ui->widget->height());

    mapeo dibujo;

    dibujo.ventana(0, 0, zoom1, zoom2);

    dibujo.puerto(ancho/2, 0, ancho, centroY);

    int L = 0;
    int M = centroY;

    int x1, y1, x2, y2;
    canvas->setPen(QColor(255, 0, 0));

    dibujo.mapear(Fig[0][0], Fig[0][1], x1, y1, L, M);
    dibujo.mapear(Fig[13][0], Fig[13][1], x2, y2, L, M);

    dibujo.mapear(Fig1[0][0], Fig1[0][1], x1, y1, L, M);
    dibujo.mapear(Fig1[3][0], Fig1[3][1], x2, y2, L, M);

    dibujo.mapear(Fig2[0][0], Fig2[0][1], x1, y1, L, M);
    dibujo.mapear(Fig2[1][0], Fig2[1][1], x2, y2, L, M);

    dibujo.mapear(Fig3[0][0], Fig3[0][1], x1, y1, L, M);
    dibujo.mapear(Fig3[3][0], Fig3[3][1], x2, y2, L, M);

    dibujo.mapear(Fig4[0][0], Fig4[0][1], x1, y1, L, M);
    dibujo.mapear(Fig4[3][0], Fig4[3][1], x2, y2, L, M);

    dibujo.mapear(Fig5[0][0], Fig5[0][1], x1, y1, L, M);
    dibujo.mapear(Fig5[4][0], Fig5[4][1], x2, y2, L, M);

    dibujo.mapear(Fig6[0][0], Fig6[0][1], x1, y1, L, M);
    dibujo.mapear(Fig6[3][0], Fig6[3][1], x2, y2, L, M);

    canvas->drawLine(x1, y1, x2, y2);

    for (int i = 0; i < 3; i++) {
        dibujo.mapear(Fig1[i][0], Fig1[i][1], x1, y1, L, M);
        dibujo.mapear(Fig1[i+1][0], Fig1[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 3; i++) {
        dibujo.mapear(Fig4[i][0], Fig4[i][1], x1, y1, L, M);
        dibujo.mapear(Fig4[i+1][0], Fig4[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 3; i++) {
        dibujo.mapear(Fig3[i][0], Fig3[i][1], x1, y1, L, M);
        dibujo.mapear(Fig3[i+1][0], Fig3[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 3; i++) {
        dibujo.mapear(Fig6[i][0], Fig6[i][1], x1, y1, L, M);
        dibujo.mapear(Fig6[i+1][0], Fig6[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 4; i++) {
        dibujo.mapear(Fig5[i][0], Fig5[i][1], x1, y1, L, M);
        dibujo.mapear(Fig5[i+1][0], Fig5[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 1; i++) {
        dibujo.mapear(Fig2[i][0], Fig2[i][1], x1, y1, L, M);
        dibujo.mapear(Fig2[i+1][0], Fig2[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 13; i++) {
        dibujo.mapear(Fig[i][0], Fig[i][1], x1, y1, L, M);
        dibujo.mapear(Fig[i+1][0], Fig[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    for (int i = 0; i < 3; i++) {
        dibujo.mapear(Fig6[i][0], Fig6[i][1], x1, y1, L, M);
        dibujo.mapear(Fig6[i+1][0], Fig6[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }

    canvas->end();
}

void Widget::trasladar(int tx, int ty){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.translacion(fig, id, tx, ty);
    fres1.translacion(fig1, id1, tx, ty);
    fres2.translacion(fig2, id2, tx, ty);
    fres3.translacion(fig3, id3, tx, ty);
    fres4.translacion(fig4, id4, tx, ty);
    fres5.translacion(fig5, id5, tx, ty);
    fres6.translacion(fig6, id6, tx, ty);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::escalar2D(int sx, int sy){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.escalacion(fig, id, sx, sy);
    fres1.escalacion(fig1, id1, sx, sy);
    fres2.escalacion(fig2, id2, sx, sy);
    fres3.escalacion(fig3, id3, sx, sy);
    fres4.escalacion(fig4, id4, sx, sy);
    fres5.escalacion(fig5, id5, sx, sy);
    fres6.escalacion(fig6, id6, sx, sy);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::escalarPuntoFijo(int pfx, int pfy, int sx, int sy)
{
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.escalacionPuntoFijo(fig, id, pfx, pfy, sx, sy);
    fres1.escalacionPuntoFijo(fig1, id1, pfx, pfy, sx, sy);
    fres2.escalacionPuntoFijo(fig2, id2, pfx, pfy, sx, sy);
    fres3.escalacionPuntoFijo(fig3, id3, pfx, pfy, sx, sy);
    fres4.escalacionPuntoFijo(fig4, id4, pfx, pfy, sx, sy);
    fres5.escalacionPuntoFijo(fig5, id5, pfx, pfy, sx, sy);
    fres6.escalacionPuntoFijo(fig6, id6, pfx, pfy, sx, sy);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::rotacion(double grad){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.rotacion(fig, id, grad);
    fres1.rotacion(fig1, id1, grad);
    fres2.rotacion(fig2, id2, grad);
    fres3.rotacion(fig3, id3, grad);
    fres4.rotacion(fig4, id4, grad);
    fres5.rotacion(fig5, id5, grad);
    fres6.rotacion(fig6, id6, grad);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::rotacionPuntoFijo(double grad, double xr, double yr)
{
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.rotacionPuntoFijo(fig, id, grad, xr, yr);
    fres1.rotacionPuntoFijo(fig1, id1, grad, xr, yr);
    fres2.rotacionPuntoFijo(fig2, id2, grad, xr, yr);
    fres3.rotacionPuntoFijo(fig3, id3, grad, xr, yr);
    fres4.rotacionPuntoFijo(fig4, id4, grad, xr, yr);
    fres5.rotacionPuntoFijo(fig5, id5, grad, xr, yr);
    fres6.rotacionPuntoFijo(fig6, id6, grad, xr, yr);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::reflexion2DEjeX()
{
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.reflexion2DEjeX(fig, id);
    fres1.reflexion2DEjeX(fig1, id1);
    fres2.reflexion2DEjeX(fig2, id2);
    fres3.reflexion2DEjeX(fig3, id3);
    fres4.reflexion2DEjeX(fig4, id4);
    fres5.reflexion2DEjeX(fig5, id5);
    fres6.reflexion2DEjeX(fig6, id6);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::reflexion2DEjeY(){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.reflexion2DEjeY(fig, id);
    fres1.reflexion2DEjeY(fig1, id1);
    fres2.reflexion2DEjeY(fig2, id2);
    fres3.reflexion2DEjeY(fig3, id3);
    fres4.reflexion2DEjeY(fig4, id4);
    fres5.reflexion2DEjeY(fig5, id5);
    fres6.reflexion2DEjeY(fig6, id6);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::reflexion2DCoordenado(){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.reflexion2DCoordenado(fig, id);
    fres1.reflexion2DCoordenado(fig1, id1);
    fres2.reflexion2DCoordenado(fig2, id2);
    fres3.reflexion2DCoordenado(fig3, id3);
    fres4.reflexion2DCoordenado(fig4, id4);
    fres5.reflexion2DCoordenado(fig5, id5);
    fres6.reflexion2DCoordenado(fig6, id6);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::reflexion2DRectaYX(){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.reflexion2DRectaYX(fig, id);
    fres1.reflexion2DRectaYX(fig1, id1);
    fres2.reflexion2DRectaYX(fig2, id2);
    fres3.reflexion2DRectaYX(fig3, id3);
    fres4.reflexion2DRectaYX(fig4, id4);
    fres5.reflexion2DRectaYX(fig5, id5);
    fres6.reflexion2DRectaYX(fig6, id6);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::reflexion2DRectaYnX(){
    Matrix fig, fig1, fig2, fig3, fig4, fig5, fig6;
    Matrix id, id1, id2, id3, id4, id5, id6;
    Matrix fres, fres1, fres2, fres3, fres4, fres5, fres6;

    fig.Inicializa(14,3);
    fres.Inicializa(14,3);
    id.Inicializa(3,3);

    fig1.Inicializa(4,3);
    fres1.Inicializa(4,3);
    id1.Inicializa(3,3);

    fig2.Inicializa(2,3);
    fres2.Inicializa(2,3);
    id2.Inicializa(3,3);

    fig3.Inicializa(4,3);
    fres3.Inicializa(4,3);
    id3.Inicializa(3,3);

    fig4.Inicializa(4,3);
    fres4.Inicializa(4,3);
    id4.Inicializa(3,3);

    fig5.Inicializa(5,3);
    fres5.Inicializa(5,3);
    id5.Inicializa(3,3);

    fig6.Inicializa(4,3);
    fres6.Inicializa(4,3);
    id6.Inicializa(3,3);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            fig.SET(r, c, Fig[r][c]);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            fig5.SET(r, c, Fig5[r][c]);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            fig2.SET(r, c, Fig2[r][c]);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            fig1.SET(r, c, Fig1[r][c]);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            fig3.SET(r, c, Fig3[r][c]);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            fig4.SET(r, c, Fig4[r][c]);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            fig6.SET(r, c, Fig6[r][c]);

    fres.reflexion2DRectaYnX(fig, id);
    fres1.reflexion2DRectaYnX(fig1, id1);
    fres2.reflexion2DRectaYnX(fig2, id2);
    fres3.reflexion2DRectaYnX(fig3, id3);
    fres4.reflexion2DRectaYnX(fig4, id4);
    fres5.reflexion2DRectaYnX(fig5, id5);
    fres6.reflexion2DRectaYnX(fig6, id6);

    for ( int r = 0; r < fig.numRen(); r++)
        for ( int c = 0; c < fig.numCol(); c++ )
            Fig[r][c] = fres.GET(r,c);

    for ( int r = 0; r < fig5.numRen(); r++)
        for ( int c = 0; c < fig5.numRen(); c++ )
            Fig5[r][c] = fres5.GET(r,c);

    for ( int r = 0; r < fig2.numRen(); r++)
        for ( int c = 0; c < fig2.numCol(); c++ )
            Fig2[r][c] = fres2.GET(r,c);

    for ( int r = 0; r < fig1.numRen(); r++)
        for ( int c = 0; c < fig1.numCol(); c++ )
            Fig1[r][c] = fres1.GET(r,c);

    for ( int r = 0; r < fig3.numRen(); r++)
        for ( int c = 0; c < fig3.numCol(); c++ )
            Fig3[r][c] = fres3.GET(r,c);

    for ( int r = 0; r < fig4.numRen(); r++)
        for ( int c = 0; c < fig4.numCol(); c++ )
            Fig4[r][c] = fres4.GET(r,c);

    for ( int r = 0; r < fig6.numRen(); r++)
        for ( int c = 0; c < fig6.numCol(); c++ )
            Fig6[r][c] = fres6.GET(r,c);
    update();
}

void Widget::rotarAnimacion1(){
    static int angulo1 = 0;
    static int cont = 0;

    if(cont <= 8){
        angulo1 = 45;
        if(cont == 8){
            angulo1 = 0;
            cont = 0;

            timer1->stop();
        }
    }

    double pfx = 20;
    double pfy = 30;
    rotacionPuntoFijo(angulo1, pfx, pfy);
    cont++;
}

void Widget::rotarAnimacion2(){
    static bool dir = true;
    static int angulo1 = 0;
    static int cont = 0;

    if(cont <= 9 && dir == true){
        angulo1 = 45;
        double pfx = 125;
        double pfy = 125;
        rotacionPuntoFijo(angulo1, pfx, pfy);
        cont++;
        if(cont == 9){
            angulo1 = 0;
            cont = 0;

            //timer1->stop();
            dir = false;
        }
    }
    if(!dir){
        angulo1 = -45;
        double pfx = 125;
        double pfy = 125;
        rotacionPuntoFijo(angulo1, pfx, pfy);
        cont++;
        if(cont == 9){
            angulo1 = 0;
            cont = 0;
            dir = true;
        }
    }
}

void Widget::on_pushButton_7_clicked()
{
    trasladar(ui->spinBox->value(), ui->spinBox_2->value());
}

void Widget::on_pushButton_6_clicked()
{
    escalar2D(ui->spinBox_3->value(), ui->spinBox_4->value());
}

void Widget::on_pushButton_10_clicked()
{
    escalarPuntoFijo(ui->spinBox_7->value(), ui->spinBox_8->value(), ui->spinBox_3->value(), ui->spinBox_4->value());
}

void Widget::on_pushButton_11_clicked()
{
    rotacion(ui->doubleSpinBox->value());
}

void Widget::on_pushButton_12_clicked()
{
    rotacionPuntoFijo(ui->doubleSpinBox->value(), ui->doubleSpinBox_2->value(), ui->doubleSpinBox_3->value());
}

void Widget::on_radioButton_clicked()
{
    reflexion2DEjeX();
}

void Widget::on_radioButton_2_clicked()
{
    reflexion2DEjeY();
}

void Widget::on_radioButton_3_clicked()
{
    reflexion2DCoordenado();
}

void Widget::on_radioButton_4_clicked()
{
    reflexion2DRectaYX();
}

void Widget::on_radioButton_5_clicked()
{
    reflexion2DRectaYnX();
}

void Widget::on_pushButton_2_clicked()
{
    trasladar(0, tY+10);
}

void Widget::on_pushButton_4_clicked()
{
    trasladar(tX-10,0);
}

void Widget::on_pushButton_3_clicked()
{
    trasladar(0, tY-10);
}

void Widget::on_pushButton_5_clicked()
{
    trasladar(tX+10,0);
}

void Widget::on_pushButton_clicked()
{
    for ( int r = 0; r < 14; r++)
        for ( int c = 0; c < 3; c++ )
             Fig[r][c] = FigAux[r][c];

    for ( int r = 0; r < 5; r++)
        for ( int c = 0; c < 3; c++ )
             Fig5[r][c] = FigAux5[r][c];

    for ( int r = 0; r < 2; r++)
        for ( int c = 0; c < 3; c++ )
            Fig2[r][c] = FigAux2[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            Fig1[r][c] = FigAux1[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            Fig3[r][c] = FigAux3[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            Fig4[r][c]= FigAux4[r][c];

    for ( int r = 0; r < 4; r++)
        for ( int c = 0; c < 3; c++ )
            Fig6[r][c] = FigAux6[r][c];
    tX = tY = 0;
    repaint();
}

/*void Widget::on_pushButton_8_clicked()
{
    timer2->stop();
    timer1->start(50);
}

void Widget::on_pushButton_9_clicked()
{
    timer1->stop();
    timer2->start(50);
}
*/
