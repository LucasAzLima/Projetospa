#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief The Pologono class serve para realizar
 * e manipular pontos de um poligono convexo.
 */
class Poligono{

protected:
  Point vertices[100];
  int nv;

public:
     /**
     * @brief Poligono é o construtor da classe.
     */
    Poligono();
    /**
     * @brief insert é uma função da classe que serve para
     * inserir um ponto do poligono.
     * @param vertice1 é o ponto a ser enserido.
     */
    void insert(Point vertice1);

    /**
     * @brief recupera é uma função da classe que serve para
     * recuperar o numero de vertices do poligono.
     * @return número de vertices.
     */
    int recupera(void);

    /**
     * @brief area é uma função da classe que serve para calcular a area do poligono convexo.
     * @return o valor da área calculada.
     */
    float area(void);
    /**
     * @brief transladar é uma função da classe que serve para
     * translatar todos os pontos do poligono.
     * @param a quantidade a ser transladada no eixo x.
     * @param b quantidade a ser transladada no eixo y.
     */
    void transladar(float a, float b);
    /**
     * @brief rotacionar é uma classe que serve para rotacionar
     * o poligono a partir de um valor em radianos de angulo teta.
     * @param teta o valor em radiano para a rotação.
     * @param p1 ponto base de rotação do poligono.
     */
    void rotacionar(float teta, Point p1);
    /**
     * @brief imprime é uma função da classe que serve
     * para imprimir o conjunto de pontos do
     * poligono na tela.
     */
    void imprimir(void);

};

#endif // POLIGONO_H
