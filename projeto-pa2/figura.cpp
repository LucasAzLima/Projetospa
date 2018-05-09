#include "figura.h"
#include <iostream>
using namespace std;

figura::figura()
{
}

void figura::setparametrosretangulo(int _xr, int _yr, int _altura, int _largura)
{
    p1.setXY(_xr,_yr);
    altura = _altura;
    largura = _largura;
}

void figura::setparametrosreta(int _x, int _y, int _x2, int _y2)
{
    p1.setXY(_x,_y);
    p2.setXY(_x2,_y2);
}

void figura::setparametroscirculo(int _xr, int _yr, int _raio, int _fillmode)
{
    p1.setXY(_xr,_yr);
    raio = _raio;
    fillmode = _fillmode;
}
void figura::draw(Screen &t)
{
}
