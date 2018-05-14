#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura.h"


class circulo : public figura
{
public:
    circulo();
    void draw(Screen &t);
    void pixel(int x, int y, Screen &t);
};

#endif // CIRCULO_H
