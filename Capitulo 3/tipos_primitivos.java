// Declara uma classe chamada ExemploTiposPrimitivos
public class ExemploTiposPrimitivos {

  // Declara um método chamado main que recebe um array de strings como parâmetro e não retorna nada
  public static void main(String[] args) {
  
    // Declara uma variável do tipo byte chamada b e atribui a ela o valor 127
    // Um byte é um tipo numérico inteiro que ocupa 1 byte de memória e pode armazenar valores entre 
    // -128 e +127
    byte b = 127;
    
    // Declara uma variável do tipo short chamada s e atribui a ela o valor 32767
    // Um short é um tipo numérico inteiro que ocupa 2 bytes de memória e pode armazenar valores entre 
    // -32768 e +32767
    short s = 32767;
    
    // Declara uma variável do tipo int chamada i e atribui a ela o valor 2147483647
    // Um int é um tipo numérico inteiro que ocupa 4 bytes de memória e pode armazenar valores entre 
    // -2147483648 e +2147483647
    int i = 2147483647;
    
    // Declara uma variável do tipo long chamada l e atribui a ela o valor 9223372036854775807L
    // Um long é um tipo numérico inteiro que ocupa 8 bytes de memória e pode armazenar valores entre 
    // -9223372036854775808L e +9223372036854775807L
    // O sufixo L indica que o valor é do tipo long
    long l = 9223372036854775807L;
    
    // Declara uma variável do tipo float chamada f e atribui a ela o valor 3.14F
    // Um float é um tipo numérico real de precisão simples que ocupa 4 bytes de memória e pode armazenar 
    // valores aproximados entre -3.4E+38F e +3.4E+38F
    // O sufixo F indica que o valor é do tipo float
    float f = 3.14F;
    
    // Declara uma variável do tipo double chamada d e atribui a ela o valor 2.71828
    // Um double é um tipo numérico real de precisão dupla que ocupa 8 bytes de memória e pode armazenar 
    // valores aproximados entre -1.7E+308 e +1.7E+308
    double d = 2.71828;
    
    // Declara uma variável do tipo char chamada c e atribui a ela o valor 'J'
    // Um char é um tipo que armazena um caractere Unicode que ocupa 2 bytes de memória e pode representar 
    // símbolos como letras, números, pontuações, etc.
    char c = 'J';
    
    // Declara uma variável do tipo boolean chamada bo e atribui a ela o valor true
    // Um boolean é um tipo que armazena um valor lógico que ocupa 1 bit de memória e pode ser true 
    (verdadeiro) ou false (falso)
    boolean bo = true;
    
    // Imprime na tela os valores das variáveis usando o método System.out.println()
    System.out.println("O valor de b é " + b);
    System.out.println("O valor de s é " + s);
    System.out.println("O valor de i é " + i);
    System.out.println("O valor de l é " + l);
    System.out.println("O valor de f é " + f);
    System.out.println("O valor de d é " + d);
    System.out.println("O valor de c é " + c);
    System.out.println("O valor de bo é " + bo);
    
  }
}
