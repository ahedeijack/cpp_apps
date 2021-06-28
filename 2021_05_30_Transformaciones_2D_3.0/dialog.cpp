#include "dialog.h"
#include "ui_dialog.h"

#include <QTimer>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    asignarFigura();


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    canvas = new QPainter(this);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(rotarAnimacion()));

    dibujarFiguraMapeada();

    canvas->end();
}

void Dialog::asignarFigura()
{
    /*Fig[0][0] = 10;  Fig[0][1] = 10;  Fig[0][2] = 1;
    Fig[1][0] = 30; Fig[1][1] = 10; Fig[1][2] = 1;
    Fig[2][0] = 10; Fig[2][1] = 30;  Fig[2][2] = 1;
    Fig[3][0] = 10;  Fig[3][1] = 10; Fig[3][2] = 1;*/

    /* Avión */
    Fig[0][0] = 1; Fig[0][1] = 6;Fig[0][2] = 1;
    Fig[1][0] = 3; Fig[1][1] = 7;Fig[1][2] = 1;
    Fig[2][0] = 4; Fig[2][1] = 8;Fig[2][2] = 1;
    Fig[3][0] = 6; Fig[3][1] = 9;Fig[3][2] = 1;
    Fig[4][0] = 19; Fig[4][1] = 9;Fig[4][2] = 1;
    Fig[5][0] = 21; Fig[5][1] = 11;Fig[5][2] = 1;
    Fig[6][0] = 23; Fig[6][1] = 11;Fig[6][2] = 1;
    Fig[7][0] = 22; Fig[7][1] = 10;Fig[7][2] = 1;
    Fig[8][0] = 21; Fig[8][1] = 8;Fig[8][2] = 1;
    Fig[9][0] = 15; Fig[9][1] = 5;Fig[9][2] = 1;
    Fig[10][0] = 14; Fig[10][1] = 5;Fig[10][2] = 1;
    Fig[11][0] = 17; Fig[11][1] = 1;Fig[11][2] = 1;
    Fig[12][0] = 15; Fig[12][1] = 1;Fig[12][2] = 1;
    Fig[13][0] = 9; Fig[13][1] = 6;Fig[13][2] = 1;
    Fig[14][0] = 17; Fig[14][1] = 6;Fig[14][2] = 1;
    Fig[15][0] = 1; Fig[15][1] = 6;Fig[15][2] = 1;
    Fig[16][0] = 3; Fig[16][1] = 5;Fig[16][2] = 1;
    Fig[17][0] = 10; Fig[17][1] = 5;Fig[17][2] = 1;
    Fig[18][0] = 9; Fig[18][1] = 6;Fig[18][2] = 1;
    Fig[19][0] = 13; Fig[19][1] = 6;Fig[19][2] = 1;
    Fig[20][0] = 14; Fig[20][1] = 5;Fig[20][2] = 1;
    Fig[21][0] = 13; Fig[21][1] = 6;Fig[21][2] = 1;
    Fig[22][0] = 1; Fig[22][1] = 6;Fig[22][2] = 1;


    //Respaldar la figura original para resetearla cuando sea necesario
    for(int r = 0; r < 22; r++)
        for(int c = 0; c < 3; c++)
            FigAux[r][c] = Fig[r][c];

    //ancho = this->size().width() - ui->widget->size().width();
    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho / 2;
    centroY = this->size().height() / 2;

    tx = ty = 0;
}

void Dialog::dibujarFiguraMapeada()
{
    Mapeo dibujo;

    canvas->drawLine(0, size().height()/2, ancho, size().height()/2);
    canvas->drawLine(ancho/2,0,ancho/2,size().height());

    //Colocacion del puerto en el centro de la forma donde se esta dibujando
    dibujo.ventana(ancho / 2, 0, ancho, size().height()/2);
    dibujo.puerto(ancho/2, 0, ancho, size().height()/2);

    //En el rectangulo el ancho y el alto

    canvas->setPen(QColor(0,0,0));

    int L = centroX;
    int M = centroY; //YPVMIN + YPVMAX

    int x1, y1, x2, y2;

    //Calcular los extremos de la linea
    //dibujo.mapear(Fig[0][0], Fig[0][1], x1, y1, L, M);
    //dibujo.mapear(Fig[2][0], Fig[2][1], x2, y2, L, M);

    //canvas->drawLine(x1, y1, x2, y2);

    for(int i=0; i<22; i++)
    {
        dibujo.mapear(Fig[i][0], Fig[i][1], x1, y1, L, M);
        dibujo.mapear(Fig[i+1][0], Fig[i+1][1], x2, y2, L, M);

        canvas->drawLine(x1, y1, x2, y2);
    }
}

void Dialog::trasladar(int tX, int tY)
{
    Matrix fig, id, figres; //OBJETOS ESTATICOS
    fig.Inicializa(22,3);
    figres.Inicializa(22,3);
    id.Inicializa(3,3);
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
        }
    }

    //Aplicar traslacion
    figres.traslacion(fig, id, tX, tY);

    //Guardamos los puntos transformados en la fig original
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            Fig[i][j] = figres.GET(i,j);
        }
    }
    repaint();
}

