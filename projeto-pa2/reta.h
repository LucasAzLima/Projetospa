#ifndef RETA_H
#define RETA_H
#include "figura.h"

class reta: public figura
{

public:
    reta(int _x, int _y, int _x2, int _y2);
    void draw(Screen &t);

};

#endif // RETA_H
