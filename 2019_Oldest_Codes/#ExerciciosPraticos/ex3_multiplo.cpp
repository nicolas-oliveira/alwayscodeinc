
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int n = 0, numero[50], p = 1;
    while(p != 0){
        
        cout << "Digite um numero: ";
        cin >> numero[n];

        if(numero[n] % 6 != 0){
        numero[n] *= numero[n];
        cout << numero[n] << endl;
        n++;
        }else{
            numero[n] *= numero[n];
            cout << numero[n] << endl; 
            p = 0;
        }
    }
    
    return 0;
}