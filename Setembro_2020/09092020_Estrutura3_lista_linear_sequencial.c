#include <stdio.h>
#include <malloc.h>
#include <stdbool.h> // Necessário para usar funções 'bool' -> C99

#define MAX 50

// Estrututra da lista
typedef struct {
  // Números inteiros da lista
  int A[MAX];
  // Contagem dos elementos
  int numeroElementos;
} Lista;

// Inicialização da lista
// Ocorre quando o número de elementos da lista
// é igual à 0.
void inicializarLista(Lista* l) {
  l->numeroElementos = 0;
}

// Basta liberar a lista indicando como 0 o numero de elementos.
void reinicializarLista(Lista* l) {
  l->numeroElementos = 0;
}

// Retorna o tamanho da lista
// Basta acessar o numero de elementos dentro da estrutura
int tamanho(Lista* l) {
  return l->numeroElementos;
}

void exibirLista(Lista* l) {
  int i;
  printf("Lista: \n");
  for(int i = 0; i < l->numeroElementos; i++) {
    printf("%i ", l->A[i]);;
  }
  printf("\n");
}

int busca(Lista* l, int reg) {
  for (int i = 0; i < l->numeroElementos; i++) {
    if(reg == l->A[i]) return i;
  }

  return -1;  
}
// Insere em qualque lugar válido da lista
// bool inserir(Lista, numero, posição);
bool inserir(Lista* l, int reg, int posic) {
  // Verifica as possibilidades de não poder inserir elementos na lista
  // Lista cheia: (l->numeroElementos == MAX)
  // Posição negativa (posic < 0)
  // Posição maior que o limite (posic > l->numeroElementos)
  if((l->numeroElementos == MAX) || (posic < 0) || (posic > l->numeroElementos))
    return false;

  // Desloca os elementos para liberar espaço na posição solicitada
  for(int j = l->numeroElementos; j > posic; j--)
    l->A[j] = l->A[j - 1];
  
  // Insere o elemento na posição
  l->A[posic] = reg;

  // Incrementa o número de elementos
  l->numeroElementos++;
  
  return true;
}

int main() {
  Lista* l = (Lista*) malloc(sizeof(Lista));

  inserir(l, 1, 0);
  inserir(l, 2, 1);
  inserir(l, 3, 2);
  inserir(l, 6, 1);
  printf("%i\n",busca(l,3));
  
  exibirLista(l);
}