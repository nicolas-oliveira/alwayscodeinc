// Este é uma calculadora feita com duas variaveil incluidas pelo usuario

#include <iostream>

using namespace std;
int main(){
    double n1, n2;
    
    cout << "Seja bem vindo a nossa primeira calculadora" << endl;
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;

    cout << "A soma é: " << n1 + n2 << endl;
    cout << "A subtração é: " << n1 - n2 << endl;
    cout << "A multiplicação é: " << n1 * n2 << endl;
    cout << "A divisão é: " << n1 / n2 << endl;
    
    return 0;
}