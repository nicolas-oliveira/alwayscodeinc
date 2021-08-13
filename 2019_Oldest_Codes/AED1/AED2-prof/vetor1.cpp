/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int matriz[3][3];
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
    int soma = matriz[0][0] + matriz[1][1] + matriz[2][2] ;
    cout << "A soma d diagonal � " << soma;
    return 0;
}
