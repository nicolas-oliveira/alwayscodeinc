/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    string nomes[5];
    float valores[5];
    float maior = 0;
    int y;
    for (int i =0 ; i< 5 ; i++)
    {
        cout << "Digite o nome do produto : ";
        cin >> nomes[i];
        cout << "Digite o valor do produto : ";
        cin >> valores[i];
        if (valores[i] > maior)
        {
            maior = valores[i];
            y = i;
        }
    } // fecha o dor
    cout << "Nome do produto de maior valor = " << nomes[y] << endl;
    cout << "�ndice = " << y;
    return 0;
  }
