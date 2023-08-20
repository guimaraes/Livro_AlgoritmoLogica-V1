// Código em C
#include <stdio.h>

int main() {
  int x = 5; // declara uma variável x com valor 5
  printf("x = %d\n", x); // imprime o valor de x
  printf("!x = %d\n", !x); // imprime o valor de !x (negação lógica)
  printf("++x = %d\n", ++x); // imprime o valor de ++x (incremento pré-fixado)
  printf("x = %d\n", x); // imprime o novo valor de x
  printf("x++ = %d\n", x++); // imprime o valor de x++ (incremento pós-fixado)
  printf("x = %d\n", x); // imprime o novo valor de x
  printf("--x = %d\n", --x); // imprime o valor de --x (decremento pré-fixado)
  printf("x = %d\n", x); // imprime o novo valor de x
  printf("x-- = %d\n", x--); // imprime o valor de x-- (decremento pós-fixado)
  printf("x = %d\n", x); // imprime o novo valor de x
  printf("+x = %d\n", +x); // imprime o valor de +x (sinal positivo)
  printf("-x = %d\n", -x); // imprime o valor de -x (sinal negativo)
  return 0;
}

