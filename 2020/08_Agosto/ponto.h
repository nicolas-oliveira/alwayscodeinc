// Este é um arquivo modularizado para o arquivo '.c' chamado:
// 12082020_ponto.c
//
// Tem como objetivo explicar o Tipo Abstrato de dado (TAD)
//
// Definição do arquivo de acesso '.h'
// representa o conceito que é usado na implementação
// - Protótipos das funções
// - Representa os tipos dos ponteiros
// - Representa os dados globalmente acessíveis
#include <stdlib.h>
#include <math.h>

typedef struct ponto Ponto;

// Cria um novo ponto = equivalente ao fopen()
Ponto* pto_cria(float x, float y);

// Libera um ponto = equivalente ao fclose()
void pto_libera(Ponto* p);

// Acessa os valores "x" e "y" de um ponto
void pto_acessa(Ponto* p, float* x, float* y);

// Atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto* p, float x, float y);

// Calcula a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);

// Definição da estrutura 'ponto'
struct ponto {
  float x;
  float y;
};

// Função reponsável por criar o ponto
Ponto* pto_cria(float x, float y) {
  Ponto* p = (Ponto*) malloc(sizeof(Ponto));
  if(p != NULL) {
    p->x = x;
    p->y = y;
  }
  return p;
}

// Liberação da memória
void pto_libera(Ponto* p) {
  free(p);
}

// Acesso da memória semelhante ao fopen()
void pto_acessa(Ponto* p, float* x, float* y) {
  *x = p->x;
  *y = p->y;
}

// Atribuição do valor à estrutura
void pto_atribui(Ponto* p, float x, float y) {
  p->x = x;
  p->y = y;
}

// Função que calcula a distância
float pto_distancia(Ponto* p1, Ponto* p2) {
  float dx = p1->x - p2->x;
  float dy = p1->y - p2->y;
  return sqrt(dx * dx + dy * dy);
}