#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura.h"
#include "screen.h"
#include "ponto.h"

class retangulo: public figura
{

public:
    retangulo(int _xr, int _yr, int _altura, int _largura, int _fillmodeR);
    void draw(Screen &t);
};

#endif // RETANGULO_H
