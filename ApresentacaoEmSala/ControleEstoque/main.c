#include <stdio.h>  // biblioteca padrão
#include <stdlib.h> // biblioteca para gerar arquivo
#include <string.h> // biblioteca de string

// definindo estrutura para armazenar arquivos
typedef struct {
  char descricao[100];
  float valor;
  int quantidade;
} Produto;

void salvarProduto(Produto c) {
  FILE *arquivo = fopen("contatos.txt", "a");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return;
  } //%f pode precisar de alteração
  fprintf(arquivo, "Descrição: %s,\nValor: %.2f,\nQuantidade: %d.\n\n",
          c.descricao, c.valor, c.quantidade);
  fclose(arquivo);
}

void listarProdutos() {
  FILE *arquivo = fopen("contatos.txt", "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return;
  }

  char linha[70];
  while (fgets(linha, sizeof(linha), arquivo)) {
    printf("%s", linha);
  }
  fclose(arquivo);
}

void cadastrarProduto(Produto c) {
  printf("\n");
  printf("---------------Cᴀᴅᴀsᴛʀᴀʀ ᴘʀᴏᴅᴜᴛᴏ---------------\n");
  printf("Descrição: ");
  fgets(c.descricao, sizeof(c.descricao), stdin);
  c.descricao[strcspn(c.descricao, "\n")] = 0; // Remove o '\n'

  printf("Valor: ");
  scanf("%f", &c.valor);
  // c.nome[strcspn(c.nome, "\n")] = 0; // Remove o '\n'

  printf("Quantidade: ");
  scanf("%d", &c.quantidade);
  // c.nome[strcspn(c.nome, "\n")] = 0; // Remove o '\n'
  printf("\n");
}

int main() {
  Produto c;
  int opcao;

  // solicitando a opcao

  do {
    printf("---------------Mᴇɴᴜ ᴅᴇ Oᴘᴄ̧ᴏ̃ᴇs---------------\n");
    printf("1. Cadastrar Produto\n2. Listar produtos\n3. Sair\nEscolha uma "
           "opção: ");
    scanf("%d", &opcao);
    getchar(); // para consumir o \n após o numero

    switch (opcao) {
    case 1:
      cadastrarProduto(c);
      salvarProduto(c);
      break;

    case 2:
      printf("\n---------------Lɪsᴛᴀ ᴅᴇ ᴘʀᴏᴅᴜᴛᴏs---------------\n");
      listarProdutos();
      break;

    case 3:
      printf("\n");
      printf("──────▄▀▄─────▄▀▄\n");
      printf("─────▄█░░▀▀▀▀▀░░█▄\n");
      printf("─▄▄──█░░░░░░░░░░░█──▄▄\n");
      printf("█▄▄█─█░░▀░░┬░░▀░░█─█▄▄█\n");
      printf("\nsᴀɪɴᴅᴏ.........\n");
      break;

    default:
      printf("Opção Invalída");
    }
  } while (opcao != 3);

  return 0;
}
