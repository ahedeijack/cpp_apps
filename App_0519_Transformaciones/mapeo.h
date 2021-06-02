#ifndef MAPEO_H
#define MAPEO_H


class Mapeo
{
    //Mapeo
    //En el mundo real se pueden utilizar las unidades de media que se requieran.
    float XWmin, YWmin, XWmax, YWmax;  //Define el area de la ventana que es el mundo real.

    int XPVmin, YPVmin, XPVmax, YPVmax; //Define el area de dibujo en el dispositivo.

public:

    //Representa el area del mundo real.
    void ventana(float wx1, float wy1, float wx2, float wy2);

    //Representa el area de despliegue.
    void puerto(int pvx1, int pvy1, int pvx2, int pvy2);

    //X, Y Posición en el mundo real.
    //XT YT Posición en el dispositivo de despliegue
    void mapear(int X, int Y, int &XT, int &YT, int L, int M); //L y M representan el origen

};

#endif // MAPEO_H
