#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definindo uma estrutura para armazenar os dados do cliente
struct Cliente {
  char nome[100];
  int idade;
  char endereco[150];
  char cidade[50];
  char estado[50];
  char fone[50];
};

int main(void) {
  struct Cliente cliente;
  FILE *arquivo;
  printf("----- Cadastro de Clientes Inteligente -----\n");
  
  // Solicitando o nome do cliente
  printf("Digite o nome do cliente:\n ");
  fgets(cliente.nome, 100, stdin);
  cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

  // Solicitando a idade do cliente
  printf("Digite a idade do cliente: ");
  scanf("%d", &cliente.idade);
  getchar(); // limpando o valor de mamoria do scanf (buffer)

  // Solicitando o endereco do cliente
  printf("Digite o endereço do cliente: ");
  fgets(cliente.endereco, 150, stdin);
  cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';// remove o espaço em branco

  // Solicitando a cidade do cliente
  printf("Digite a cidade do cliente: ");
  fgets(cliente.cidade, 50, stdin);
  cliente.cidade[strcspn(cliente.cidade, "\n")] = '\0';

  // Solicitando o estado do cliente
  printf("Digite o estado do cliente: ");
  fgets(cliente.estado, 50, stdin);
  cliente.estado[strcspn(cliente.estado, "\n")] = '\0';

  // Solicitando o número do cliente
  printf("Digite o Número do cliente: ");
  fgets(cliente.fone, 50, stdin);
  cliente.fone[strcspn(cliente.fone, "\n")] = '\0';

  // Salvando os dados no arquivo
  arquivo = fopen("cliente.txt", "a");
    if(arquivo == NULL) {
      printf("Erro a abrir o arquivo \n");
      return 1;
    }

  // Gravando os dados no arquivo
  fprintf(arquivo, "\nNome: %s\n Idade: %d\n Endereço: %s\n Cidade: %s\n Estado: %s\n Numero %s", cliente.nome, cliente.idade, cliente.endereco, cliente.cidade, cliente.estado, cliente.fone );
  fclose(arquivo);
  printf("Dados do cliente salvos");
  
  // Exibindo os dados digitados
  printf("----- Exibindo os dados digitados -----\n");
  printf("Nome: %s\n", cliente.nome);
  printf("Idade: %d\n", cliente.idade);
  printf("Edereço: %s\n", cliente.endereco);
  printf("Cidade: %s\n", cliente.cidade);
  printf("Estado: %s\n", cliente.estado);
  printf("Numero: %s\n", cliente.fone);

  return 0;
}