#include "mapeo.h"

void mapeo::ventana(float WX1, float WY1, float WX2, float WY2)
{
    XWmin = WX1;
    YWmin = WY1;
    XWmax = WX2;
    YWmax = WY2;
}

void mapeo::puerto(int VX1, int VY1, int VX2, int VY2)
{
    XPVmin = VX1;
    YPVmin = VY1;
    XPVmax = VX2;
    YPVmax = VY2;
}

void mapeo::mapear(int X, int Y, int &XT, int &YT, int L, int M)
{
    float sX, sY;
    sX = (XPVmax - XPVmin)/(XWmax - XWmin);
    sY = (YPVmax - YPVmin)/(YWmax - YWmin);
    XT = floor((sX * (X - XWmin) + XPVmin + L) + 0.5);
    YT = floor((sY * (YWmin - Y) - YPVmin + M) + 0.5);
}
