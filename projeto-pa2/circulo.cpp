#include "circulo.h"
#include <math.h>
#include <iostream>

using namespace std;

circulo::circulo(int _xr, int _yr, int _raio, int _fillmodeC)
{
    p1.setXY(_xr,_yr);
    xr=_xr;
    yr= _yr;
    raio=_raio ;
    fillmodeC=_fillmodeC;
}


void circulo::draw(Screen &t)
{   
    t.clear();

    int x,y,a;
    x=0;
    y=raio;
    a=1-raio;

    pixel(x,y,t);

    while (x<y) {
        if (a<0) {
            a=a+2*x+3;
            if (x*x +y*y - raio*raio<0) pixel(x,y,t);
            x++;

        } else {
            if (x*x +y*y - raio*raio<0) pixel(x,y,t);
            a=a+2*(x-y)+5;
            if (x*x +y*y - raio*raio<0) pixel(x,y,t);
            x++;
            y--;

        }
        pixel(x,y,t);
    }
    cout<< t;
}

void circulo::pixel(int x, int y, Screen &t){
    t.setPixel(p1.getX()+x,p1.getY()+y);
    t.setPixel(p1.getX()+x,p1.getY()-y);
    t.setPixel(p1.getX()-x,p1.getY()+y);
    t.setPixel(p1.getX()-x,p1.getY()-y);
    t.setPixel(p1.getX()+y,p1.getY()+x);
    t.setPixel(p1.getX()+y,p1.getY()-x);
    t.setPixel(p1.getX()-y,p1.getY()+x);
    t.setPixel(p1.getX()-y,p1.getY()-x);

}
