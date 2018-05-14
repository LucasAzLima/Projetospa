#ifndef FIGURA_H
#define FIGURA_H
#include "screen.h"
#include "ponto.h"
class figura
{
public:
    ponto p1;
    ponto p2;
    int altura, largura, xr, yr, raio, fillmodeC,fillmodeR;
public:
    figura();
    void setparametrosretangulo(int _xr, int _yr, int _altura, int _largura, int _fillmodeR);
    void setparametrosreta(int _x, int _y, int _x2, int _y2);
    void setparametroscirculo(int _xr, int _yr, int _raio, int _fillmodeC);
    virtual void draw(Screen &t)=0;
};

#endif // FIGURA_H
