#include <stdio.h>
// Versão 1.0 do game adivinhação
// Criando uma mensagem inicial
// Definir as variáeis
// Criar o laço de tentativas com as verificações

int main() {
  printf("---BEM VINDO AO JOGO DA ADVINHAÇÂO---\n");
  printf("    Você tem apenas 3 tentativas     \n");
  printf("    Meu número está entre 0 e 10     \n");
  printf("_____________________________________\n");

  // Variáveis
  int numeroSecreto = 7;
  int chute;

  // Iniciando o FOR
  for (int i = 1; i <= 3; i++) {
    printf("Qual é seu chute: ");
    scanf("%d", &chute);

    // Verificando o chute digitado
    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);
    int menor = (chute < numeroSecreto);
    if (acertou) {
      printf("Parabens você acertou\n");
      break; // Encerrando o laço FOR;
    } else if (maior) {
      printf("Seu chute foi maior que o número Secreto\n");
    } else if (menor) {
      printf("Seu chute foi menor que o número Secreto\n");
    }
    printf("Tentativa %d\n", i);
  }
  printf("Fim das tentativas\n");
  return 0;
}