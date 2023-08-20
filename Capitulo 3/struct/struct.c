// Inclui as bibliotecas padrão de entrada e saída e de alocação de memória
#include <stdio.h>
#include <stdlib.h>

// Define uma constante para o número máximo de funcionários
#define MAX 10

// Define uma struct chamada funcionario que armazena os dados de um funcionário
struct funcionario {
  char nome[50]; // Um campo do tipo vetor de char que armazena o nome do funcionário
  int idade; // Um campo do tipo int que armazena a idade do funcionário em anos
  char sexo; // Um campo do tipo char que armazena o sexo do funcionário ('M' ou 'F')
  float salario; // Um campo do tipo float que armazena o salário do funcionário em reais
  int tempo; // Um campo do tipo int que armazena o tempo de serviço do funcionário em anos
};

// Declara uma função que recebe um ponteiro para uma variável do tipo struct funcionario e não retorna nada
// Essa função é responsável por cadastrar os dados de um funcionário
void cadastrar(struct funcionario *f) {
  printf("Digite o nome do funcionario: ");
  scanf("%s", f->nome); // Lê uma string da entrada padrão e armazena no campo nome da variável apontada por f
  printf("Digite a idade do funcionario: ");
  scanf("%d", &f->idade); // Lê um inteiro da entrada padrão e armazena no campo idade da variável apontada por f
  printf("Digite o sexo do funcionario (M ou F): ");
  scanf(" %c", &f->sexo); // Lê um caractere da entrada padrão e armazena no campo sexo da variável apontada por f
  printf("Digite o salario do funcionario: ");
  scanf("%f", &f->salario); // Lê um real da entrada padrão e armazena no campo salario da variável apontada por f
  printf("Digite o tempo de servico do funcionario em anos: ");
  scanf("%d", &f->tempo); // Lê um inteiro da entrada padrão e armazena no campo tempo da variável apontada por f
}

// Declara uma função que recebe um ponteiro para uma variável do tipo struct funcionario e retorna um float
// Essa função é responsável por calcular o salário mais benefícios de um funcionário
float calcularSalarioBeneficios(struct funcionario *f) {
  float beneficios = 0.0; // Declara uma variável local do tipo float que armazena o valor dos benefícios
  if (f->sexo == 'M') { // Se o sexo do funcionário for masculino
    beneficios = f->salario * 0.1; // Os benefícios são 10% do salário
  }
  else if (f->sexo == 'F') { // Se o sexo do funcionário for feminino
    beneficios = f->salario * 0.15; // Os benefícios são 15% do salário
  }
  return f->salario + beneficios; // Retorna o salário mais os benefícios
}

// Declara uma função que recebe um ponteiro para uma variável do tipo struct funcionario e retorna um float
// Essa função é responsável por calcular o bônus de aniversário por tempo de serviço de um funcionário
float calcularBonus(struct funcionario *f) {
  float bonus = 0.0; // Declara uma variável local do tipo float que armazena o valor do bônus
  if (f->tempo >= 10) { // Se o tempo de serviço for maior ou igual a 10 anos
    bonus = f->salario * 0.2; // O bônus é 20% do salário
  }
  else if (f->tempo >= 5) { // Se o tempo de serviço for maior ou igual a 5 anos e menor que 10 anos
    bonus = f->salario * 0.1; // O bônus é 10% do salário
  }
  else { // Se o tempo de serviço for menor que 5 anos
    bonus = f->salario * 0.05; // O bônus é 5% do salário
  }
  return bonus; // Retorna o bônus
}

// Declara a função principal do programa
int main(void) {
  // Declara um vetor de variáveis do tipo struct funcionario chamado funcionarios com tamanho MAX
  struct funcionario funcionarios[MAX];
  // Declara uma variável local do tipo int chamada n que armazena o número de funcionários cadastrados
  int n = 0;
  // Declara uma variável local do tipo int chamada opcao que armazena a opção escolhida pelo usuário
  int opcao;
  // Declara uma variável local do tipo int chamada i que será usada como índice nos laços de repetição
  int i;
  // Inicia um laço de repetição que se encerra quando a opção for igual a 3
  do {
    // Imprime na tela o menu de opções
    printf("Escolha uma opcao:\n");
    printf("1 - Cadastrar funcionario\n");
    printf("2 - Listar funcionarios\n");
    printf("3 - Sair\n");
    // Lê um inteiro da entrada padrão e armazena na variável opcao
    scanf("%d", &opcao);
    // Inicia uma estrutura de seleção que executa um bloco de código de acordo com a opção escolhida
    switch (opcao) {
      case 1: // Se a opção for igual a 1
        if (n < MAX) { // Se o número de funcionários for menor que o máximo permitido
          cadastrar(&funcionarios[n]); // Chama a função cadastrar passando o endereço da n-ésima posição do vetor 
                                       // funcionarios como argumento
          n++; // Incrementa o número de funcionários em uma unidade
          printf("Funcionario cadastrado com sucesso!\n"); // Imprime na tela uma mensagem de confirmação
        }
        else { // Se o número de funcionários for igual ou maior que o máximo permitido
          printf("Limite de funcionarios atingido!\n"); // Imprime na tela uma mensagem de erro
        }
        break; // Encerra o caso 1
      case 2: // Se a opção for igual a 2
        if (n > 0) { // Se o número de funcionários for maior que zero
          printf("Lista de funcionarios:\n"); // Imprime na tela um cabeçalho da lista
          // Inicia um laço de repetição que percorre todos os funcionários cadastrados
          for (i = 0; i < n; i++) {
            // Imprime na tela os dados do i-ésimo funcionário usando as funções calcularSalarioBeneficios e 
            // calcularBonus para obter os valores correspondentes
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Idade: %d\n", funcionarios[i].idade);
            printf("Sexo: %c\n", funcionarios[i].sexo);
            printf("Salario: %.2f\n", funcionarios[i].salario);
            printf("Tempo de servico: %d\n", funcionarios[i].tempo);
            printf("Salario mais beneficios: %.2f\n", calcularSalarioBeneficios(&funcionarios[i]));
            printf("Bonus de aniversario: %.2f\n", calcularBonus(&funcionarios[i]));
            printf("------------------------\n"); // Imprime na tela uma linha separadora
          }
        }
        else { // Se o número de funcionários for igual a zero
          printf("Nenhum funcionario cadastrado!\n"); // Imprime na tela uma mensagem de aviso
        }
        break; // Encerra o caso 2
      case 3: // Se a opção for igual a 3
        printf("Saindo do programa...\n"); // Imprime na tela uma mensagem de despedida
        break; // Encerra o caso 3
      default: // Se a opção for diferente das anteriores
        printf("Opcao invalida!\n"); // Imprime na tela uma mensagem de erro
        break; // Encerra o caso default
    }
  } while (opcao != 3); // Repete o laço enquanto a opção for diferente de 3
  return 0; // Retorna zero indicando que o programa terminou sem erros
}
