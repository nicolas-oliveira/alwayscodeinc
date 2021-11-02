#include <stdio.h>
#include <malloc.h>
// ┌─┐
// └─┘
int main() {
  // Na primeira parte da primeira linha é criado a variável y:
  // int* y
  // ┌────────────────────┐
  // │        ┌─────┐     │
  // │ 0940 y │     │	    │
  // │        └─────┘     │
  // └────────────────────┘
  // Na segunda parte da primeira linha é alocado a memória
  // no tamamanho de um inteiro:
  //  malloc(sizeof(int));
  // ┌───────────────────────────────┐
  // │        ┌─────┐       ┌─────┐  │
  // │ 0940 y │     │	 2200 │     │  │
  // │        └─────┘       └─────┘  │
  // └───────────────────────────────┘
  // Quando for retornado o endereço alocado, é feito o casting
  // com o valor do endereço correspondente:
  // (int*)
  // ┌─────────────────────────────────┐
  // │        ┌──────┐        ┌─────┐  │
  // │ 0940 y │ 2200 │	 2200 │     │  │
  // │        └──────┘        └─────┘  │
  // └─────────────────────────────────┘
  int* y = (int*) malloc(sizeof(int));
  // Em seguida é direcionado o valor '20' para a memória apontada por y:
  // ┌────────────────────────────────┐
  // │        ┌──────┐        ┌────┐  │
  // │ 0940 y │ 2200 │	 2200 │ 20 │  │
  // │        └──────┘        └────┘  │
  // └────────────────────────────────┘
  *y = 20;
  // A variável z serve como comparação para indicar o valor do inteiro
  // ┌────────────────────────────────┐
  // │        ┌──────┐        ┌────┐  │
  // │ 0940 y │ 2200 │	 2200 │ 20 │  │
  // │        └──────┘        └────┘  │
  // │        ┌───┐                   │
  // │ 0936 y │ 4 │                   │
  // │        └───┘                   │
  // └────────────────────────────────┘
  int z = sizeof(int);

  printf("*y = %i\n z = %i\n", *y, z);
}