#include <stdio.h>

int main(void) {
  // Declarando as variáveis
  float num1, num2, num3, media;

  // Entrada de informações
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  printf("Digite o terceiro numero: ");
  scanf("%f", &num3);

  // Calculo da média
  media = (num1 + num2 + num3) / 3;

  // Exibindo o resultado
  printf("A média da sequencia de tres numeros é: %.2f\n", media);
  return 0;
}