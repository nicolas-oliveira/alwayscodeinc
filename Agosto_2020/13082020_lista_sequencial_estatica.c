// As documentações da implementação estão nos arquivos '.h' correspondentes
// algumas ide's irão identificar automaticamente as informações dos escopos.
// Para compilar a implementação talvez seja necessário acescentar o parâmetro
// '-lm' no gcc.
#include <stdio.h>
#include "lista_sequencial_estatica.h"

int main() {
  // Criação da lista
  Lista *li = cria_lista();
  Aluno *al = cria_aluno();

  al->matricula = 166;
  int erro = insere_lista_inicio(li, li->dados);
  return 0;
}