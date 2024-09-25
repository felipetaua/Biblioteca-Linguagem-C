#include <stdio.h>
#include <string.h>

int main(void) {
  // Declarando um array de string
  char string[100] =
      "Olá Mundo os estudantes do tds estão estudando a linguagem C";

  // Utilizando o método strlen
  int tamanho = strlen(string);
  printf("O comprimento da string é: %d\n", tamanho);

  // Utilizando o método strcpy
  char strCopy[100] = "Olá TDS";
  strcpy(strCopy, string);
  printf("\nCópia da sting %s\n", strCopy);

  // Método strcat
  char str2[100] = "Programando em C";
  strcat(string, str2);
  printf("\nString concatenada: %s\n", string);

  // Método strcmp comparando duas strings
  int comparacao = strcmp(string, strCopy);
  printf("\nValor da compraração: [%d] ", comparacao);
  if (comparacao == 0) {
    printf("As strings são iguais\n");
  } else {
    printf("As strings são diferentes\n");
  }

  // Exemplo de como manipular arrays de inteiros
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr);
  printf("\nO tamnho do array é: %d", n);
  return 0;
}