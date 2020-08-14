#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"
// Exemplo de "TAD": Um ponto definido por suas coordenadas "x" e "y"
// Definição da estrutura


int main() {
  float d;
  Ponto *p, *q;

  p = pto_cria(10,21);
  q = pto_cria(7,25);

  d = pto_distancia(p,q);
  printf("Distancia entre pontos: %.2f\n", d);
  pto_libera(q);
  pto_libera(p);

  return 0;
}