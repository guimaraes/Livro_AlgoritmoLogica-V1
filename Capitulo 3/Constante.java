/* Em Java, algumas constantes pré-definidas são definidas na classe Math, como Math.PI 
(o número pi), Math.E (a base dos logaritmos naturais), Integer.MAX_VALUE (o valor máximo 
de um inteiro) e Integer.MIN_VALUE (o valor mínimo de um inteiro). Para usar essas 
constantes, é preciso importar a classe Math no início do programa com import 
java.lang.Math.*/

import java.lang.Math;

public class Exemplo {
  public static void main(String[] args) {
    // Exemplo de uso da constante Math.PI para calcular a área de um círculo com 
    // raio 5
    double raio = 5;
    double area = Math.PI * raio * raio;
    System.out.println("A área do círculo é " + area);

    // Exemplo de uso da constante Math.E para calcular o valor da função logarítmica 
    // ln(x) para x = 2
    double x = 2;
    double logaritmo = Math.log(x);
    System.out.println("O valor da função logarítmica é " + logaritmo);

    // Exemplo de uso das constantes Integer.MAX_VALUE e Integer.MIN_VALUE para 
    //verificar se um número inteiro está dentro dos limites
    int n = 1000;
    if (n > Integer.MAX_VALUE) {
      System.out.println("O número é maior que o limite máximo");
    } else if (n < Integer.MIN_VALUE) {
      System.out.println("O número é menor que o limite mínimo");
    } else {
      System.out.println("O número está dentro dos limites");
    }
  }
}


