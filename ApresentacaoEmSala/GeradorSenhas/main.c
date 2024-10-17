#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// * é um ponteiro, se não possuir perde o valor na memória
void senhaGerada(int tamanho, char * senha, const char * caracteres) {
  for(int i = 0; i < tamanho; i++) {
    int indice = rand() % strlen(caracteres);
    senha[i] = caracteres[indice];
  }
  senha[tamanho] = '\0';
}
int main() {
  int tamanho;
  char senha[100];
  char caracteres[] = "QWERTYUIOPASDFGHJKLÇZXCVBNMqwertyuiopçlkjhgfdsazxcvbnm1234567890-[];.,º|!@#$%*()_+}";

  srand(time(NULL)); // ele está resetando tempo para função continuar sorteando
  
  printf("\n--- BEM-VINDO AO GERADOR DE SENHAS ---\n");
  printf("Digite o tamanho da sua senha: ");
  scanf("%d", &tamanho);

  senhaGerada(tamanho, senha, caracteres);
  printf("A sua senha gerada foi: %s", senha);
  
  return 0;
}
