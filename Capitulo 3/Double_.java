// Declara uma variável do tipo Double chamada pi e atribui a ela o
// valor 3.14 usando o operador new
Double pi = new Double(3.14);
// Imprime na tela o valor da variável pi
System.out.println("O valor de pi é " + pi);
// Tenta modificar o valor da variável pi
pi = pi * 2;
// Imprime na tela o novo valor da variável pi
System.out.println("O novo valor de pi é " + pi);
// Na verdade, o que aconteceu foi que um novo Double foi criado com o\
// valor 6.28 e a referência da variável pi foi alterada para apontar para ele
// O Double original com o valor 3.14 continua existindo na memória, mas sem
// nenhuma referência para ele



