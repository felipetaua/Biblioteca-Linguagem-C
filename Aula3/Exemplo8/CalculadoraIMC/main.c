#include <stdio.h>

int main(void) {
  // Variáveis
  float peso, altura, imc;

  // Entrada de dados
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  printf("Digite sua altura: ");
  scanf("%f", &altura);

  // Processamento das informações
  imc = peso / (altura * altura);

  // Exibir IMC
  printf("Seu IMC é: %.2f\n", imc);

  // Classificando o seu IMC
  if (imc < 18.5) {
    printf("Classificação: Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 24.9) {
    printf("Classificação: Peso Nomal\n");
  } else if (imc >= 25 && imc < 29.9) {
    printf("Classificação: Sobrepeso\n");
  } else {
    printf("Classificação: Obesidade\n");
  }
  return 0;
}