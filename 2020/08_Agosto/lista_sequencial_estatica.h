/*
 * Criado por Nicolas Oliveira em 2020
 * 
 * Esta é um biblioteca do programa em '.c' chamado:
 * 13082020_lista_sequencial_estatica.c
 * É uma abstração das funções encontradas no código implementado
 * 
 * Uma estrutura do tipo "Lista" é uma sequência de elementos do mesmo tipo.
 * 
 * Seus elementos possuem estrutura interna abstraída, ou seja, 
 * sua complexidade é arbritária e não afeta o seu funcionamento.
 * 
 * Uma "lista" pode possuir n (n >= 0) elementos
 * se n = 0 , dizemos que a "lista está vazia"
 * 
 * 
 * Lista sequencial estática ou Lista Linear Estática:
 * Tipo de Lista onde o sucessor de um elemento ocupa a posição
 * física seguinte do mesmo (uso de array)
 * +---+---+
 * |   3   |─────────┐
 * +---+---+         │
 *                  🮝🮜
 * +----+----+----+----+----+----+   
 * | 33 | 23 | 16 |    |    |    | MAX-1
 * +----+----+----+----+----+----+
 * 
 * Desvantagens do uso de arrays:
 * - Definição prévia do tamanho do array
 * - Dificuldade para inserir e remover um elemento entre outros dois:
 * é necessário deslocar os elementos
 * 
 * Para INSERIR é necessário que desloquemos os elementos
 * +----+----+----+----+----+----+   
 * | 33 | 23 | 16 |    |    |    | MAX-1
 * +----+----+----+----+----+----+
 *        └────┐└────┐  
 *            🮝🮜   🮝🮜
 * +----+----+----+----+----+----+   
 * | 33 | 12 | 23 | 16 |    |    | MAX-1
 * +----+----+----+----+----+----+
 *  
 * Basicamente existem 3 tipos de inserção e remoção que 
 * estão implementadas aqui:
 * - Inicio
 * - Meio
 * - Final
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Criação da estrutura aluno
struct aluno {
  int matricula;
  char nome[30];
  float n1,n2,n3;
};

// Definição da estrutura lista
struct lista {
  int qtd;
  struct aluno dados [MAX];
};

// Declaração da estrutura 'Lista'
typedef struct lista Lista;

// Declaração da estrutura 'Aluno' 
typedef struct aluno Aluno;

// Função responsável pela criação da lista. Na função não é necessário parâmetro porém necessita na implementação uma variável recebendo o retorno:
// ```
// Lista *li = cria_lista();
// ```
Lista* cria_lista();

// Função responsável pela criação de um novo aluno. Na função não é necessário parâmetro porém necessita na implementação uma variável recebendo o retorno:
// ```
// Aluno *al = cria_aluno();
// ```
Aluno* cria_aluno();

// Função responsável por liberar a memória da lista
void libera_lista(Lista* li);

// Função que , caso exista, retorna o tamanho da lista estática
// caso contrário retorna um erro `-1`
int tamanho_lista(Lista* li);

// Função que verifica se a lista está cheia
int lista_cheia(Lista* li);

// Função que verifica se a lista está vazia
// ```
// int erro = lista_vazia(lista);
// ```
int lista_vazia(Lista* li);

// Função que insere no final da lista estática
// ```
// int erro = insere_lista_final(lista, dados);
// ```
int insere_lista_final(Lista* li, struct aluno al);

// Função responsável por inserir no início da lista estática
// ```
// int erro = insere_lista_inicio(lista, dados);
// ```
int insere_lista_inicio(Lista* li, struct aluno al);

// Função responsável por inserir um dado na lista de forma ordenada
// ```
// int erro = insere_lista_ordenada(lista, dados);
// ```
int insere_lista_ordenada(Lista* li, struct aluno al);

// Função responsável por remover um elemento no final da lista
// ```
// int erro = remove_lista_final(lista);
// ```
int remove_lista_final(Lista* li);

// Função responsável por remover um elemento no início da lista
// int erro = remove_lista_incio(lista);
int remove_lista_incio(Lista* li);

// Função responsável por remover um elemento em qualquer posição da lista
// ```
// int erro = remove_lista(lista, dados);
// ```
int remove_lista(Lista* li, int mat);

// Função responsável por consultar um elemento em qualquer posição da lista
// ```
// int erro = consulta_lista_posic(lista, posição, dado_a_ser_pesquisado);
// ```
int consulta_lista_posic(Lista* li, int posic, struct aluno *al);
/*
 * Parte da implementação se encontra aqui
 * as funções estão abstraídas para facilitar 
 * a implementação em ".c"
 */

