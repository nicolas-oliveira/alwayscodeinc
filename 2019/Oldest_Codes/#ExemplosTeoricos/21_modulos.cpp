/*
Criando modulos
*/
#include <iostream> //Isto e um modulo
#include "21_modulos.h" //Este eh o meu modulo referenciado em '.h'
using namespace std;

int main(){
    int n, m;
    cout << "Digita um numero inteiro: ";
    cin >> n;
    cout << "Digite outro numero: ";
    cin >> m;
    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
    cout << "Area do quadrado de lado " << n << " : "<< quadrado(n) << endl;
    cout << "Area do retangulo de " << n << " e " << m << " : " << area_retangulo(n,m) << endl; 
    return 0;
}
