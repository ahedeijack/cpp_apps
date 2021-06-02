#ifndef GRAFICOS_H
#define GRAFICOS_H

#include <QPainter>
#include <QColor>

class Graficos
{
public:
    Graficos();

    //EN LUGAR DE USAR floor o ceil
    int round(float n)
    {
        return int(n + 0.5);
    }

    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas);

    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, int r, int g, int b);

    void bresline(int x1,int y1, int x2, int y2, QPainter *canvas);
};

#endif // GRAFICOS_H
