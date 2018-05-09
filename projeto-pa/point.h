#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class serve para realizar
 * e manipular pontos de dados do tipo float.
 */

class Point{

private:
  float x, y;

public:
  /**
   * @brief setX é uma função da classe
   * que serve para setar a variável _x do ponto.
   * @param _x é a posição no eixo x do ponto.
   */
  void setX(float _x);
  /**
   * @brief setY é uma função da classe
   * que serve para setar a variável _y do ponto.
   * @param _y é a posição no eixo y do ponto.
   */
  void setY(float _y);
  /**
   * @brief setXY é uma função da classe
   * que serve para setar, diretamente, as variáveis
   * _x e _y do ponto.
   * @param _x é a posição no eixo x do ponto.
   * @param _y é a posição no eixo y do ponto.
   */
  void setXY(float _x, float _y);
  /**
   * @brief getX é uma função da classe que serve
   * para recuperar o valor da variável _x do ponto.
   * @return Valor do _x do ponto.
   */
  float getX(void);
  /**
   * @brief getY é uma função da classe que serve
   * para recuperar o valor da variável _y do ponto.
   * @return Valor do _y do ponto.
   */
  float getY(void);
  /**
   * @brief add é uma função da classe que serve
   * para somar dois pontos.
   * @param p1 é um ponto inserido pelo usuário.
   */
  void add(Point p1);
  /**
   * @brief sub é uma função da classe que serve
   * para subtrair dois pontos.
   * @param p1 é um ponto inserido pelo usuário.
   */
  void sub(Point p1);
  /**
   * @brief norma é uma função da classe que serve
   * para calcular a norma do ponto.
   * @return Valor calculado da norma.
   */
  float norma();
  /**
   * @brief translada é uma função da classe que serve
   * para transladar um ponto no eixo x em "a" unidades
   * e no eixo y em "b" unidades.
   * @param a quantidade a ser transladada no eixo x.
   * @param b quantidade a ser transladada no eixo y.
   */
  void translada(float a, float b);
  /**
   * @brief imprime é uma função da classe que serve
   * para imprimir o ponto na tela.
   */
  void imprime(void);

};

#endif // POINT_H
