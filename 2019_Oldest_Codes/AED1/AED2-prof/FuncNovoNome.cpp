#include <iostream>
using namespace std;

void novoNome(string &nome)
{
    cout << "Digite o nome para substituir "<< nome<< " ";
    cin >> nome;
}
int main()
{
  string n;
  cout << "Digite um nome ";
  cin >> n;
  cout << "O nome lido foi "<< n << endl;
  novoNome(n);
  cout << "O novo nome "<< n ;
  return 0;
}
