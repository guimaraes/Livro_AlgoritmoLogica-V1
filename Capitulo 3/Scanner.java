// Declara uma variável do tipo Scanner chamada entrada e atribui a ela
// um novo objeto que lê dados do teclado usando o operador new e a
// classe System.in
Scanner entrada = new Scanner(System.in);
// Pede ao usuário que digite seu nome usando o método System.out.print
System.out.print("Digite seu nome: ");
// Lê uma linha da entrada usando o método nextLine e armazena em uma
// variável do tipo String chamada nome
String nome = entrada.nextLine();
// Imprime na tela o valor da variável nome
System.out.println("O seu nome é " + nome);
// Pede ao usuário que digite sua idade usando o método System.out.print
System.out.print("Digite sua idade: ");
// Lê um número inteiro da entrada usando o método nextInt e armazena em
// uma variável do tipo int chamada idade
int idade = entrada.nextInt();
// Imprime na tela o valor da variável idade
System.out.println("A sua idade é " + idade);
// Fecha o objeto entrada usando o método close para liberar os recursos
// associados à fonte
entrada.close();
