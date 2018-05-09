#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"
/**
 * @brief The Retangulo class cria e manipula
 * poligonos do tipo retangular.
 */
class Retangulo : public Poligono {

public:
    /**
     * @brief Retangulo é o construtor da classe.
     * @param x é a posição no eixo x do ponto inicial do retangulo.
     * @param y é a posição no eixo y do ponto inicial do retangulo.
     * @param largura é a distância entre os pontos da base do retangulo no eixo x.
     * @param altura é a distância entre os pontos da lateral do retangulo no eixo y.
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
