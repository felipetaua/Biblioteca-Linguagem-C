#include <stdio.h>

int main() {
  // Declarando Variáveis
  int num1, num2, soma;

  // Entrada de dados
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  // Calculo da soma
  soma = num1 + num2;

  // Saída do resultado
  printf("A soma de %d e %d é: %d\n", num1, num2, soma);
  return 0;
}