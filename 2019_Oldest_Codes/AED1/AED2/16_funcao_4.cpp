/*
Escreva uma função que receba, por parâmetro, dois valores X e Z,calcule e
retorne X^z . (sem utilizar funções ou operadores de potência prontos).
*/
#include <iostream>
using namespace std;
int pot(int x, int z){
    int p = 1;
    for(int i = 0; i < z; i++)
    p *= x;
    return p;
}
int main(){
    int x,z;
    cin >> x >> z;
    cout << pot(x,z);
    return 0;
}