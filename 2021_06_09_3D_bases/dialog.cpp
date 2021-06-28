#include "dialog.h"
#include "ui_dialog.h"
#include <QtMath>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    alpha = 63.4; //45
    phi = 30;     //45
//ASIGNAR LOS VALORES DE LOS DIAL

    tx = ty = tz = 0;
    asignaCubo();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *evento)
{
    Q_UNUSED(evento)
    inicializaPuerto();
    proyeccionCubo();
}

void Dialog::asignaCubo()
{
    Puntos3D cuboBase[]={{100,50,0,0},      /*1*/
                         {200,50,0,1},      /*2*/
                         {200,150,0,1},      /*3*/
                         {100,150,0,1},      /*4*/
                         {100,50,0,1},      /*5*/
                         {100,50,100,1},      /*6*/
                         {200,50,100,1},      /*7*/
                         {200,150,100,1},      /*8*/
                         {200,150,0,1},      /*9*/
                         {200,50,0,0},      /*10*/
                         {200,50,200,1},      /*11*/
                         {100,50,100,0},      /*12*/
                         {100,150,100,1},      /*13*/
                         {100,150,0,1},      /*14*/
                         {100,150,100,0},      /*15*/
                         {200,150,100,1}      /*16*/
                        };

    cubo = new Puntos3D[16];
    for(int i=0; i<16; i++)
        cubo[i] = cuboBase[i];

    inicializaPuerto();
    ancho = this->size().width() - ui->widget->size().width();
}

void Dialog::proyeccionCubo()
{
    canvas = new QPainter(this);
    canvas->setPen(QPen(Qt::blue,3)); //Para los ejes

    //Eje X
    canvas->drawLine(0, this->size().height()-1, ancho, size().height()-1);

    //Eje Y
    canvas->drawLine(1,0,1,size().height());

    //Eje Z
    int zx1 = 0;
    int zy1 = 0;

    int zx2 = ancho * cos(radianes(phi));
    int zy2 = ancho * sin(radianes(phi));

    int x1, y1, x2, y2;
    mapeo.mapear(zx1,zy1,x1,y1,L,M);
    mapeo.mapear(zx2,zy2,x2,y2,L,M);

    //Dibujar el eje Z
    canvas->drawLine(x1,y1,x2,y2);


    for (int i = 0; i < 16 ; i++ ) {
        if(cubo[i].opcion){ //0 = MoveTo. //1 = LineTo
            /*lineTo3D(cubo[i].x,
                     cubo[i].y,
                     cubo[i].z,
                     radianes(alpha),
                     qDegreesToRadians(phi),
                     i);
                     */

            lineTo3D(cubo[i].x + tx,
                     cubo[i].y + ty,
                     cubo[i].z + tz,
                     radianes(alpha),
                     qDegreesToRadians(phi),
                     i);
        } else{
            /*moveTo3D(cubo[i].x,
                     cubo[i].y,
                     cubo[i].z,
                     radianes(alpha),
                     qDegreesToRadians(phi),
                     i);
            */
            moveTo3D(cubo[i].x + tx,
                     cubo[i].y + ty,
                     cubo[i].z + tz,
                     radianes(alpha),
                     qDegreesToRadians(phi),
                     i);
}
    }

    canvas->setPen(QPen(QColor(255,100,0), 2));
    dibujarCubo();

    canvas->end();
}

void Dialog::dibujarCubo()
{
        for(int i = 0; i<15; i++){
            canvas->drawLine(points[i].x(),
                             points[i].y(),
                             points[i+1].x(),
                             points[i+1].y());
        }
}

void Dialog::inicializaPuerto()
{
    mapeo.ventana(0,0,size().width()-ancho, size().height());
    mapeo.puerto(0,0,size().width()-ancho, size().height());
    L = 0;
    M = size().height();
}

void Dialog::lineTo3D(int x, int y, int z, float alpha, float phi, int i){
    int xp, yp;
    int longitud;
    float tanalpha;
    if((tanalpha = tan(alpha)) != 0){
        longitud = (int) (z/tanalpha);
    } else {
        longitud = 0;
    }
    xp = x + longitud * cos(phi);
    yp = y + longitud * sin(phi);

    //Se mapean los valore proyectados.
    int x1, y1;
    mapeo.mapear(xp, yp, x1, y1, L,M );

    //Se asignan uno a uno, los vertices del cubo.

    points[i].setX(x1);
    points[i].setY(y1);
}

void Dialog::moveTo3D(int x, int y, int z, float alpha, float phi, int i){
    int xp, yp;
    int longitud;
    float tanalpha;
    if((tanalpha = tan(alpha)) != 0){
        longitud = (int) (z/tanalpha);
    } else {
        longitud = 0;
    }
    xp = x + longitud * cos(phi);
    yp = y + longitud * sin(phi);

    //Se mapean los valore proyectados.
    int x1, y1;
    mapeo.mapear(xp, yp, x1, y1, L,M );

    //Se asignan uno a uno, los vertices del cubo.

    points[i].setX(x1);
    points[i].setY(y1);
}

void Dialog::on_dial_sliderMoved(int position)
{
    alpha = position;
    inicializaPuerto();
    update();
}

void Dialog::on_dial_2_valueChanged(int value)
{
    phi = value;
    inicializaPuerto();
    repaint();
}

void Dialog::on_pushButton_2_clicked()
{
    tx += 5;
    repaint();
}

void Dialog::on_pushButton_clicked()
{
    tx -= 5;
    repaint();
}

void Dialog::on_pushButton_4_clicked()
{
    ty += 5;
    repaint();
}

void Dialog::on_pushButton_3_clicked()
{
    ty -= 5;
    repaint();
}

void Dialog::on_pushButton_6_clicked()
{
    tz -= 5;
    repaint();
}

void Dialog::on_pushButton_5_clicked()
{
    tz += 5;
    repaint();
}
