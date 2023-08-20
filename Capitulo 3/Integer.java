// Declara uma variável do tipo Integer chamada numero e atribui a ela o
// valor 10 usando o método valueOf
Integer numero = Integer.valueOf(10);
// Imprime na tela o valor da variável numero
System.out.println("O número é " + numero);
// Tenta modificar o valor da variável numero
numero = numero + 5;
// Imprime na tela o novo valor da variável numero
System.out.println("O novo número é " + numero);
// Na verdade, o que aconteceu foi que um novo Integer foi criado com o
// valor 15 e a referência da variável numero foi alterada para apontar para ele
// O Integer original com o valor 10 continua existindo na memória, mas sem
// nenhuma referência para ele


