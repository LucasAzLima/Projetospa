#include "circulo.h"
#include <math.h>
#include <iostream>

using namespace std;

circulo::circulo()
{

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
    if (fillmodeC !=0)for (int i=raio; i >= 0; i--){
        for(int j=raio; j>=0; j--){
            if ((int)sqrt(pow(i,2)+pow(j,2))<raio){

                t.setPixel(p1.getX() + j,p1.getY() + i);
                t.setPixel(p1.getX() + j,p1.getY() - i);
                t.setPixel(p1.getX() - j,p1.getY() + i);
                t.setPixel(p1.getX() - j,p1.getY() - i);
            }}}
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
