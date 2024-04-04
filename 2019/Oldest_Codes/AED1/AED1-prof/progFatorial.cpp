/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int n, fat=1;

    cout << "Digite um valor inteiro positivo ";
    cin >> n;
    for(int i =n ; i>= 1 ; i--)
        fat *= i;
    cout << n <<"! = "<<  fat;
    return 0;
}
