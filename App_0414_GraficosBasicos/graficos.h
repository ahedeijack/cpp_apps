#ifndef GRAFICOS_H
#define GRAFICOS_H

#include<QPainter>
#include<QColor>

class Graficos
{
public:
    Graficos();

    int round(float n){
        return int(n+0.5);
    }

    void lineaAdd(int x1, int y1, int x2, int y2, QPainter *canvas);
};

#endif // GRAFICOS_H
