// Declara uma variável do tipo matriz de int chamada 
// numeros e atribui a ela os valores 1, 2, 3 na primeira 
// linha e 4, 5, 6 na segunda linha
int numeros[2][3] = {{1, 2, 3}, {4, 5, 6}};
// Imprime na tela o valor da variável numeros como uma tabela
printf("Os números são:\n");
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    printf("%d ", numeros[i][j]);
  }
  printf("\n");
}

