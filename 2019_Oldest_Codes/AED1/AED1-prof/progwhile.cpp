/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
using namespace std;

int main()
{
    int n, soma =0;
    char resp='S';

    while((resp=='S') ||(resp=='s'))
    {
        cout << "Digite um valor inteiro : ";
        cin >> n;
        soma += n;
        resp = 'x';
        while((resp != 'S') &&(resp != 's') &&(resp != 'N')
              &&(resp != 'n'))
        {
           cout << "Deseja digitar mais um valor? (S/N)";
            cin >> resp;
        }
    }
    cout << "SOMA ="<<soma;
    return 0;
}
