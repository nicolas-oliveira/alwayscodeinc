#include <stdio.h>

#define alturaMaxima 255;

typedef struct {
  int peso;
  int altura;
} PesoAltura;

int main() {
  PesoAltura pessoa1;
  
  pessoa1.peso = 80;
  pessoa1.altura = 185;

  printf("pessoa1: {\n  Peso: %i\n  Altura: %i\n}\n", pessoa1.peso, pessoa1.altura);

  return 0;
}