// Retorna o ponteiro do tipo de dado 'Lista' criado aqui
Lista* cria_lista() { 
  // Criação do ponteiro do tipo lista
  Lista *li; 
  // Alocação de memória do ponteiro e da struct criada
  li = (Lista*) malloc(sizeof(struct lista)); 

  // Verifica se o tipo de dado está vazio e define 
  // a quantidade em 0
  if(li != NULL) 
    li->qtd = 0;

  // Retorna o ponteiro do tipo de dado 'Lista'
  return li;
}

Aluno* cria_aluno() { 
  // Criação do ponteiro do tipo lista
  Aluno *al;

  // Alocação de memória do ponteiro e da struct criada
  al = (Aluno*) malloc(sizeof(struct aluno)); 

  // Retorna o ponteiro do tipo de dado 'Aluno'
  return al;
}

void mostra_lista(Lista* li, struct aluno al) {
  int i = 0;
  while(i < li->qtd) {
    printf("%d ", al.matricula);
  }
}

void libera_lista(Lista* li) {
  // Libera a memória alocada por malloc
  free(li); 
}

int tamanho_lista(Lista* li) {
  // Verifica se a lista existe 
  // Caso haja algum erro retorna -1, que indica erro
  if(li == NULL) return -1;
  else 
    return li->qtd;
}


int lista_cheia(Lista* li) {
  // Verifica se a lista existe 
  // Caso haja algum erro retorna -1, que indica erro
  if(li == NULL) return -1; 

  // Retorna verdadeiro ou falso (0 ou 1)
  return (li->qtd == MAX);
}


int lista_vazia(Lista* li) {
  // Caso haja algum erro retorna -1, que indica erro 
  if(li == NULL) return -1;

  // Retorna verdadeiro ou falso (0 ou 1)
  return (li->qtd == 0);
}


int insere_lista_final(Lista* li, struct aluno al) {
  // Verifica se a lista existe
  if(li == NULL) return 0;
  
  // Reaproveitamento da função anterior
  // Verifica se a lista está cheia
  if(lista_cheia(li))
    return 0;
  
  // Insere os dados na posição do array em qtd
  li->dados[li->qtd] = al;

  // Incrementa a quantidade
  li->qtd++;
  
  // Retorno de sucesso 
  return 1;
}

int insere_lista_inicio(Lista* li, struct aluno al) {
  // Verifica se a lista existe
  if(li == NULL) return 0;

  // Reaproveitamento da função anterior
  // Verifica se a lista está cheia
  if(lista_cheia(li)) return 0;

  // Deslocamento das informações da lista existentes
  // deslocamos de forma decrescente para não sobrescrever
  // as informações já existentes
  for(int i = li->qtd - 1; i >= 0; i--) 
    li->dados[i+1] = li->dados[i];
  /*
   * Por exemplo:
   *    0    1    2
   * +----+----+----+----+----+----+   
   * | 33 | 23 | 16 |    |    |    | 
   * +----+----+----+----+----+----+
   *   └────┐└───┐└───┐  
   * Novo  🮝🮜  🮝🮜  🮝🮜
   * +----+----+----+----+----+----+   
   * | 66 | 33 | 23 | 16 |    |    |
   * +----+----+----+----+----+----+
   * 
   * Primeiro executa-se 2, depois 1 depois 0, evitando assim
   * sobrescrever os anteriores
   */

  // Inserção no início da lista
  li->dados[0] = al;
  // Incrementação da quantidade de elementos
  li->qtd++;

  // Retorno de sucesso
  return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno al) {
  // Verifica se a lista existe 
  // Caso haja algum erro retorna -1, que indica erro
  if(li == NULL) return 0;

  // Reaproveitamento da função anterior
  // Verifica se a lista está cheia
  if(lista_cheia(li)) return 0;

  int k,i = 0;

  // Algoritmo de Busca para encontrar a posição de inserção
  // (i < li->qtd)
  //  Representa o final da lista
  // (li->dados[i].matricula < al.matricula)  
  // Representa a ordem no qual o laço se posiciona conforme o dado a ser 
  // inserido é menor do que o encontrado:
  while(i < li->qtd && li->dados[i].matricula < al.matricula) i++;

  // Deslocamento decrescente (N -> 0) contra o sentido do vetor (0 -> N) 
  // Deslocamento dos dados do array até a posição anterior da busca (i)
  for(k = li->qtd - 1; k >= i; k--)
    li->dados[k+1] = li->dados[k];
  
  // Inserção do dado na posição i
  li->dados[i] = al;

  // Incrementação da quantidade de elementos
  li->qtd++;

  // Retorno de sucesso
  return 1;
}

