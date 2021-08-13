/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    float valor;

    cout << "Qual valor da c�pia? ";
    cin >> valor;

    cout << "1  = " << valor << endl;
    for (int i=10; i<= 200; i= i+10)
        cout << i << " = " << valor * i << endl;
    return 0;
}
