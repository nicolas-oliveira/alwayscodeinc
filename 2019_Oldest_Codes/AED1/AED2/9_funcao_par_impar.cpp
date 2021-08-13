/*Funcao que recebe um valor inteiro e diz se é par ou impar, funcao booleana*/
#include <iostream>
using namespace std;
bool verif_par(int a){
    if(a %2==0)
    return true;
    else
    return false;
    
}
int main(){
    int a;
    cin >> a;
    if(verif_par(a)==true)
    cout << "É PAR" << endl;
    else
    cout << "E IMPAR" << endl;
    
    return 0;
}