#include "poligono.h"
#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono(){
    for(int i=0; i<100; i++){
        vertices[i].setXY(0,0);
    }
    nv=0;
}

void Poligono::insert(Point vertice1){

    vertices[nv] = vertice1;
    nv++;
}

int Poligono::recupera(){
    return nv;
}

float Poligono::area(){
    float som1=0, som2=0, aux, areafinal;
    float xp, yp;

    for(int i=0; i<nv-1; i++){
        xp = vertices[i].getX();
        yp = vertices[i+1].getY();
        aux = xp*yp;
        som1 += aux;
    }
    xp = vertices[nv-1].getX();
    yp = vertices[0].getY();
    aux = xp*yp;
    som1 += aux;

    for(int i=0; i<nv-1; i++){
        xp = vertices[i+1].getX();
        yp = vertices[i].getY();
        aux = xp*yp;
        som2 += aux;
    }
    xp = vertices[0].getX();
    yp = vertices[nv-1].getY();
    aux = xp*yp;
    som2 += aux;

    areafinal = (som1 - som2)/2;

    if(areafinal<0){
        areafinal*=(-1);
    }

    return areafinal;
}

void Poligono::transladar(float a, float b){
    for(int i=0; i<nv; i++){
        vertices[i].translada(a,b);
    }
}

void Poligono::rotacionar(float teta, Point p1){
    float xlinha, ylinha;

    for(int i=0; i<nv; i++){
        vertices[i].sub(p1);
        xlinha = ((vertices[i].getX())*cos(teta)) - ((vertices[i].getY())*sin(teta));
        ylinha = ((vertices[i].getX())*sin(teta)) + ((vertices[i].getY())*cos(teta));
        vertices[i].setXY(xlinha,ylinha);
        vertices[i].add(p1);
    }
}

void Poligono::imprimir(){
    for(int i=0; i<nv; i++){
        vertices[i].imprime();
        cout << " -> ";
    }
    vertices[0].imprime();
    cout << endl;
}
