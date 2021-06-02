#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    x1 = y1 = x2 = y2 = 0;
    linea = circuloPitagoras =  circuloPolares = espiral1 = espiral2 = false;
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    x1 = ui->lineEdit->text().toInt();
    y1 = ui->lineEdit_2->text().toInt();
    x2 = ui->lineEdit_3->text().toInt();
    y2 = ui->lineEdit_4->text().toInt();
    linea = true;
    update();
}
//cambiar el color XD
void Dialog::on_pushButton_2_clicked()
{
QColor colorSeleccionado = QColorDialog::getColor(Qt::white,this,"Selecciona Color");
if(colorSeleccionado.isValid())
    color = colorSeleccionado;

}

void Dialog::paintEvent(QPaintEvent *evt)
{
    Q_UNUSED(evt)
    Canvas = new QPainter(this);

//    Graficos graficos;
//    graficos.lineaDDA(x1,y1,x2,y2,Canvas);

    Graficos *graficos = new Graficos();
    //graficos->lineaDDA(x1,y1,x2,y2,Canvas,color);
    if(linea){
        graficos->lineaDDA(x1, y1, x2,y2, Canvas, color) ;
    } else if(circuloPitagoras){
        graficos->circuloPitagoras(xc, yc, radio, Canvas);
    }  else if(circuloPolares){
        graficos->circuloPolares(xc, yc, radio, Canvas);
    } else if(espiral1){
        graficos->espiral1(Canvas, color);
    } else if (espiral2){
        graficos->espiral2(Canvas, color);
    }

    linea = circuloPitagoras =  circuloPolares = espiral1 = espiral2 = false;

    Canvas-> end();
}

void Dialog::on_pushButton_3_clicked()
{
    x1 = ui->lineEdit->text().toInt();
    y1 = ui->lineEdit_2->text().toInt();
    x2 = ui->lineEdit_3->text().toInt();
    y2 = ui->lineEdit_4->text().toInt();
    linea = true;
    update();
}

void Dialog::on_pushButton_5_clicked()
{
    xc = ui->xc->value();
    yc = ui->xy->value();
    radio = ui->centro->value();

    circuloPitagoras = true;
    repaint();
}

void Dialog::on_pushButton_4_clicked()
{
    xc = ui->xc->value();
    yc = ui->xy->value();
    radio = ui->centro->value();

    circuloPolares = true;
    repaint();
}



void Dialog::on_pushButton_6_clicked()
{
    espiral1 = true;
    repaint();
}

void Dialog::on_pushButton_7_clicked()
{
    espiral2 = true;
    repaint();
}
