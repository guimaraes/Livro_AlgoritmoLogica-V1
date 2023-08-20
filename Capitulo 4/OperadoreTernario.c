// Código em C
#include <stdio.h>

int main() {
  int x = 10; // declara uma variável x com valor 10
  int y = 5; // declara uma variável y com valor 5
  int z; // declara uma variável z sem valor inicial
  z = x > y ? x : y; // atribui o maior valor entre x e y a z usando o operador ternário
  printf("z = %d\n", z); // imprime o valor de z
  return 0;
}

