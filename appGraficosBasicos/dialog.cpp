#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    x1 = y1 = x2 = y2 = 0;
    linea = false;

    ui->lblCoordenadas1->setVisible(false);
    ui->lblCoordenadas2->setVisible(false);
}

Dialog::~Dialog()
{
    delete ui;
}

int contador = 0;
int opc = 1;

void Dialog::paintEvent(QPaintEvent *evt)
{
    Q_UNUSED(evt)

    Canvas = new QPainter(this);

    Graficos graficos; //OBJETO ESTATICO
    //graficos.lineaDDA(x1,y1,x2,y2,Canvas, r, g, b);

    int r = color.red();
    int g = color.green();
    int b = color.blue();

    //Graficos *graficos = new Graficos();

    if(opc == 1)
    {
        graficos.lineaDDA(x1,y1,x2,y2,Canvas,r,g,b);
    }
        else
    if(opc == 2)
    {
        graficos.bresline(x1,y1,x2,y2,Canvas);
    }

    Canvas->end();
}
void Dialog::on_btnLinea_clicked()
{
    x1 = ui->lineX1->text().toInt();
    y1 = ui->lineY1->text().toInt();
    x2 = ui->lineX2->text().toInt();
    y2 = ui->lineY2->text().toInt();
    linea = true;

    ui->lblCoordenadas1->setVisible(true);
    ui->lblCoordenadas1->setText("P1: ( " + ui->lineX1->text() + ", " + ui->lineY1->text() + " )");
    ui->lblCoordenadas1->setGeometry(x1+1, y1 + 1, ui->lblCoordenadas1->width(), ui->lblCoordenadas1->height());

    ui->lblCoordenadas2->setVisible(true);
    ui->lblCoordenadas2->setText("P2: ( " + ui->lineX2->text() + ", " + ui->lineY2->text() + " )");
    ui->lblCoordenadas2->setGeometry(x2 + 1, y2 + 1, ui->lblCoordenadas2->width(), ui->lblCoordenadas2->height());

    opc = 1;
    update();
}

void Dialog::on_btnColor_clicked()
{
    QColor colorSeleccionado = QColorDialog::getColor(Qt::white, this, "Selecciona Color");

    if(colorSeleccionado.isValid())
    {
        color = colorSeleccionado;
    }
}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    x1 = ui->lineX1->text().toInt();
    y1 = ui->lineY1->text().toInt();

    ui->lineX1->setText(QString::number(event->pos().x()));
    ui->lineY1->setText(QString::number(event->pos().y()));
/*
    if(event -> MouseButtonPress)
    {
        contador++;

        if(contador >= 3)
        {
            contador = 0;
        }
            else
        if(contador == 1)
        {
            x1 = event->x();
            y1 = event->y();

            if(x1 >= 250)
            {
                ui->lineX1->setText(QString::number(x1 - 250));

                if(y1 <= 250)
                {
                    ui->lineY1->setText(QString::number( (y1 - 250) * -1 ));
                }
                else
                {
                    ui->lineY1->setText(QString::number( (y1 - 250) * -1 ));
                }
            }
                else
            if(x1 < 250)
            {
                ui->lineX1->setText(QString::number( (x1 - 250)));

                if(y1 <= 250)
                {
                    ui->lineY1->setText(QString::number( (y1 - 250) * -1 ));
                }
                else
                {
                    ui->lineY1->setText(QString::number( (y1 - 250) * -1 ));
                }
            }

            ui->lblCoordenadas1->setVisible(true);
            ui->lblCoordenadas1->setText("P1: ( " + ui->lineX1->text() + ", " + ui->lineY1->text() + " )");
            ui->lblCoordenadas1->setGeometry(x1+1, y1 + 1, ui->lblCoordenadas1->width(), ui->lblCoordenadas1->height());
        }
            else
        if(contador == 2)
        {
            x2 = event->x();
            y2 = event->y();

            if(x2 >= 250)
            {
                ui->lineX2->setText(QString::number(x2 - 250));

                if(y2 <= 250)
                {
                    ui->lineY2->setText(QString::number( (y2 - 250) * -1 ));
                }
                else
                {
                    ui->lineY2->setText(QString::number( (y2 - 250) * -1 ));
                }
            }
                else
            if(x2 < 250)
            {
                ui->lineX2->setText(QString::number( (x2 - 250)));

                if(y2 <= 250)
                {
                    ui->lineY2->setText(QString::number( (y2 - 250) * -1 ));
                }
                else
                {
                    ui->lineY2->setText(QString::number( (y2 - 250) * -1 ));
                }
            }

            ui->lblCoordenadas2->setVisible(true);
            ui->lblCoordenadas2->setText("P2: ( " + ui->lineX2->text() + ", " + ui->lineY2->text() + " )");
            ui->lblCoordenadas2->setGeometry(x2 + 1, y2 + 1, ui->lblCoordenadas2->width(), ui->lblCoordenadas2->height());

            update();
        }
    }
    */
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    x2 = ui->lineX2->text().toInt();
    y2 = ui->lineY2->text().toInt();

    ui->lineX2->setText(QString::number(event->pos().x()));
    ui->lineY2->setText(QString::number(event->pos().y()));
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    ui->lineX2->setText(QString::number(event->pos().x()));
    ui->lineY2->setText(QString::number(event->pos().y()));

    ui->btnLinea->click();
}

void Dialog::on_btnBresenham_clicked()
{ 
    x1 = ui->lineX1->text().toInt();
    y1 = ui->lineY1->text().toInt();
    x2 = ui->lineX2->text().toInt();
    y2 = ui->lineY2->text().toInt();
    linea = true;

    ui->lblCoordenadas1->setVisible(true);
    ui->lblCoordenadas1->setText("P1: ( " + ui->lineX1->text() + ", " + ui->lineY1->text() + " )");
    ui->lblCoordenadas1->setGeometry(x1+1, y1 + 1, ui->lblCoordenadas1->width(), ui->lblCoordenadas1->height());

    ui->lblCoordenadas2->setVisible(true);
    ui->lblCoordenadas2->setText("P2: ( " + ui->lineX2->text() + ", " + ui->lineY2->text() + " )");
    ui->lblCoordenadas2->setGeometry(x2 + 1, y2 + 1, ui->lblCoordenadas2->width(), ui->lblCoordenadas2->height());

    opc = 2;
    update();
}
