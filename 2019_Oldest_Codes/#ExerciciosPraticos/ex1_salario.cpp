//Faça um algoritmo que receba o salário de um funcionário e o percentual de
// aumento, calcule e mostre o valor do aumento e o novo salário

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int s, pa;
    double sl;
    cout << "Digite o salário: "; 
        cin >> s;
    
    cout << "Digite o percentual: ";
        cin >> pa;
    
    sl = s*((pa/100.0) + 1.0);
    //lembrar de deixar explícito o ponto flutuante já que depois do = as duas variáveis são inteiras
    
    cout << "O aumento é: " << (s * pa) / 100 << endl;
    cout << "O novo salário é: " << sl << endl;
    
    
    return 0;
}