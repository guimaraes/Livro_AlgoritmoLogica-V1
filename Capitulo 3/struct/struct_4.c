// Declara uma função que recebe duas variáveis do tipo struct pessoa e
// retorna uma variável do mesmo tipo
struct pessoa comparar(struct pessoa p1, struct pessoa p2) {
  // Se a idade de p1 for maior que a idade de p2, retorna p1
  if (p1.idade > p2.idade) {
    return p1;
  }
  // Senão, retorna p2
  else {
    return p2;
  }
}

 