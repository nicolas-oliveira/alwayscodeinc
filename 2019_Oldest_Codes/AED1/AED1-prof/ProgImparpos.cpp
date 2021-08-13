/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Digite um valor ";
    cin >> n;
    if(n %2 == 0 )
        if(n>0) cout << n << " � um valor par positivo";
        else    cout << n << " � um valor par negativo";
    else
        if(n>0) cout << n << " � um valor �mpar positivo";
        else    cout << n << " � um valor �mpar negativo";
    return 0;

}
