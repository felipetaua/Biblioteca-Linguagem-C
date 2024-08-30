#include <stdio.h>

int main() {
  // Declarando as variaveis
  int numeros[5]; // array de inteiros com 5 elementos(tem que especificar a quantidade de elementos)
  int soma = 0;  // Variavel que recebe a soma dos inteiros
  int i;         // Iterador do for

  //Entrada de dados: Preenchendo o array
  printf("Digite os 5 numeros do array: \n");
  for(i=0 ; i<5; i++) {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numeros[i]); // ele esta pegando os valores que o usuario digitou
  }

  // Calculo dos elementos do Array
  for(i=0; i<5; i++) {
    soma += numeros[i];
  }

  // Exibindo o resultado
  printf("A soma dos numeros é: %d\n", soma);
  return 0;
}