#ifndef GRAFICOS_H
#define GRAFICOS_H
#include <QPainter>
#include <QColor>

class graficos
{
public:
    graficos();
    int round_(double n)
    {
        return int(n+0.5);
    }

    QColor *color1 = new QColor();
    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas);
    void dragon(QPainter *canvas);
    void generarDragon(int Paso, int signo, int EjeX[4096], int EjeY[4096], QPainter *canvas);
    void dragonArabesco(QPainter *canvas);
    void generarDragonArabesco(int Paso, int signo, int EjeX[4096], int EjeY[4096], QPainter *canvas);
    void curvaHenon(QPainter *canvas);
    void generarCurvaHenon(int maxX, int maxY, double EscalaX, double EscalaY, double DespX, double DespY, QPainter *canvas);
    void malthus1(QPainter *canvas);
    void generarMalthus1(int maxX, int maxY, int MaxGen, QPainter *canvas);
    void malthus2(QPainter *canvas);
    void generarMalthus2(int maxX, int maxY, QPainter *canvas);
    void mandelbrot(QPainter *canvas);
};

#endif // GRAFICOS_H
