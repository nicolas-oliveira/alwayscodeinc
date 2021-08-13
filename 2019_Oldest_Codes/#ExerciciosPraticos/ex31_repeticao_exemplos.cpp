/*
    -Fazer um algoritmo que imprima de 1 ate 15 de 2 em 2
    -Apos isso de 15 ate 0 de -2 em -2
    -Apos isso de 30 até 45 de 3 em 3
    -Uma estrutura de repeticao que dobra seu valor de 1 ate 128
*/
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 15; i++, i++){ //1 ate 15 de 2 em 2
        cout << i << ",";
    }
    
    cout <<  "\n------------\n" ;
    
    for (int i = 15; i >= 0; i--, i--){ //15 ate 0 de -2 em -2
        cout << i << ",";
    }
    
    cout <<  "\n------------\n" ;

    for (int i = 1; i <= 15; i = i + 3){ //1 ate 15 3 em 3
        cout << i << ",";
    }
    
    cout <<  "\n------------\n" ;

    for (int i = 1; i <= 128; i = i + i){ //Imprime o seu quadrado
        cout << i << ",";
    }
    
    cout <<  "\n------------\n" ;
    
    int p1 = 0, p2 = 1, n = 0;
    for (int i = 1; i <= 15; ++i){ //Sequencia de fibonacci
        
        if (i == 1){
            cout << p1 << ",";
            continue;
        }
        if(i == 2){
            cout << p2 << ",";
            continue;
        }
        n = p1 + p2;
        p1 = p2;
        p2 = n;
        cout << n << ",";
    }
    return 0;
}