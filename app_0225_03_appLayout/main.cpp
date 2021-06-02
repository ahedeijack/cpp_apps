//#include <QCoreApplication>
#include<QApplication>
#include<QLabel>
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
     QApplication a(argc, argv);
     QLabel etiqueta("Hola mundo!");
     etiqueta.show();

    return a.exec();
}
