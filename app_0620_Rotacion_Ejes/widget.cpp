#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget){
    ui->setupUi(this);

    alpha = 63.4;
    phi = 30.0;

    Tx = Ty = Tz = 0;
    Sx = Sy = Sz = 1;
    PFX = 150;
    PFY = 100;
    PFZ = 50;
    angulo = 0;

    asignarCubo();
}

Widget::~Widget(){
    delete ui;
}

void Widget::paintEvent(QPaintEvent *evt){
    Q_UNUSED(evt);
    inicializarPuerto();
    proyeccionCubo();
}

void Widget::asignarCubo(){
    Puntos3D cuboBase[] = {{100,50,0,0},{200,50,0,1},{200,150,0,1},
                            {100,150,0,1},{100,50,0,1},{100,50,100,1},
                            {200,50,100,1},{200,150,100,1},{200,150,0,1},
                            {200,50,0,0},{200,50,100,1},{100,50,100,0},
                            {100,150,100,1},{100,150,0,1},{100,150,100,0},
                            {200,150,100,1}};
    cubo = new Puntos3D[16];
    for(int i = 0; i < 16; i++){
        cubo[i] = cuboBase[i];
    }
    inicializarPuerto();

    ancho = this->size().width() - ui->frame->size().width();
}

void Widget::proyeccionCubo(){
    canvas = new QPainter(this);
    canvas->setPen(QPen(Qt::black,3));

    //EJE X
    canvas->drawLine(0,size().height()-1,ancho,size().height()-1);
    //EJE Y
    canvas->drawLine(1,0,1,size().height());
    //EJE Z
    int zx1 = 0;
    int zy1 = 0;

    int zx2 = ancho * cos(radianes(phi));
    int zy2 = ancho * sin(qDegreesToRadians(phi));

    int x1, x2, y1, y2;
    //mapearlos valores de z
    mapeo.mapear(zx1, zy1, x1, &y1, L, M);
    mapeo.mapear(zx2, zy2, x2, &y2, L, M);
    canvas->drawLine(x1,y1,x2,y2);

    int opc;
    if(ui->radioButtonX->isChecked()){
        opc = 1;
    }else if(ui->radioButtonY->isChecked()){
        opc = 2;
    }else{
        opc = 3;
    }

    switch(opc){
        case 1:{
            //PROYECTAR CUBO
            for(int i = 0; i < 16; i++){

                escX = PFX +(cubo[i].x-PFX)*Sx;
                escY = PFY +(cubo[i].y-PFY)*Sy;
                escZ = PFZ +(cubo[i].z-PFZ)*Sz;

                //0:MOVE, 1=LINE
                if(cubo[i].opcion){ // ==1)
                    //lineTo3D((cubo[i].x+Tx)*Sx-PFX, (cubo[i].y+Ty)*Sy-PFY, (cubo[i].z+Tz)*Sz-PFZ, radianes(alpha), qDegreesToRadians(phi), i);
                    //lineTo3D(escX+Tx, escY+Ty, escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                    lineTo3D(escX+Tx, (escY+Ty)*cos(angulo)+(cubo[i].z*sin(angulo)), (escZ+Tz*cos(angulo)-(cubo[i].y*sin(angulo))), radianes(alpha), qDegreesToRadians(phi), i);
                }else
                    //moveTo3D((cubo[i].x+Tx)*Sx-PFX, (cubo[i].y+Ty)*Sy-PFY, (cubo[i].z+Tz)*Sz-PFZ, radianes(alpha), qDegreesToRadians(phi), i);
                    //moveTo3D(escX+Tx, escY+Ty, escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                    moveTo3D(escX+Tx, (escY+Ty)*cos(angulo)+(cubo[i].z*sin(angulo)), (escZ+Tz*cos(angulo)-(cubo[i].y*sin(angulo))), radianes(alpha), qDegreesToRadians(phi), i);
            }
        }break;
        case 2:{
            //PROYECTAR CUBO
            for(int i = 0; i < 16; i++){

                escX = PFX +(cubo[i].x-PFX)*Sx;
                escY = PFY +(cubo[i].y-PFY)*Sy;
                escZ = PFZ +(cubo[i].z-PFZ)*Sz;

                //0:MOVE, 1=LINE
                if(cubo[i].opcion){ // ==1)
                    //lineTo3D((cubo[i].x+Tx)*Sx-PFX, (cubo[i].y+Ty)*Sy-PFY, (cubo[i].z+Tz)*Sz-PFZ, radianes(alpha), qDegreesToRadians(phi), i);
                    //lineTo3D(escX+Tx, escY+Ty, escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                    lineTo3D(escX+Tx*cos(angulo)-(cubo[i].z*sin(angulo)), escY+Ty, (escZ+Tz*cos(angulo)+(cubo[i].x*sin(angulo))), radianes(alpha), qDegreesToRadians(phi), i);
                }else
                    //moveTo3D((cubo[i].x+Tx)*Sx-PFX, (cubo[i].y+Ty)*Sy-PFY, (cubo[i].z+Tz)*Sz-PFZ, radianes(alpha), qDegreesToRadians(phi), i);
                    //moveTo3D(escX+Tx, escY+Ty, escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                    moveTo3D(escX+Tx*cos(angulo)-(cubo[i].z*sin(angulo)), escY+Ty, (escZ+Tz*cos(angulo)+(cubo[i].x*sin(angulo))), radianes(alpha), qDegreesToRadians(phi), i);
            }
        }break;
        case 3:{
            //PROYECTAR CUBO
            for(int i = 0; i < 16; i++){

                escX = PFX +(cubo[i].x-PFX)*Sx;
                escY = PFY +(cubo[i].y-PFY)*Sy;
                escZ = PFZ +(cubo[i].z-PFZ)*Sz;

                //0:MOVE, 1=LINE
                if(cubo[i].opcion){ // ==1)
                    //lineTo3D((cubo[i].x+Tx)*Sx-PFX, (cubo[i].y+Ty)*Sy-PFY, (cubo[i].z+Tz)*Sz-PFZ, radianes(alpha), qDegreesToRadians(phi), i);
                    //lineTo3D(escX+Tx, escY+Ty, escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                    lineTo3D(escX+Tx*cos(angulo)-(cubo[i].y*sin(angulo)), (escY+Ty)*cos(angulo)+(cubo[i].x*sin(angulo)), escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                }else
                    //moveTo3D((cubo[i].x+Tx)*Sx-PFX, (cubo[i].y+Ty)*Sy-PFY, (cubo[i].z+Tz)*Sz-PFZ, radianes(alpha), qDegreesToRadians(phi), i);
                    //moveTo3D(escX+Tx, escY+Ty, escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
                    moveTo3D(escX+Tx*cos(angulo)-(cubo[i].y*sin(angulo)), (escY+Ty)*cos(angulo)+(cubo[i].x*sin(angulo)), escZ+Tz, radianes(alpha), qDegreesToRadians(phi), i);
            }
        }break;
    }



    canvas->setPen(QPen(QColor(255,100,0),3));
    dibujarCubo();

    canvas->end();
}

//OBTENER LOS PUNTOS PROYECTADOS xp, yp
void Widget::dibujarCubo(){
    for(int i = 0; i < 15; i++){
        canvas->drawLine(points[i].x(), points[i].y(), points[i+1].x(), points[i+1].y());
    }
}

void Widget::inicializarPuerto(){
    //De donde viene
    mapeo.ventana(0,0,size().width()-ancho,size().height());
    //A donde va
    mapeo.puerto(0,0,size().width()-ancho,size().height());
    L = 0;
    M = size().height();
}

void Widget::lineTo3D(int x, int y, int z, float alpha, float phi, int i){
    int xp, yp;
    int longitud;
    float tanalpha;

    if((tanalpha = tan(alpha)) != 0){
        longitud = (int)(z/tanalpha);
    }else{
        longitud = 0;
    }

    xp = x + longitud * cos(phi);
    yp = y + longitud * sin(phi);

    //MAPEAR LOS VALORES PROYECTADOS
    int x1,y1;
    mapeo.mapear(xp,yp,x1,&y1,L,M);
    points[i].setX(x1);
    points[i].setY(y1);
}

void Widget::moveTo3D(int x, int y, int z, float alpha, float phi, int i){
    int xp, yp;
    int longitud;
    float tanalpha;

    if((tanalpha = tan(alpha)) != 0){
        longitud = (int)(z/tanalpha);
    }else{
        longitud = 0;
    }

    xp = x + longitud * cos(phi);
    yp = y + longitud * sin(phi);

    //MAPEAR LOS VALORES PROYECTADOS
    int x1,y1;
    mapeo.mapear(xp,yp,x1,&y1,L,M);
    points[i].setX(x1);
    points[i].setY(y1);
}

void Widget::keyPressedEvent(QKeyEvent *event){
    /*
    if(event->key() == Qt::Key_Left)
        Tx -= 5;
    if(event->key() == Qt::Key_Right)
        Tx += 5;
    if(event->key() == Qt::Key_Up)
        Ty += 5;
    if(event->key() == Qt::Key_Down)
        Ty -= 5;
    if(event->key() == Qt::Key_9)
        Tz += 5;
    if(event->key() == Qt::Key_0)
        Tz -= 5;

    repaint();
    */
    if(event->key() == Qt::Key_A)
         Tx -= 5;
    if(event->key() == Qt::Key_D)
         Tx += 5;
    if(event->key() == Qt::Key_W)
         Ty += 5;
    if(event->key() == Qt::Key_S)
         Ty -= 5;
    if(event->key() == Qt::Key_9)
         Tz += 5;
    if(event->key() == Qt::Key_0)
         Tz -= 5;

     repaint();
}

void Widget::on_dialAplha_valueChanged(int value){
    alpha = value;
    inicializarPuerto();
    update();
}

void Widget::on_dialPhi_sliderMoved(int position){
    phi = position;
    inicializarPuerto();
    repaint();
}

void Widget::on_pushButtonDerecha_clicked(){
    Tx = Tx +15;
    repaint();
}

void Widget::on_pushButtonIzquierda_clicked(){
    Tx = Tx -15;
    repaint();
}

void Widget::on_pushButtonArriba_clicked(){
    Ty = Ty +15;
    repaint();
}

void Widget::on_pushButtonAbajo_clicked(){
    Ty = Ty -15;
    repaint();
}

void Widget::on_pushButtonZMas_clicked(){
    Tz = Tz +15;;
    repaint();
}

void Widget::on_pushButtonZMenos_clicked(){
    Tz = Tz -15;
    repaint();
}

void Widget::on_checkBox_clicked(){
    if(ui->checkBox->isChecked()){
        ui->frame->setEnabled(false);
    }else{
        ui->frame->setEnabled(true);
    }
}

void Widget::on_pushButtonDerecha_3_clicked(){
    Sx++;
    repaint();
}

void Widget::on_pushButtonIzquierda_3_clicked(){
    Sx--;
    repaint();
}

void Widget::on_pushButtonArriba_3_clicked(){
    Sy++;
    repaint();
}

void Widget::on_pushButtonAbajo_3_clicked(){
    Sy--;
    repaint();
}

void Widget::on_pushButtonZMas_3_clicked(){
    Sz++;
    repaint();
}

void Widget::on_pushButtonZMenos_3_clicked(){
    Sz--;
    repaint();
}

void Widget::on_pushButton_clicked(){
    angulo = angulo + 45;
    repaint();
}

void Widget::on_pushButton_2_clicked(){
    angulo = angulo - 45;
    repaint();
}
