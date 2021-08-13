//Imprimir na tela a tabuada de 1 a 10
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i < 10; i++){
       
       cout << "------------" << endl;
       for(int n = 1; n <= 10; n ++){
       cout << i << " x " << n << " = " << i * n << endl;
       }
       
    }
    return 0;
}