void Dialog::escalar(float sX, float sY)
{
    Matrix fig,id,fres;
    fig.Inicializa(23,3);
    id.Inicializa(3,3);
    fres.Inicializa(23,3);
    for(int i=0; i<fig.numRen(); i++)
        for(int j=0; j<fig.numCol(); j++)
            fig.SET(i,j,Fig[i][j]);

    fres.escalacion(fig,id,sX,sY);

    for(int i = 0; i < fres.numRen(); i++)
        for(int j = 0; j < fres.numCol();j++)
            Fig[i][j]= fres.GET(i,j);
    repaint();
}

void Dialog::escalarPuntoFijo(float sX, float sY, int pfx, int pfy)
{
    Matrix fig,id,fres;
    fig.Inicializa(23,3);
    id.Inicializa(3,3);
    fres.Inicializa(23,3);
    for(int i=0; i<fig.numRen(); i++)
        for(int j=0; j<fig.numCol(); j++)
            fig.SET(i,j,Fig[i][j]);

    fres.escalacionPuntoFijo(fig,id,sX,sY,pfx,pfy);

    for(int i = 0; i < fres.numRen(); i++)
        for(int j = 0; j < fres.numCol();j++)
            Fig[i][j]= fres.GET(i,j);
    repaint();
}

void Dialog::rotar(int angulo)
{
    Matrix fig,id,fres;
    fig.Inicializa(23,3);
    id.Inicializa(3,3);
    fres.Inicializa(23,3);
    for(int i=0; i<fig.numRen(); i++)
        for(int j=0; j<fig.numCol(); j++)
            fig.SET(i,j,Fig[i][j]);

    fres.rotar(fig,id,angulo);

    for(int i = 0; i < fres.numRen(); i++)
        for(int j = 0; j < fres.numCol();j++)
            Fig[i][j]= fres.GET(i,j);
    repaint();
}

void Dialog::rotarPuntoFijo(float angulo, float pfx, float pfy)
{
    Matrix fig,id,fres;
    fig.Inicializa(23,3);
    id.Inicializa(3,3);
    fres.Inicializa(23,3);
    for(int i=0; i<fig.numRen(); i++)
        for(int j=0; j<fig.numCol(); j++)
            fig.SET(i,j,Fig[i][j]);

    fres.rotacionPuntoFijo(fig,id,angulo, pfx, pfy);

    for(int i = 0; i < fres.numRen(); i++)
        for(int j = 0; j < fres.numCol();j++)
            Fig[i][j]= fres.GET(i,j);
    repaint();
}


void Dialog::rotarAnimacion()
{
    static int angulo = 0;
    static int cont = 0;

    if(cont <= 8)
    {
        angulo = 45;
        if(cont == 8)
        {
            angulo = 0;
            cont = 0;
        }
        double pfx = 20; //USAR EL VALOR DE LOS SPINBOX
        double pfy = 30;
        rotarPuntoFijo(angulo,pfx,pfy);
        cont++;
    }
}

void Dialog::rotarAnimacion2()
{
    //ROTACION CON ANGULO +, ES EN SENTIDO CONTRARIO DE LAS MANECILLAS DEL RELOJ
    //ROTACION CON ANGULO -, ES EN SENTIDO CONTRARIO DE LAS MANECILLAS DEL RELOJ
    static bool dir = true;
    static int angulo = 0;
    static int cont = 0;
    if(cont <= 9 && dir == true)
    {
        angulo = 45;
        double pfx = 10;
        double pfy = 10;
        rotarPuntoFijo(angulo, pfx, pfy);
        cont++;
        if(cont == 9)
        {
            angulo = 0;
            cont = 0;
            dir = false;
        }
    }
    if(!dir)
    {
        angulo = -45;
        double pfx = 10;
        double pfy = 10;
        rotarPuntoFijo(angulo, pfx, pfy);
        cont++;
        if(cont == 9)
        {
            angulo = 0;
            cont = 0;
            dir = true;
        }
    }
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

//boton reiniciar
void Dialog::on_pushButton_clicked()
{//asigna los puntos guardados en la fig aux a la fig que se esta manipulando
    for(int i = 0; i<23; i++){
        for(int j=0; j<3; j++)
            Fig[i][j] = FigAux[i][j];
    }
    tx = ty = 0;
    update();
}

void Dialog::on_pushButton_2_clicked()
{
    double sX = ui->spinBoxSx->value();
    double sY = ui->spinBoxSy->value();
    escalar(sX,sY);
}

void Dialog::on_pushButton_3_clicked()
{
    double sX = ui->spinBoxSx->value();
    double sY = ui->spinBoxSy->value();
    int pfx = int(ui->spinBoxSx->value());
    int pfy = int(ui->spinBoxSy->value());
    escalarPuntoFijo(sX,sY,pfx,pfy);
}

void Dialog::on_pushButton_4_clicked()
{
    double angulo = ui->spinBoxRotar->value();
    rotar(angulo);
}

void Dialog::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_W)
        ui->btnArriba->clicked();
    if(evento->key() == Qt::Key_D)
        ui->btnDer->clicked();
    if(evento->key() == Qt::Key_S)
        ui->btnAbajo->clicked();
    if(evento->key() == Qt::Key_A)
        ui->btnIzq->clicked();
    if(evento->key() == Qt::Key_E)
        ui->pushButton_2->clicked();
    if(evento->key() == Qt::Key_P)
        ui->pushButton_3->clicked();
    if(evento->key() == Qt::Key_R)
        ui->pushButton_4->clicked();
    if( evento->key() == Qt::Key_X )
        ui->pushButton_6->clicked();
}

void Dialog::on_pushButton_6_clicked()
{
//    timer->stop();
    timer->start();
    rotarAnimacion();
}

