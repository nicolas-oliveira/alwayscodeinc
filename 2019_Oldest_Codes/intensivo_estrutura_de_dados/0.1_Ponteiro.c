#include <stdio.h>

int main() {
  // A variável x é inicializada com o valor 25
  // ┌──────────────────┐
  // │        ┌──────┐  │
  // │ 0940 x │  25  │  │
  // │        └──────┘  │
  // └──────────────────┘
  int x = 25; // Declaração da variável inteiro

  // A variável recebe o endereço onde está a variável x.
  // O operador '&' retorna a referência do endereço de memória de 'x'
  // ┌──────────────────┐
  // │        ┌──────┐  │
  // │ 0940 x │  25  │  │
  // │        └──────┘  │
  // │        ┌──────┐  │
  // │ 0936 y │ 0940 │  │
  // │        └──────┘  │
  // └──────────────────┘
  int* y = &x; // Declaração do tipo ponteiro para inteiro

  // Coloca-se o valor 30 na posição de memória referenciada pelo 
  // endereço armazenado em y
  // ┌──────────────────┐
  // │        ┌──────┐  │
  // │ 0940 x │  30  │  │
  // │  ^     └──────┘  │
  // │        ┌──────┐  │
  // │ 0936 y │ 0940 │  │ <= *y = 30
  // │        └──────┘  │
  // └──────────────────┘
  *y = 30; // Atribuição para a memória referenciada em y
  
  printf("Valor atual de x: %i\n", x);

  return 0;
}