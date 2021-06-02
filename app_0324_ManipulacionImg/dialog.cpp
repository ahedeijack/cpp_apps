#include "dialog.h"
#include "ui_dialog.h"

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

QImage Dialog::modificarImagenRGB(const QImage &in)
{
    // ASIGNAMOS EL TAMAÑO DE LA IMÁGEN DE ENTRADA (in) y su formato
    QImage out(in.size(),in.format());
    // RECORREMOS EL ARREGLO BIDIMENSIONAL DE LA IMÁGEN (SUS PIXELES)
    for(int linea = 0; linea < in.height(); linea++){
        const QRgb *inPixel = reinterpret_cast<const QRgb*>(in.scanLine(linea));
        QRgb *outPixeles = reinterpret_cast<QRgb*>(out.scanLine(linea));
        //RECORREMOS LA IMAGEN POR COLUMNA.

        for(int pos = 0; pos<in.width(); pos++){
            int red = qRed(inPixel[pos]);
            int green = qGreen(inPixel[pos]);
            int blue = qBlue(inPixel[pos]);
            int alpha = qAlpha(inPixel[pos]);

            //outPixeles[pos] = qRgba(red, green, blue, alpha);
            //outPixeles[pos] = qRgba(blue, red, green, alpha);
            //outPixeles[pos] = qRgba(green, blue, red, alpha);
            //outPixeles[pos] = qRgba(red, 0, 0, alpha);
            //outPixeles[pos] = qRgba(0, green, 0, alpha);
            //outPixeles[pos] = qRgba(0, 0, blue, alpha);
            outPixeles[pos] = qRgba(red, red, red, alpha);
        }
    }
    return out;

}


void Dialog::on_pushButton_clicked()
{
    QImage imagen(":/imgs/pez.jpg");
    imagen = modificarImagenRGB(imagen);

    ui->label_2->setPixmap(QPixmap::fromImage(imagen));
    ui->label_2->setScaledContents(true);

    imagen = modificarImagenRGB(imagen);

    ui->label_3->setPixmap(QPixmap::fromImage(imagen));
    ui->label_3->setScaledContents(true);

    imagen = modificarImagenRGB(imagen);

    ui->label_4->setPixmap(QPixmap::fromImage(imagen));
    ui->label_4->setScaledContents(true);

}
