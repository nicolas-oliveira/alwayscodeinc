#include <iostream>
#include <list>

using namespace std;

int main() {
  list<string> listaDeNomes;
  listaDeNomes.push_back("Nicolas");
  listaDeNomes.push_back("Oliveira");
  listaDeNomes.push_back("Mariano");

  for(list<string>::iterator i = listaDeNomes.begin(); i != listaDeNomes.end(); i++) {
    cout << *i << endl;
  }

  return 0;
}