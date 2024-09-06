#include <stdio.h>

int main(void) {
  int i = 0, s = 0;
  //While vai somar os 100 primeiros números
  while (i <= 100) {
    s = s + i;
    i++;
  }
  printf("Resultado dos 100 primeiros numeros é: %d", s);
  return 0;
}