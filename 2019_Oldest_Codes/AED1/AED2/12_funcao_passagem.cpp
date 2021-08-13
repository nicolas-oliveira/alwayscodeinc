/*Usando passagem por referência faça uma função que receba
um valor inteiro e triplique esse valor
imprima o valor antes e depois de executar a funcao */
#include <iostream>
using namespace std;
void triplo (int &x){
    x = 3*x;
}
int main(){
    int v; 
    cin >> v;
    cout << "Valor lido " << v << endl;
    triplo(v);
    cout << "Valor atual" << v;
    return 0;
}