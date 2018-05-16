#include "retangulo.h"
#include "figura.h"
#include <iostream>
#include "screen.h"
#include "ponto.h"

using namespace std;

retangulo::retangulo(int _xr, int _yr, int _altura, int _largura, int _fillmodeR)
{
    p1.setXY(_xr,_yr);
    altura = _altura;
    largura = _largura;
    fillmodeR = _fillmodeR;
}

void retangulo::draw(Screen &t)
{
    t.clear();
    if (fillmodeR == 0) {

        for(int j=0; j<altura; j++){

            t.setPixel(p1.getX(),p1.getY() + j);
            t.setPixel(p1.getX() + altura - 1,p1.getY() + j);
        }

        for(int j=0; j<largura; j++){

            t.setPixel(p1.getX() + j,p1.getY());
            t.setPixel(p1.getX() + j,p1.getY() + largura - 1);
        }
    } else {
        for (int a = 0; a < altura; a++) {
            for (int c = 0; c < largura; c++) {
                t.setPixel(p1.getX() + c,p1.getY() + a);
            }

        }
    }
    cout << t ;
}
