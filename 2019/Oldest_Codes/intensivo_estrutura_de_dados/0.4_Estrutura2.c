#include <stdio.h>
#include <malloc.h>

#define alturaMaxima 255;

typedef struct {
  int peso;
  int altura;
} PesoAltura;

int main() {
  // Declaração do ponteiro para a estrutura do tipo PesoAltura:
  // PesoAltura* pessoa1
  // ┌──────────────────────────┐
  // │       ┌─────┐            │
  // │pessoa1│     │            │
  // │       └─────┘            │
  // │                          │
  // └──────────────────────────┘
  // Ocorre na segunda parte da primeira linha a alocação da memória
  // para a estrutura PesoAltura:
  // malloc(sizeof(PesoAltura));
  // ┌────────────────────────────┐
  // │       ┌──────┐     ┌──────┐│
  // │pessoa1│      │ 7408│  ??  ││
  // │       └──────┘     │  ??  ││
  // │                    └──────┘│
  // └────────────────────────────┘
  // Após retornar o valor do endereço de memória, a variável declarada recebe
  // o valor do endereço criado na estrutura:
  // (PesoAltura*)
  // ┌───────────────────────────┐
  // │       ┌──────┐     ┌─────┐│
  // │pessoa1│ 7408 │ 7408│  ?  ││
  // │       └──────┘     │  ?  ││
  // │                    └─────┘│
  // └───────────────────────────┘
  PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
  // Os valores são atribuídos através do '->' que faz referência à estrutura
  // criada através do ponteiro:
  // ┌─────────────────────────────┐
  // │       ┌──────┐       ┌─────┐│
  // │pessoa1│ 7408 │-> 7408│  80 ││
  // │       └──────┘       │ 185 ││
  // │                      └─────┘│
  // └─────────────────────────────┘
  pessoa1->peso = 80;
  pessoa1->altura = 185;

  printf("pessoa1: {\n  Peso: %i\n  Altura: %i\n}\n", pessoa1->peso, pessoa1->altura);

  return 0;
}