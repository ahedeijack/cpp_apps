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


void Dialog::on_pushButton_5_clicked()
{
    for (int i = 0;  i<4 ; i++ ) {
        for (int j = 0 ;j < 3 ; j++) {
            Fig[i][j] = FigAux[i][j];
        }
        tx = ty = 0;
        update();
    }
}

/*
 * Escalación 2D
Alteracion que permite cambiar el tamaño de un objeto
*/
