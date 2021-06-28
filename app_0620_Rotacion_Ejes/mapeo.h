#ifndef MAPEO_H
#define MAPEO_H
#include <math.h>
#include <QLabel>


class Mapeo
{
    //En el mundo real se pueden utilizar diferentes tipos de medidas (mm, cm, mts km, inch, yrds, millas...)
    float XWmin, YWmin, XWmax, YWmax;
    int XPVmin, YPVmin, XPVmax, YPVmax;

public:
    Mapeo();

    //Definimos el area rectangular del mundo real. Proviene lo que se va a dibujar
    void ventana(float WX1, float WY1, float WX2, float WY2);
    //Definimos el area rectangular del puerto de vision. Donde se va a dibujar
    void puerto(int XPV1, int YPV1, int XPV2, int YPV2);

                                //& = referencia o dirección de memoria
                                //* = puntero
    void mapear(int x, int y, int &XT, int *YT, int L, int M);
    void mapear(int x, int y, int &XT, int &YT, int L, int M, QLabel *label, QLabel *label2); //Solo para escribir los valores de escalación aplicada
};

#endif // MAPEO_H
