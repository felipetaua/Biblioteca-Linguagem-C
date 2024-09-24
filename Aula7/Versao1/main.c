// Jogo forca testando o método de busca no Array
#include <stdio.h>
#include <string.h>

int main(void) {
  char palavraSecreta[20];
  sprintf(palavraSecreta, "MELANCIA");

  int acertou = 0;
  int enforcou = 0;
  int numeroDeLetras = strlen(palavraSecreta);

  printf("Digite uma letra: ");
  do {
    // Iniciando o jogo
    char chute;
    scanf("%c", &chute);
    
    int i = 0;
      for(i = 0; i < numeroDeLetras; i++) {
        if(palavraSecreta[i] == chute) {
          printf("A posição %d tem essa letra\n", i);
        }
      }
  } while(!acertou && !enforcou);
  return 0;
}