#include "graficos.h"

graficos::graficos()
{

}

void graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas,QColor color)
{
    int dx,dy,steps,k;
    float x_inc,y_inc,x,y;
    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    x_inc = (float)dx/steps;
    y_inc = (float)dy/steps;
    x = x1;
    y = y1;
    QPen pen(color,2);
    canvas->setPen(pen);
    //en vez de floor usar round
    //canvas->drawPoint(floor(x),floor(y));
    canvas->drawPoint(qRound(x),qRound(y));
    for(k=1;k < steps+1;k++)
    {
        x = x + x_inc;
        y = y + y_inc;
        //canvas->drawPoint(floor(x),floor(y));
        canvas->drawPoint(qRound(x),qRound(y));
    }

}

void graficos::lineaBres(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color){
    int dx,dy,x,y,x_end,p,const1,const2;
     dx = abs(x2 - x1);
     dy = abs(y2 - y1);
     p = 2 * dy - dx;
     const1 = 2 * dy;
     const2 = 2 * (dy - dx);

     if(x1 > x2)
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
     QPen pen(color,2);
     canvas -> setPen(pen);
     canvas -> drawPoint(x,y);
     while(x < x_end)
     {
         x = x + 1;
         if(p < 0){
             p = p + const2;
         }else {
             y = y + 1;
             p = p + const2;
            }
     canvas -> drawPoint(x,y);
     }
}

void graficos::circuloPitagoras(int xc, int yc, int radio, QPainter *canvas){
         canvas->setPen(QColor(0,0,200));

         float y;
         for(int x = xc-radio; x<=xc+radio; x++){
             y = yc + sqrt((radio*radio) - pow((x-xc),2.0));
             canvas->drawPoint(x, int(y));

             y = yc - sqrt(pow(radio, 2.0) - ((x-xc)*(x-xc)));
             canvas->drawPoint(x, int(y));
         }

 }

void graficos::circuloPolares(int xc, int yc, int radio, QPainter *canvas){
canvas->setPen(QColor(0,0,200));
float dth, cdth, sdth, x, y, xtemp;

dth= 1.0/radio;
cdth = cos(dth);
sdth = sin(dth);

x = 0;
y = radio;

while (y >= x){
    canvas->drawPoint(round(xc+x), round(yc+y));
    canvas->drawPoint(round(xc-x), round(yc+y));
    canvas->drawPoint(round(xc-x), round(yc-y));
    canvas->drawPoint(round(xc+x), round(yc-y));
    xtemp = x;
    x = xtemp*cdth - y * sdth;
    y = y* cdth + xtemp * sdth;

}

}

void graficos::espiral1(QPainter *canvas, QColor color){
    //DIBUJAMOS A PARTIR DEL CENTRO DE LA FORMA
 //hola
        int xc = canvas->window().width()/2;
        int yc = canvas->window().height()/2-70;
        int radio = 5;
        //const double dos_pi= M_PI * 2;  //
        const double dos_pi = 6.28318; //M_PI_2
        canvas->setPen(color);
        int cont;
        double dth,cth,sth,x,y,x_tmp,xt,yt;
                   //FACTOR MODIFICAR
        dth=dos_pi/( 16 * radio); // 1.7, 2.5, ETC
        //decrementar el FACTOR: 16 - 8, 4, 2, 1.8
        //FACTOR SE ASIGNARA DESDE LA INTERFAZ
        cth=cos(dth);
        sth=sin(dth);
        x=0.0;
        y=radio;
        cont=0;
        xt=xc+x;
        yt=yc+y;
        do{
            x_tmp=x;
            x=(x*cth-y*sth);
            y=(y*cth+x_tmp*sth);
            if(x>0){
                x+=0.5;
            }
              else {  x-=0.5;  }
            if(y>0){  y+=0.5;  }
               else{  y-=0.5;  }
            //USAR PUNTOS
            //canvas->drawPoint(xt+.5,round(yt+.5));
            //UTILIZANDO LA LINEADDA
            lineaDDA(round(xt+.5),round(yt+.5),round(xc+x+.5),round(yc+y+.5),canvas,color);
            xt=xc+x;
            yt=yc+y;
            cont++;
         }while(cont<300);
    //FIN ESPIRAL 1
