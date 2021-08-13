#include <iostream>
using namespace std;
string repeteNome(string nome, int n){
    string temp = "";
    for (int i = 0; i < n; i++){
        temp = temp + nome + " ";
    }
    return temp;
}

int main(){
    string nome, resultado;
    int x;
    cout << "Digite um nome: ";
    cin >> nome;
    cout << "Digite a quantidade de vezes: ";
    cin >> x;

    resultado = repeteNome(nome, x);
    cout << resultado;

    return 0;
}