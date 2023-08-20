// Inclui a biblioteca padrão de entrada e saída
#include <stdio.h>

// Define uma constante chamada PI com o valor 3.14
#define PI 3.14

// Declara uma função chamada area_circulo que recebe um parâmetro do tipo double chamado raio e retorna um valor do tipo double
double area_circulo(double raio) {
  // Declara uma variável local do tipo double chamada area e atribui a ela o valor da fórmula da área de um círculo usando a constante PI e o parâmetro raio
  double area = PI * raio * raio;
  // Retorna o valor da variável area
  return area;
}

// Declara uma função chamada troca que recebe dois parâmetros do tipo int chamados a e b e não retorna nada
void troca(int a, int b) {
  // Declara uma variável local do tipo int chamada aux e atribui a ela o valor da variável a
  int aux = a;
  // Atribui à variável a o valor da variável b
  a = b;
  // Atribui à variável b o valor da variável aux
  b = aux;
  // Imprime na tela os valores das variáveis a e b após a troca
  printf("Dentro da função troca: a = %d, b = %d\n", a, b);
}

// Declara uma função chamada main que não recebe nenhum parâmetro e retorna um valor do tipo int
int main() {
  // Declara duas variáveis globais do tipo int chamadas x e y e atribui a elas os valores 10 e 20, respectivamente
  int x = 10;
  int y = 20;
  // Imprime na tela os valores das variáveis x e y antes da troca
  printf("Antes da troca: x = %d, y = %d\n", x, y);
  // Chama a função troca passando as variáveis x e y como argumentos
  troca(x, y);
  // Imprime na tela os valores das variáveis x e y depois da troca
  printf("Depois da troca: x = %d, y = %d\n", x, y);
  
  // Declara uma variável global do tipo double chamada r e atribui a ela o valor 5.0
  double r = 5.0;
  // Declara uma variável global do tipo double chamada a e atribui a ela o valor retornado pela função area_circulo passando a variável r como argumento
  double a = area_circulo(r);
  // Imprime na tela o valor da variável a
  printf("A área do c