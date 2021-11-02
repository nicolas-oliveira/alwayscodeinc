//Faca um algoritmo que leia um numero inteiro e mostre uma mensagem indicando
// se este numero eh par ou impar, e se e positivo ou negativo

#include <iostream>
using namespace std;
int main(){
    int n;

    cout << "Digite um numero: ";
    cin >> n;
    if(n >= 0){
        cout << n << " é um numero positivo";
    }
    else{
        cout << n <<" é um numero negativo";
    }
    if((n % 2) == 0){
        cout << " e par.";
    }
    else{
        cout << " e impar.";
    }
}