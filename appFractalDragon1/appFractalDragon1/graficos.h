#ifndef GRAFICOS_H
#define GRAFICOS_H
#include <QPainter>
#include <QColor>

class graficos
{
public:
    graficos();

    //en lugar de usar floor o ceil
    int round(float n){
        return int(n + 0.5);
    }

//    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas)
//    {
//        int dx,dy,steps,k;
//        float x_inc,y_inc,x,y;
//        dx = x2 - x1;
//        dy = y2 - y1;

//        if(abs(dx) > abs(dy))
//            steps = abs(dx);
//        else
//            steps = abs(dy);
//        x_inc = (float)dx/steps;
//        y_inc = (float)dy/steps;
//        x = x1;
//        y = y1;
//        QPen pen(QColor(0,0,200),1);
//        canvas->setPen(pen);
//        //en vez de floor usar round
//        //canvas->drawPoint(floor(x),floor(y));
//        canvas->drawPoint(round(x),round(y));
//        for(k=1;k < steps+1;k++)
//        {
//            x = x + x_inc;
//            y = y + y_inc;
//            //canvas->drawPoint(floor(x),floor(y));
//            canvas->drawPoint(round(x),round(y));
//        }

//    }

    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color);
    void lineaBres(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color);
    void circuloPitagoras(int xc, int yc, int radio, QPainter *canvas);
    void circuloPolares(int xc, int yc, int radio, QPainter *canvas);
    void espiral1(QPainter *canvas, QColor color);
    void dragon();
    void generarDragon(QPainter *canvas);
};


#endif // GRAFICOS_H
