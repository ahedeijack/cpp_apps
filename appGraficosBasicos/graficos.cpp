#include "graficos.h"

Graficos::Graficos()
{

}

void Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas)
{
    int   dx, dy, steps, k;
    float x_inc, y_inc, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) > abs(dy))
       steps = abs(dx);
    else
       steps = abs(dy);

    x_inc = (float)dx / steps;
    y_inc = (float)dy / steps;

    x = x1;
    y = y1;

    QPen pen(QColor(0,0,200), 1);
    canvas->setPen(pen);

    //En vez de floor usar round
    //canvas->drawPoint(floor(x),floor(y)); //floor NO REDONDEA
    canvas->drawPoint(round(x),round(y));

    for(k= 1; k < steps+1; k++)
    {
      x = x + x_inc;
      y = y + y_inc;

      //canvas->drawPoint(floor(x),floor(y));
      canvas->drawPoint(round(x),round(y));
    }
}

void Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, int r, int g, int b)
{
    int   dx, dy, steps, k;
    float x_inc, y_inc, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) > abs(dy))
       steps = abs(dx);
    else
       steps = abs(dy);

    x_inc = (float)dx / steps;
    y_inc = (float)dy / steps;

    x = x1;
    y = y1;

    QPen pen(QColor(r,g,b), 1);
    canvas->setPen(pen);

    //En vez de floor usar round
    //canvas->drawPoint(floor(x),floor(y)); //floor NO REDONDEA
    canvas->drawPoint(qRound(x),qRound(y));

    for(k= 1; k < steps+1; k++)
    {
      x = x + x_inc;
      y = y + y_inc;

      //canvas->drawPoint(floor(x),floor(y));
      canvas->drawPoint(qRound(x),qRound(y));
    }
}

void Graficos::bresline(int x1,int y1, int x2, int y2, QPainter *canvas)
{
   int dx, dy, x, y, x_end, p, const1, const2;

   dx = abs(x2 - x1);
   dy = abs(y2 - y1);

   p = 2 * dy - dx;

   const1 = 2 * dy;
   const2 = 2 * (dy - dx);

   if( x1 > x2)
   {
    x = x2;
    y = y2;
    x_end = x1;
   }
   else
   {
     x = x1;
     y = y1;
     x_end = x2;
   }

   QPen pen(QColor(0,0,0), 1);
   canvas->setPen(pen);

   canvas->drawPoint(round(x),round(y));
   while(x < x_end)
   {
    x = x + 1;
    if(p < 0)
      p = p + const1;
    else
    {
      y = y + 1;
      p = p + const2;
    }
    canvas->drawPoint(round(x),round(y));
   }
}


