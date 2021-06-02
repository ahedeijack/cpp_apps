//#include <QCoreApplication>
#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);
    QApplication a(argc, argv);

    /*
     Estatico.
    QLabel etiqueta("Hola Mundo uwu");
    etiqueta.show();

    Dinamico
    QLabel *etiqueta = new QLabel("Muy buenos días chavales.");
    etiqueta->show();
 */
QWidget *ventana = new QWidget;
QVBoxLayout *verticalL1 = new QVBoxLayout;
QHBoxLayout *horizontalL1 = new QHBoxLayout;
QVBoxLayout *main = new QVBoxLayout;

   QLabel *etiqueta1 = new QLabel("<h1><i><font color =#413c69>Etiqueta 1 <br>  Practicando con: </i></font> "" <font color =#413c69>QT 5</font> </h1>");
   etiqueta1->setFrameStyle(QFrame::Panel | QFrame::Raised);

   QLabel *etiqueta2 = new QLabel("<h3><i><font color=#4a47a3>Alumno: </i> </font>""<font color =#709fb0> Carlos A. Vázquez </font></h3>");
   etiqueta2 ->setAlignment(Qt::AlignBottom  | Qt::AlignRight);

    QLabel *etiqueta3 = new QLabel("<h3><b><font color=#4a47a3>#NC: </b></font>""<font color=#709fb0>18131288</font></h3>");
    etiqueta2 ->setAlignment(Qt::AlignBottom  | Qt::AlignLeft);

   verticalL1->addWidget(etiqueta1);
   horizontalL1->addWidget(etiqueta2);
   horizontalL1->addWidget(etiqueta3);

   main->addLayout(verticalL1);
   main->addLayout(horizontalL1);

   ventana->setLayout(main);
   ventana->show();
    return a.exec();
}
