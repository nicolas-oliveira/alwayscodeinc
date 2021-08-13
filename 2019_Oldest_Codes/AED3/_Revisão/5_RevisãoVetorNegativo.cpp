// 17. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuı́rem
// valores negativos.
#include <iostream>
using namespace std;
#define CONST 10

int main() {
    int a[10];
    int i;
    for ( i = 0; i < CONST; i++ ){
        cout << "Digite um valor para o vetor [" << i << "]: ";
        cin >> a[i];
    }

    for( i = 0; i < CONST; i++ ){
        if(a[i] < 0 ){
            a[i] = 0;
        }
    }
    
    for( i = 0; i < CONST; i++ ){
        cout << "[" << i << "]:" << a[i] << endl;
    }
    return 0;
}