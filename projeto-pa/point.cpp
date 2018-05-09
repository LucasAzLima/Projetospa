#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

void Point::setX(float _x){
    x = _x;
}

void Point::setY(float _y){
    y = _y;
}

void Point::setXY(float _x, float _y){
    x = _x;
    y = _y;
}

float Point::getX(){
    return x;
}

float Point::getY(){
    return y;
}

void Point::add(Point p1){
    Point p;
    p.x = x + p1.x;
    p.y = y + p1.y;
}

void Point::sub(Point p1){
    x = x - p1.getX();
    y = y - p1.getY();
}

float Point::norma(){
    float ret;
    ret = sqrt(x*x + y*y);
    return ret;
}

void Point::translada(float a, float b){
    x = x + a;
    y = y + b;
}

void Point::imprime(){
    cout << "(" << x << "," << y << ")";
}
