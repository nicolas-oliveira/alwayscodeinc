// Manipulação de variáveis

#include <iostream>

using namespace std;

int main() {

    int varInt = 1000;
    char c = 'r';
    double pFlutuante = 5.99;

    
    cout << "O valor da variavel carInt é: " << varInt << endl;
     cout << "O valor da variável c é: " << c << endl;
      cout << "O valor da variével pFlutuante é: " << pFlutuante << endl;
        cout << endl;

     // Essa parte verifica a quantidade em bytes de memoria ocupada
    cout << "Memória da var varInt: " << sizeof(varInt) << endl;
     cout << "Memória da var c: " << sizeof(c) << endl;
      cout << "Memória da var pFlutuante: " << sizeof(pFlutuante) << endl;
      
    return 0;
}