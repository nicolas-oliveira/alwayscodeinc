#include <iostream>
#include <queue>

using namespace std;

struct pessoa {
  string nome;
  int idade;
};

void imprimir(queue<pessoa> fila) {
  while(fila.size() > 0) {
    cout << fila.front().nome << " - " << fila.front().idade << endl;
    fila.pop();
  }
}

void inserir(queue<pessoa> &fila) {
  pessoa p;
  cout << "Digite o nome da pessoa: ";
  cin >> p.nome;
  cout << "Digite a idade da pessoa: ";
  cin >> p.idade;
  fila.push(p);
}

int main() {
  queue<pessoa> fila;
  // pessoa p1, p2;
  // p1.nome = "Nicolas";
  // p1.idade = 22;
  // p2.nome = "Thales";
  // p2.idade = 26;

  // fila.push(p1);
  // fila.push(p2);
  
  inserir(fila);

  // Tamanho da fila
  cout << fila.size() << endl;
  // Ultimo elemento da fila
  cout << fila.back().nome << endl << endl;

  imprimir(fila);
  return 0;
}