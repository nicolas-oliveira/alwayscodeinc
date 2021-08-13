// Este é um algoritmo criado a partir do livro:
// "Estruturas de dados, Algoritmos e análise da complexidade e implementações 
// em JAVA e C/C++" de Ana Fernanda e Gomes Ascencio. Página 128. 

// Este algoritmo é o mais simples entre todas as estruturas de dados mais simples. 
// Tem uma grande gama de repetições if e else porém é mais fácil de compreender.
#include <iostream>

using namespace std;

// Definimos um nó (struct) que representa cada elemento da lista
struct LISTA {
  int num;
  LISTA *prox;
};

int main() {
  // A lista está vazia, logo, o ponteiro inicio têm valor NULL
  // o ponteiro 'inicio' conterá o endereço do primeiro elemento da lista
  LISTA *inicio = NULL;

  // o ponteiro 'fim' conterá o endereço do último elemento da lista
  LISTA *fim = NULL;
  
  // o ponteiro 'aux' é um ponteiro auxiliar
  LISTA *aux;
  
  // o ponteiro anterior é um ponteiro auxiliar
  LISTA *anterior;

  // variáveis do menu de opções
  int op, numero, achou;

  // repetição do menu de opções
  do {
    system("clear");
    
    cout << "\nMENU DE OPÇÕES\n";
    cout << "\n1 - INSERIR NO INICIO";
    cout << "\n2 - INSERIR NO FIM";
    cout << "\n3 - CONSULTAR TODA A LISTA";
    cout << "\n4 - REMOVER DA LISTA";
    cout << "\n5 - ESVAZIAR A LISTA";
    cout << "\n6 - SAIR";
    cout << "\n    DIGITE SUA OPÇÂO: ";
    cin  >> op;

    // Qualquer opção fora dessa condição é inválida
    if (op < 1 || op > 6) cout << "OPCAO INVALIDA";
    
    // Condição que insere no começo
    if (op == 1) {
      cout << "DIGITE O NUMERO A SER INSERIDO NO INICIO DA LISTA:";
      LISTA *novo = new LISTA();

      cin >> novo->num;

      if (inicio == NULL) {
        // A lista estava vazia e o elemento inserido será o primeiro e o último
        inicio = novo;
        fim = novo;
        fim->prox = NULL;
    
      } else {
        // A lista já contém elementos e o novo elemento será inserido no início
        novo->prox = inicio;
        inicio = novo;
      }

      cout << "NUMERO INSERIDO NO INICIO DA LISTA";
    }

    // Condição que insere no fim
    if (op == 2) {
      cout << "DIGITE O NUMERO A SER INSERIDO NO FIM DA LISTA:";
      LISTA *novo = new LISTA();
      cin >> novo->num;
    
      if (inicio == NULL) {
        // A lista estava vazia e o elemento inserido será o primeiro e o ultimo
        inicio = novo;
        fim = novo;
        fim->prox = NULL;
    
      } else {
        // A lista já contém elementos e o novo elemento será inserido no fim
        fim->prox = novo;
        fim = novo;
        fim->prox= NULL;
      }
      
      cout << "NUMERO INSERIDO NO FIM DA LISTA";
    }

    // Condição que consulta a lista
    if (op == 3) {
      if (inicio == NULL) {
        cout << "LISTA VAZIA!!";
    
      } else {
        cout << "\nCONSULTANDO TODA A LISTA\n";
        aux = inicio;

        // A lista contém elementos e estes serão mostrados do inicio ao fim
        while (aux != NULL) {
          cout << aux->num << " ";
          aux = aux->prox;
        }
      }
    }

    // Condição que remove um elemento da lista
    if (op == 4) {
      if (inicio == NULL) {
        cout << "LISTA VAZIA!!";
    
      } else {
        // Todas as ocorrências da lista, iguais ao número digitado, serão removidas  
        cout << "\nDIGITE O ELEMENTO A SER REMOVIDO:";
        cin >> numero;

        aux = inicio;
        anterior = NULL;
        achou = 0;

        while (aux != NULL) {
          if (aux->num == numero) {
            achou++;

            if (aux == inicio) {
              inicio = aux->prox;
              delete(aux);
              aux = inicio;
            
            } else if (aux == fim) {
              anterior->prox = NULL;
              fim = anterior;
              delete(aux);
              aux = NULL;
            
            } else {
              anterior->prox = aux->prox;
              delete(aux);
              aux = anterior->prox;

            }
          } else {
            anterior = aux;
            aux = aux->prox;
          }
        }

        if (achou == 0)
          cout << "NUMERO NAO ENCONTRADO";
        else if (achou == 1)
          cout << "NUMERO REMOVIDO 1 VEZ";
        else
          cout << "NUMERO REMOVIDO " << achou << " VEZES";
      }
    }

    // Condição que esvazia toda a lista
    if (op == 5) {
      if (inicio == NULL) {
        cout << "LISTA VAZIA";
      } else {
        aux = inicio;

        while (aux != NULL) {
          inicio = inicio->prox;
          delete(aux);
          aux=inicio;
        }
        cout << "LISTA ESVAZIADA";
      }
    }
  
  } while (op != 6);
  return 0;
}