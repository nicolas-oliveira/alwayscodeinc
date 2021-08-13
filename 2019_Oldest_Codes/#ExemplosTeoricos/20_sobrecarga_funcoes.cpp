#include <iostream>
using namespace std;
/* A linguagem C++ permite que tenha varias funcoes com o mesmo nome isso eh chamado de sobrecarga de funcoes
para isso voce deve diferenciar ou pelo numero ou tipos de argumentos
*/

void tipo(int n){
    cout << "Numero: " << n << endl;
}

void tipo(){
    cout << "Hello world" << endl;
}

int numero(int n1, int n2){
    return n1 + n2;
}
int numero(int n1, int n2, int n3){
    return n1 + n2 + n3;
}
int main(){
    tipo(10); // Este recebe um inteiro 
    tipo();   //Essa nao recebe nada
    //Os dois sao diferenciados por tipo

    numero(1,2); // Este recebe dois int
    numero(1,2,3); // Este recebe tres int
    // Os dois sao diferenciados pelo numero

    return 0;
}