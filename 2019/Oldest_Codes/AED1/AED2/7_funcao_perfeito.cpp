/*
Fazer uma funcao que acha o numero perfeito
Os numeros perfeitos sao aqueles que a soma dos divisores dao ele mesmo
*/
#include <iostream>
using namespace std;
bool num_perf(int a);
int main(){
    int a;
    cin >> a;
    if(num_perf(a) == true)
    cout << "é perfeito";
    else
    cout << "nao e perfeito";
    return 0;
}

bool num_perf(int a){
    int soma = 0;
    for(int n = 1; n < a; n++){
        if(a % n == 0){
            soma += n;
        }
    }
    if(soma == a)
        return true;

    return false;
}