/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int n, fat=1;
    float saida =1;
    cout << "Digite um valor inteiro positivo ";
    cin >> n;

    for (int i =1; i<=n; i++)
    {
        fat = fat * i;
        saida = saida + (float) 1/fat;
    }
    cout << "E = " << saida;
    return 0;
}
