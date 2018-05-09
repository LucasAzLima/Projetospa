#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura.h"


class circulo : public figura
{
public:
    circulo();
    void draw(Screen &t);
};

#endif // CIRCULO_H
