/* Fazer um programa que imprima numeros de 1 a 20 porem ao chegar no 10 ele pare e digite 
FUI ATE O 10 e depois continue na mesma repeticao*/

#include <iostream>
using namespace std;
int main(){
    int n = 1;
    while(n <= 20){
        cout << "Numero: " << n << endl;
        if(n == 10){
            cout << "FUI ATE O 10\n";
        }
        n++;
    }
    return 0;
}