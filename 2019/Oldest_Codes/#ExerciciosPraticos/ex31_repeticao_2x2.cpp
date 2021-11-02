//Fazer um algoritmo que imprima de 1 ate 10 de 2 em 2
//Apos isso de 15 ate 0 de -2 em -2
//Apos isso de 30 até 45 de 3 em 3
//Uma estrutura de repeticao que dobra seu valor de 1 ate 128
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 15; i++, i++){
        cout << i << endl;
    }
    
    cout << "------------" << endl;
    
    for (int i = 15; i >= 0; i--, i--){
        cout << i << endl;
    }
    
    cout << "------------" << endl;
    
    for (int i = 1; i <= 15; i = i + 3){
        cout << i << endl;
    }
    
    cout << "------------" << endl;

    for (int i = 1; i <= 128; i = i + i){ //Imprime o seu quadrado
        cout << i << endl;
    }
    
    cout << "------------" << endl;
    int p1 = 0, p2 = 1, n = 0;
    for (int i = 1; i <= 15; ++i){ //Sequencia de fibonacci
        
        if (i == 1){
            cout << p1 << endl;
            continue;
        }
        if(i == 2){
            cout << p2 << endl;
            continue;
        }
        n = p1 + p2;
        p1 = p2;
        p2 = n;
        cout << n << endl;
    }
    return 0;
}