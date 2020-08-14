// Uma estrutura do tipo "Lista" é uma sequência de elementos do mesmo tipo
// Seus elementos possuem estrutura interna abstraída, ou seja, sua complexidade
// é arbritária e não afeta o seu funcionamento.

// Uma "lista" pode possuir n (n >= 0) elementos
// se n = 0 , dizemos que a "lista está vazia"

// Lista sequencial estática ou Lista Linear Estática:
// Tipo de Lista onde o sucessor de um elemento ocupa a posição
// física seguinte do mesmo (uso de array)
//
// +---+---+
// |   3   |─────────┐
// +---+---+         │
//                  🮝🮜
// +----+----+----+----+----+----+   
// | 33 | 23 | 16 |    |    |    | MAX-1
// +----+----+----+----+----+----+
//
// Desvantagens do uso de arrays:
// - Definição prévia do tamanho do array
// - Dificuldade para inserir e remover um elemento entre outros dois:
// é necessário deslocar os elementos
// INSERIR
// +----+----+----+----+----+----+   
// | 33 | 23 | 16 |    |    |    | MAX-1
// +----+----+----+----+----+----+
//        └────┐└────┐  
//            🮝🮜   🮝🮜
// +----+----+----+----+----+----+   
// | 33 | 12 | 23 | 16 |    |    | MAX-1
// +----+----+----+----+----+----+

#include <stdio.h>
#include <cstdlib>
#define MAX 100

struct aluno {
  int matricula;
  char nome[30];
  float n1,n2,n3;
};

typedef struct lista Lista;

struct lista {
  int qtd;
  struct aluno dados [MAX];
};

Lista *li;

Lista* cria_lista() {
  Lista *li;
  li = (Lista*) malloc(sizeof(struct lista));

  if(li != NULL)
    li->qtd = 0;

  return li;
}

void libera_lista(Lista* li) {
  free(li);
}

// Implementação que retorna o tamanho da lista estática
int tamanho_lista(Lista* li) {
  if(li == NULL)
    return -1;
  else 
    return li->qtd;
}

// Implementação que verifica se a lista está cheia
int lista_cheia(Lista* li) {
  if(li == NULL)
    return -1;
  return (li->qtd == MAX); // Retorna verdadeiro ou falso
}

// Implementação que verifica se a lista está vazia
int lista_vazia(Lista* li) {
  if(li == NULL)
    return -1;
  return (li->qtd == 0); // Retorna verdadeiro ou falso
}