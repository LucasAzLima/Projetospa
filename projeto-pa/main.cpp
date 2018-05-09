#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

#define PI 3.14159265

using namespace std;

int main(){
  Retangulo ret(0,0,3,4);
  Point p1;

  p1.setXY(1.5,-2);

  ret.imprimir();

  cout << "area 1 = " << ret.area() << endl;

  ret.transladar(-3,4);

  cout << "area 2 = " << ret.area() << endl;

  ret.rotacionar(PI/6,p1);

  cout << "area 3 = " << ret.area() << endl;

  return 0;
}
