// Declara uma variável do tipo String chamada nome e atribui a ela o
// valor "Maria"
String nome = "Maria";
// Imprime na tela o valor da variável nome
System.out.println("O nome é " + nome);
// Tenta modificar o valor da variável nome
nome = "Joana";
// Imprime na tela o novo valor da variável nome
System.out.println("O novo nome é " + nome);
// Na verdade, o que aconteceu foi que uma nova String foi criada com
// o valor "Joana" e a referência da variável nome foi alterada para apontar para ela
// A String original com o valor "Maria" continua existindo na memória, mas sem 
// nenhuma referência para ela
