// Declara um ponteiro para uma variável do tipo struct pessoa chamado ptr
struct pessoa *ptr;
// Atribui o endereço da variável joao ao ponteiro ptr
ptr = &joao;
// Imprime na tela o valor do campo altura da variável apontada por ptr
printf("A altura é %.2f\n", ptr->altura);
