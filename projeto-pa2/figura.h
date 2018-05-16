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
    virtual void draw(Screen &t)=0;
};

#endif // FIGURA_H
