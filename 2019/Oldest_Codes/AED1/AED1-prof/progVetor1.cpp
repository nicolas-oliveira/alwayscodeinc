/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int idades [8];

    for(int i= 0; i<8 ; i++)
    {
        cout << "Digite a idade ";
        cin >> idades[i];
    }
    cout << idades[1] << endl;
    cout << idades[7];
    return 0;
}
