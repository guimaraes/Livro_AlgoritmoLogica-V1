/* Em C, algumas constantes pré-definidas são definidas na biblioteca math.h, 
como M_PI (o número pi), M_E (a base dos logaritmos naturais), INT_MAX 
(o valor máximo de um inteiro) e INT_MIN (o valor mínimo de um inteiro). 
Para usar essas constantes, é preciso incluir a biblioteca math.h no início 
do programa com #include <math.h>.*/

#include <stdio.h>
#include <math.h>

int main() {
  /* Exemplo de uso da constante M_PI para calcular a circunferência de um 
  círculo com raio 5*/
  double raio = 5;
  double circunferencia = 2 * M_PI * raio;
  printf("A circunferência do círculo é %.2f\n", circunferencia);

  /* Exemplo de uso da constante M_E para calcular o valor da função 
  exponencial e^x para x = 2*/
  double x = 2;
  double exponencial = pow(M_E, x);
  printf("O valor da função exponencial é %.2f\n", exponencial);

  /* Exemplo de uso das constantes INT_MAX e INT_MIN para verificar 
  se um número inteiro está dentro dos limites*/
  int n = 1000;
  if (n > INT_MAX) {
    printf("O número é maior que o limite máximo\n");
  } else if (n < INT_MIN) {
    printf("O número é menor que o limite mínimo\n");
  } else {
    printf("O número está dentro dos limites\n");
  }

  return 0;
}


