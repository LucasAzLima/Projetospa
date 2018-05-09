#include "circulo.h"
#include <math.h>
#include <iostream>

using namespace std;

circulo::circulo()
{

}

void circulo::draw(Screen &t)
{   
    t.reset();
    const int width=raio;
    const int length=raio;

    for (int i=width; i >= 0; i--){
        for(int j=length; j>=0; j--){
            if ((int)sqrt(pow(i,2)+pow(j,2))==raio){

                t.setPixel(p1.getX() + j,p1.getY() + i);
                t.setPixel(p1.getX() + j,p1.getY() - i);
                t.setPixel(p1.getX() - j,p1.getY() + i);
                t.setPixel(p1.getX() - j,p1.getY() - i);
            }

            if (fillmode != 0 && (int)sqrt(pow(i,2)+pow(j,2))<raio){

                t.setPixel(p1.getX() + j,p1.getY() + i);
                t.setPixel(p1.getX() + j,p1.getY() - i);
                t.setPixel(p1.getX() - j,p1.getY() + i);
                t.setPixel(p1.getX() - j,p1.getY() - i);
            }
        }


    }
    cout<< t;
}
