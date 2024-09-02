#include <stdio.h>

int main(void) {
  char nome[50]; // Array para armazenar o nome do tipo char(string) 
  int idade; // Variável inteira para idade
  float altura; // Variável float para altura


  //Entradas do usuário
  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin); // Le a entrada do usuario (outro exemplo de printf diferente)
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua altura: ");
  scanf("%f", &altura);

  // Saida dos dados
  printf("\n-------Dados Informados-------\n");
  printf("Nome: %s", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  return 0;
}