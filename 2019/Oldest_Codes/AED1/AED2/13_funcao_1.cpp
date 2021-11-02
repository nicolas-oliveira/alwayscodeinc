/*
Faça um procedimento que vetor X 30 elementos inteiros, por parâmetro, e retorna, também por parâmetro, dois vetores A e B. 
O vetor A deve elementos pares de X e o vetor B, os elementos impares.
*/

#include <iostream>
using namespace std;

void incr(int x, int &y){
    y = y+x;
}
int main(){
    int a,b;
    cout << "Digite o valor y: ";
    cin >> a;
    cout << "Digite o valor do incremento: ";
    cin >> b;
    incr(b,a);
    cout << "Valor de y " << a;
    return 0;
}