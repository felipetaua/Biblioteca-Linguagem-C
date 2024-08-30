#include <stdio.h>

// Fazendo o produto de dois números
int main(void) {
  
  // Declarando as variáveis
  int num1, num2, resultado;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  // Calculo
  resultado = num1 * num2;

  // Saida do Resultado
  printf("O resultado da operação é: %d\n", resultado);
  return 0;
}