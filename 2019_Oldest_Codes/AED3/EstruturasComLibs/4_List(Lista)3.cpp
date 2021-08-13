#include <iostream>
#include <list>

using namespace std;

void imprimir(list<string> l) {
  cout << "-----------" << endl;
  if(l.empty()) {
    cout << "Lista vazia" << endl;
    return;
  }
  for(auto i : l) {
    cout << i << endl;
  }
  cout << "-----------" << endl;
}

int main() {
  list<string> listaDeNomes;

  listaDeNomes.push_back("Nicolas");
  listaDeNomes.push_back("Oliveira");
  listaDeNomes.push_back("Mariano");
  listaDeNomes.push_front("Thales");

  imprimir(listaDeNomes);

  listaDeNomes.remove("Mariano");
  listaDeNomes.pop_front();

  imprimir(listaDeNomes);

  return 0;
}