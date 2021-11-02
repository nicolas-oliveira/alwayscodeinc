/* Fazer um programa que imprima numeros pares de 0 a 100
*/
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    while(n <= 100){
         if(n % 2 != 0){        //Quando == o algoritmo imprime impar, quando != imprime par
            n++;             //Incrementa 1 a condicao necessaria anterior 'se impar +1 entao par' 
                                                                         //'se par +1 entao impar'
            continue; //Volta pro comeco do while
        }
        
        cout << "Numero: " << n << endl;
        n++;
        
        /*n++;
        if(n % 2 == 0){
            cout << "Numero: " << n << endl;        
            
            continue;
        }
        */
    }
    return 0;
}