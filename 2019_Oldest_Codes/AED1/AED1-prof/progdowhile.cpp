/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
using namespace std;

int main()
{
    int n, soma =0;
    char resp='S';
    do
    {
        cout << "Digite um valor inteiro : ";
        cin >> n;
        soma += n;
       // resp = 'x';
        do
        {
           cout << "Deseja digitar mais um valor? (S/N)";
           cin >> resp;
        }while((resp != 'S') &&(resp != 's') &&(resp != 'N')
              &&(resp != 'n'));
    }while((resp=='S') ||(resp=='s'));
    cout << "SOMA ="<<soma;
    return 0;
}
