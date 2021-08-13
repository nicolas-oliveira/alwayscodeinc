/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
    int soma1=0;
    int soma2=0;
    for (int L =0; L<3; L++)
    {
        for (int C=0; C<3; C++)
        {
            cout <<"Digite um valor ["<<L<<"]["<<C<<"] : ";
            cin >> matriz[L][C];
        }
    }
    for (int L =0; L<3; L++)
    {
        for (int C=0; C<3; C++)
        {
            cout<< matriz[L][C]<<"\t";
        }
        cout << endl;
    }

    return 0;
}
