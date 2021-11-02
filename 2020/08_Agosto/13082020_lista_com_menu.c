// Este é um algoritmo criado a partir do livro:
// "Estruturas de dados, Algoritmos e análise da complexidade e implementações 
// em JAVA e C/C++" de Ana Fernanda e Gomes Ascencio. Página 128. 

// Este algoritmo é o mais simples entre todas as estruturas de dados mais simples. 
// Tem uma grande gama de repetições if e else porém é mais fácil de compreender.
#include <stdio.h>
#include <stdlib.h>

typedef struct LISTA LISTA;

// Definimos um nó (struct) que representa cada elemento da lista
struct LISTA {
  int num;
  LISTA *prox;
};



int main() {
  // A lista está vazia, logo, o ponteiro inicio têm valor NULL
  // o ponteiro 'inicio' conterá o endereço do primeiro elemento da lista
  LISTA *inicio = NULL;

  // o ponteiro 'fim' conterá o endereço do último elemento da lista
  LISTA *fim = NULL;
  
  // o ponteiro 'aux' é um ponteiro auxiliar
  LISTA *aux;
  
  // o ponteiro anterior é um ponteiro auxiliar
  LISTA *anterior;

  // variáveis do menu de opções
  int op, numero, achou;

  // repetição do menu de opções
  do {
    system("clear");
    
    printf("\nMENU DE OPÇÕES\n");
    printf("\n1 - INSERIR NO INICIO");
    printf("\n2 - INSERIR NO FIM");
    printf("\n3 - CONSULTAR TODA A LISTA");
    printf("\n4 - REMOVER DA LISTA");
    printf("\n5 - ESVAZIAR A LISTA");
    printf("\n6 - SAIR");
    printf("\n    DIGITE SUA OPÇÂO: ");
    scanf("%d", &op);

    // Qualquer opção fora dessa condição é inválida
    if (op < 1 || op > 6) printf("OPCAO INVALIDA");
    
    // Condição que insere no começo
    if (op == 1) {
      printf("DIGITE O NUMERO A SER INSERIDO NO INICIO DA LISTA:");

      LISTA *novo;
      novo = (LISTA*) malloc(sizeof(struct LISTA)); 
      
      scanf("%d", &novo->num);

      if (inicio == NULL) {
        // A lista estava vazia e o elemento inserido será o primeiro e o último
        inicio = novo;
        fim = novo;
        fim->prox = NULL;
    
      } else {
        // A lista já contém elementos e o novo elemento será inserido no início
        novo->prox = inicio;
        inicio = novo;
      }

      printf("NUMERO INSERIDO NO INICIO DA LISTA");
    }

    // Condição que insere no fim
    if (op == 2) {
      printf("DIGITE O NUMERO A SER INSERIDO NO FIM DA LISTA:");
      LISTA *novo = new LISTA();
      scanf("%d", &novo->num);
    
      if (inicio == NULL) {
        // A lista estava vazia e o elemento inserido será o primeiro e o ultimo
        inicio = novo;
        fim = novo;
        fim->prox = NULL;
    
      } else {
        // A lista já contém elementos e o novo elemento será inserido no fim
        fim->prox = novo;
        fim = novo;
        fim->prox= NULL;
      }
      
      printf("NUMERO INSERIDO NO FIM DA LISTA");
    }

    // Condição que consulta a lista
    if (op == 3) {
      if (inicio == NULL) {
        printf("LISTA VAZIA!!");
    
      } else {
        printf("\nCONSULTANDO TODA A LISTA\n");
        aux = inicio;

        // A lista contém elementos e estes serão mostrados do inicio ao fim
        while (aux != NULL) {
          printf("%d ", aux->num);
          aux = aux->prox;
        }
      }
    }

    // Condição que remove um elemento da lista
    if (op == 4) {
      if (inicio == NULL) {
        printf("LISTA VAZIA!!");
    
      } else {
        // Todas as ocorrências da lista, iguais ao número digitado, serão removidas  
        printf("\nDIGITE O ELEMENTO A SER REMOVIDO:");
        scanf("%d", &numero);

        aux = inicio;
        anterior = NULL;
        achou = 0;

        while (aux != NULL) {
          if (aux->num == numero) {
            achou++;

            if (aux == inicio) {
              inicio = aux->prox;
              free(aux);
              aux = inicio;
            
            } else if (aux == fim) {
              anterior->prox = NULL;
              fim = anterior;
              free(aux);
              aux = NULL;
            
            } else {
              anterior->prox = aux->prox;
              free(aux);
              aux = anterior->prox;

            }
          } else {
            anterior = aux;
            aux = aux->prox;
          }
        }

        if (achou == 0)
          printf("NUMERO NAO ENCONTRADO");
        else if (achou == 1)
          printf("NUMERO REMOVIDO 1 VEZ");
        else
          printf("NUMERO REMOVIDO %d VEZES", achou);
      }
    }

    // Condição que esvazia toda a lista
    if (op == 5) {
      if (inicio == NULL) {
        printf("LISTA VAZIA");
      } else {
        aux = inicio;

        while (aux != NULL) {
          inicio = inicio->prox;
          free(aux);
          aux=inicio;
        }
        printf("LISTA ESVAZIADA");
      }
    }
  
  } while (op != 6);
  return 0;
}