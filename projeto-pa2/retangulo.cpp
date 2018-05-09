#include "retangulo.h"
#include "figura.h"
#include <iostream>
#include "screen.h"
#include "ponto.h"

using namespace std;

void retangulo::draw(Screen &t)
{
    t.reset();
    for(int j=0; j<altura; j++){

        t.setPixel(p1.getX(),p1.getY() + j);
        t.setPixel(p1.getX() + altura - 1,p1.getY() + j);
    }

    for(int j=0; j<largura; j++){

        t.setPixel(p1.getX() + j,p1.getY());
        t.setPixel(p1.getX() + j,p1.getY() + largura - 1);
    }
    cout << t ;
}
