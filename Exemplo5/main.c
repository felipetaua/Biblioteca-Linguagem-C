#include <stdio.h>

// Fazendo o produto de dois números
int main(void) {
  
  // Declarando as variáveis
  float num1, num2, resultado;
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  // Calculo
  resultado = num1 * num2;

  // Saida do Resultado
  printf("O resultado da operação é: %f\n", resultado);
  return 0;
}
