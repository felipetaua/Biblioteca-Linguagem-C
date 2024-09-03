#include <math.h> // Importando a biblioteca de matematica
#include <stdio.h>

int main() {
  // Criando vairáveis
  float a, b, c; // Lados do triangulo
  
  // Entrada de dados
  printf("Digite o valor do primeiro lado(b): ");
  scanf("%f", &b);
  
  printf("Digite o valor do zegundo lado(c): ");
  scanf("%f", &c);
  
  // Calculando o valor de a 
  a = sqrt((b*b)+(c*c));
  
  // Resultado 
  prinf("A Hipotenusa do triangulo é: %.1f\n", a);
  return 0;
}