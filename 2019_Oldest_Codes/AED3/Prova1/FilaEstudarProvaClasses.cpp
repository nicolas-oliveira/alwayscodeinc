#include <iostream>
#include <queue>

using namespace std;

class pessoa {
  private:
    string nome;
    int idade;

  public: 
    pessoa(string _nome, int _idade) {
      nome = _nome;
      idade = _idade;
    }

    void imprimir() {
      cout << nome << " - " << idade << endl; 
    }
};

void imprimir(queue<pessoa> fila) {
  while (fila.size() > 0)  {
    fila.front().imprimir();
    fila.pop();
  }
  
}
void inserir(queue<pessoa> &fila) {
  string nome;
  int idade;
  
  cout << "Digite o nome da pessoa: ";
  cin >> nome;
  cout << "Digite a idade da pessoa: ";
  cin >> idade;

  pessoa p(nome, idade);
  fila.push(p);
}

int main() {
  queue<pessoa> fila;
  
  inserir(fila);

  // Tamanho da fila
  cout << fila.size() << endl;
  // Ultimo elemento da fila
  imprimir(fila);

  imprimir(fila);
  return 0;
}