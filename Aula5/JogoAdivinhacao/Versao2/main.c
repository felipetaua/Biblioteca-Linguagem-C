#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Versão 2.0 do game adivinhação
// Criando uma mensagem inicial
// Definir as variáeis
// Criar o laço de tentativas com as verificações

int main() {
  // Mensagem de boas vindas
  printf("Seja bem vindo ao jogo da adivinhação");

  // Gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numeroSecreto =
      numero %
      100; // % é o resto da divisão, com o 100 voce consegue 2 casas decimais
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  // Construindo o loop de repetição
  while (ganhou == 0) {
    printf("--tentativa %d --\n", tentativas);
    printf("Digite seu chute: \n");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;

    // Verificando os valores do chutes
    if (acertou) {
      printf("\nParabéns voce acertou!!!\n");
      ganhou = 1;
    } else if (maior) {
      printf("Seu chute foi maior que o numero secreto\n");
    } else {
      printf("Seu chute foi menor que o numero secreto\n");
    }
    tentativas++;
  }
  return 0;
}