/*
Faca uma fancao que recebe um valor inteiro e verifica se o valor e positivo
ou negativo. A funcao deve deve retornar um valor booleano.
*/
#include <iostream>
using namespace std;
bool verif_int(int a);
int main(){
    int a;
    cin >> a;
    if(verif_int(a) == true){
        cout << "É POSITIVO" << endl;
    }else{
        cout << "É NEGATIVO" << endl;
    }
    return 0;
}

bool verif_int(int a){
    if(a > 0)
    return true;

    if(a < 0)
    return false;
}