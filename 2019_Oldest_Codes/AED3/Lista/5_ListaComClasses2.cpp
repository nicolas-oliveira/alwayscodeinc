#include <iostream>

using namespace std;

class celula {
  // Acesso restrito ao escopo local
  private:
    string nome;
    celula *proxima;
  // Acesso permitido pelo escopo global
  public:
    celula() {
      proxima = NULL;
    }
    // Método de entrada dos dados
    string getNome() {
      return nome;
    }
    // Método de saída de dados para o escopo global
    void setNome(string n){
      nome = n;
    }
    celula * getProxima() {
      return proxima;
    }
    void setProxima(celula * l) {
      proxima = l;
    }
};

class lista {
  private:
    celula *inicio;
  public:
    lista() {
      inicio = NULL;
    }
    celula * getInicio() {
      return inicio;
    }
    void inserirInicio(string n) {
      celula *nova = new celula;
      nova->setNome(n);
      nova->setProxima(inicio);
      inicio = nova;
    }
    void imprimir() {
      if(inicio == NULL) {
        cout << "Lista vazia\n";
      } else {
        celula *aux = inicio;
        while(aux != NULL) {
          cout << aux->getNome() << endl;
          aux = aux->getProxima();
        }
      }
    }
};

int main() {
  lista listaAlunos;
  listaAlunos.inserirInicio("Joao");
  listaAlunos.inserirInicio("Felipe");
  listaAlunos.inserirInicio("Nicolas");

  listaAlunos.imprimir();
  return 0;
} 