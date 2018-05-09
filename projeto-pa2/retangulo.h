#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura.h"
#include "screen.h"
#include "ponto.h"

class retangulo: public figura
{

public:

    void draw(Screen &t);
};

#endif // RETANGULO_H
