/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int n1, n2;
    setlocale(LC_ALL,"portuguese");
    cout << "Valor1 ";
    cin >> n1;

    cout << "Valor2 ";
    cin >> n2;

    cout << "Soma � " << n1+n2;
    return 0;
}
