#include <stdio.h>
#include <string.h>

int main(void) {
  char palavraSecreta[20];
  sprintf(palavraSecreta, "MELANCIA");
  int totalLetras = strlen(palavraSecreta);

  int acertou = 0;
  int enforcou = 0;
  char chutes[20];
  int tentativas = 0;

  // Abertura do jogo
  printf("----BEM VINDO AO JOGO DA FORCA-----\n");
  printf("Digite uma letra: \n");

  do {
    for (int i = 0; i < totalLetras; i++) {
      int achou = 0;
      for (int j = 0; j < tentativas; j++) {
        if (chutes[j] == palavraSecreta[i]) {
          achou = 1;
          break;
        }
      }
      if (achou) {
        printf("%c", palavraSecreta[i]);
      } else {
        printf("_ ");
      }
    }
    printf("\n");
    char chute;
    scanf("%c", &chute);
    tentativas++;
    chutes[tentativas] = chute;

  } while (!acertou && !enforcou);
  return 0;
}