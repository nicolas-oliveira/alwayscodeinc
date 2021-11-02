#include <iostream>

using namespace std;

class celula {
  // Acesso restrito ao escopo local
  private:
    string nome;
    celula * proxima;
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
  // Método destutor: retira a memória
  ~celula() {
    cout << "Passou pelo método destrutor\n";
  }
};

int main() {
  celula tmp;
  tmp.setNome("Oliveira");
  cout << "Olá " << tmp.getNome();
  // cout << "Código inicial";
  return 0;
}