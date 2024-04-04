//Elaborar um algoritmo que le 3 valores a, b, c e os escreve. A seguir,
//encontre o maior dos 3 valores e o escreva a mensagem.
#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int main(){
    int a, b, c;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    
    cout << a << "," << b << "," << c;
    if(a >= b , a >= c ){
        cout << "O maior de todos eh: " << a << endl;
    }
    else{ 
        if(b >= a , b >= c){
            cout << "O maior de todos eh: " << b << endl;
        }
        else{
            cout << "O maior de todos eh: " << c << endl;
        }
    }    

    return 0;
}