#include <stdio.h>
#include <malloc.h>
#include <stdbool.h> // Necessário para usar funções 'bool' -> C99

#define MAX 50
#define INVALIDO -1

typedef int KEY;

typedef struct {
  KEY chave;
} REGISTRO;

typedef struct {
  REGISTRO reg; // Numero qualquer de registro
  int prox; // Numero referente ao proximo elemento
} ELEMENTO;

typedef struct {
  ELEMENTO A[MAX]; // Estrutura 'ELEMENTO' de tamanho MAX
  int inicio; // primeiro elemento válido
  int disponivel; // primeiro elemento disponível
} LISTA;


// Inicializa a estrutura
void inicializarLista(LISTA* l) {
// Estrutura da lista quando inicializada:
// ┌─────────────────────────────────────────────────┐
// │           ┌─────┐     ┌─────┬─────┬─────┬─────┐ │
// │    inicio │ -1  │ A[] │     │     │     │     │ │
// │           ├─────┤     ├─────┼─────┼─────┼─────┤ │
// │disponível │  0  │     │  1  │  2  │  3  │ -1  │ │
// │           └─────┘     └─────┴─────┴─────┴─────┘ │
// └─────────────────────────────────────────────────┘
  // Percorre todos os elementos até o penultimo
  // indicando seu próximo
  // Dessa forma, começando do '0' -> 1, '1' -> 2 etc..
  for(int i = 0; i< MAX-1; i++)
    l->A[i].prox = i + 1;

  // Torna inválido o ultimo elemento
  l->A[MAX-1].prox = INVALIDO;

  // Torna inválido o inicio pois não há elementos na lista
  l->inicio = INVALIDO;

  // Indica que a partir do '0' todos os elementos estão disponíveis
  l->disponivel = 0;
}

// Retornar o número de elementos
int tamanho(LISTA* l) {
  int i = l->inicio;
  int tam;
  for(tam = 0; i != INVALIDO; tam++) {
    i = l->A[i].prox;
  }
  return tam;
}

// Exibir a lista
int imprimir(LISTA* l) {
  int i = l->inicio;
  printf("Lista: \n");
  while(i != INVALIDO) {
    printf("%i ", l->A[i].reg.chave);
    i = l->A[i].prox;
  }
  printf("\n");
}

int buscaSequencialOrd(LISTA* l, KEY ch) {
  int i = l->inicio;
  while (i != INVALIDO && l->A[i].reg.chave < ch)
    i = l->A[i].prox;
  if(i != INVALIDO && l->A[i].reg.chave == ch)
    return i;
  else return INVALIDO;
}

// Função auxiliar para inserção na lista
int obterNo(LISTA* l) {
  int resultado = l->disponivel;
  if (l->disponivel != INVALIDO)
    l->disponivel = l->A[l->disponivel].prox;
  return resultado;
}

// Inserção com ordenação
bool inserirElemListaOrd(LISTA* l, REGISTRO reg) {
  if (l->disponivel == INVALIDO) return false;

  int anterior = INVALIDO;
  int i = l->inicio; // ?? Tendi foi nada
  KEY ch = reg.chave;

  // Busca pelo elemento
  while ((i != INVALIDO) && (l->A[i].reg.chave < ch))  {
    anterior = i;
    i = l->A[i].prox;
  }

  // Não permitir duplicação
  if (i != INVALIDO && l->A[i].reg.chave == ch) return false; // ?? Tendi foi nada
  i = obterNo(l);
  l->A[i].reg = reg;

  // Ordenação?
  if (anterior == INVALIDO) {
    l->A[i].prox = l->inicio; // ?? Tendi foi nada
    l->inicio = i; // ?? Tendi foi nada
  } else { 
    l->A[i].prox = l->A[anterior].prox; // ?? Tendi foi nada
    l->A[anterior].prox = i; // ?? Tendi foi nada
  }
  return true;
}
// Auxiliar da exclusão
void devolverNo(LISTA* l, int j) {
  l->A[j].prox = l->disponivel;
  l->disponivel = j;
}
// Exclusão de um elemento
bool excluirElemLista(LISTA* l, KEY ch) {
  int anterior = INVALIDO;
  int i = l->inicio;
  // Busca pelo elemento
  while ((i != INVALIDO) && (l->A[i].reg.chave < ch))  {
    anterior = i;
    i = l->A[i].prox;
  }
  // Caso não encontre
  if (i == INVALIDO || l->A[i].reg.chave != ch) return false;
  if (anterior == INVALIDO) l->inicio = l->A[i].prox;
  else l->A[anterior].prox = l->A[i].prox;
  devolverNo(l,i);
  return true;
}

int main() {
  LISTA* l1 = (LISTA*) malloc(sizeof(LISTA));
  inicializarLista(l1);
  
  REGISTRO reg1;
  reg1.chave = 4;
  
  REGISTRO reg2;
  reg2.chave = 6;

  REGISTRO reg3;
  reg3.chave = 0;

  REGISTRO reg4;
  reg4.chave = 4;

  REGISTRO reg5;
  reg5.chave = 1;

  inserirElemListaOrd(l1, reg1);
  inserirElemListaOrd(l1, reg2);
  inserirElemListaOrd(l1, reg3);
  inserirElemListaOrd(l1, reg4);
  inserirElemListaOrd(l1, reg5);

  imprimir(l1);
  return 0;
}