int remove_lista_final(Lista* li) {
  // Verifica se a lista existe 
  // Caso haja algum erro retorna -1, que indica erro
  if(li == NULL) return 0;

  // Verifica se a lista está vazia
  if(li->qtd == 0) return 0;

  // Decrementa-se a quantidade de elementos na lista
  // O elemento ainda está na lista porém a posição está
  // livre para ser sobrescrita
  li->qtd--;

  // Retorno de sucesso
  return 1;
}

int remove_lista_incio(Lista* li) {
  // Verifica se a lista existe 
  // Caso haja algum erro retorna -1, que indica erro
  if(li == NULL) return 0;

  // Verifica se a lista está vazia
  if(li->qtd == 0) return 0;

  // Deslocamento crescente a favor do vetor 0 -> N
  // Realiza a reatribuição no decorrer de todo o array
  for(int k = 0; k < li->qtd - 1; k++)
    li->dados[k] = li->dados[k+1];
  /*
   * Por exemplo
   * Removendo o 0:
   *   0    1    2    3
   * +----+----+----+----+----+----+   
   * | 12 | 33 | 23 | 16 |    |    |
   * +----+----+----+----+----+----+
   *    ┌───┘┌───┘┌───┘  
   *   🮝🮜  🮝🮜 🮝🮜
   * +----+----+----+----+----+----+   
   * | 33 | 23 | 16 | 16 |    |    |
   * +----+----+----+----+----+----+
   * 
   * Primeiro percorre-se 0, depois 1, depois 2 sobrescrevendo.
   */ 

  // Decrementa a quantidade
  li->qtd--;

  // Retorno de sucesso
  return 1;
}

int remove_lista(Lista* li, int mat) {
  // Verifica se a lista existe 
  // Caso haja algum erro retorna -1, que indica erro
  if(li == NULL) return 0;

  // Verifica se a lista está vazia
  if(li->qtd == 0) return 0;

  // Algoritmo de Busca para encontrar a posição de inserção
  // percorre a lista até que se encontre uma matrícula que corresponda
  // ao passado no parâmtro.
  // Continua até que encontre ou finalize a lista com uma posição vaga
  int i,k = 0;
  while (i < li->qtd && li->dados[i].matricula != mat) i++;

  // Finaliza a função caso a busca anterior tenha chegado no final
  if(i == li->qtd) return 0;

  for(k = i; k < li->qtd - 1; k++)
    li->dados[k] = li->dados[k+1];
  /*
   * Por exemplo
   * Removendo o k:
   *             k   k+1   k+2  ...
   * +----+----+----+----+----+----+  
   * | ## | ## | 12 | 33 | 23 | 16 |
   * +----+----+----+----+----+----+
   *              ┌───┘┌───┘┌───┘  Etc.. até que ache a posic. vaga
   *             🮝🮜  🮝🮜 🮝🮜
   * +----+----+----+----+----+----+   
   * | ## | ## | 33 | 23 | 16 | ## |
   * +----+----+----+----+----+----+
   * 
   * Primeiro percorre-se k, depois k+1, depois k+2 sobrescrevendo.
   */

  // Decrementa a quantidade
  li->qtd--;

  // Retorno de sucesso
  return 1;
}


int consulta_lista_posic(Lista* li, int posic, struct aluno *al) {

}