#include "mapeo.h"

Mapeo::Mapeo(){

}

void Mapeo::ventana(float WX1, float WY1, float WX2, float WY2){
    XWmin = WX1;
    YWmin = WY1;
    XWmax = WX2;
    YWmax = WY2;
}

                  //XPVmin
void Mapeo::puerto(int XPV1, int YPV1, int XPV2, int YPV2){
    XPVmin = XPV1;
    YPVmin = YPV1;
    XPVmax = XPV2;
    YPVmax = YPV2;
}

                                //XT y YT: la "T" representa "transformada"
void Mapeo::mapear(int x, int y, int &XT, int *YT, int L, int M){
    float sX, sY;
    sX = (XPVmax - XPVmin)/(XWmax - XWmin);
    sY = (YPVmax - YPVmin)/(YWmax - YWmin);

    XT = int(round(sX * (x - XWmin) + XPVmin + L));
    *YT = int(round(sY * (YWmin - y) - YPVmin + M));
}


void Mapeo::mapear(int x, int y, int &XT, int &YT, int L, int M, QLabel *label, QLabel *label2){
    float sX, sY;
    sX = (XPVmax - XPVmin)/(XWmax - XWmin);
    label->setText("sX = "+QString::number(double(sX)));
    sY = (YPVmax - YPVmin)/(YWmax - YWmin);
    label2->setText("sY = "+QString::number(double(sY)));

    XT = int(round(sX * (x - XWmin) + XPVmin + L));
    YT = int(round(sY * (YWmin - y) - YPVmin + M));
}
