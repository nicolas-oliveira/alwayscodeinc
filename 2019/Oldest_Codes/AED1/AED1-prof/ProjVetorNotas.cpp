/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    float notas [10];
    float media =0;

    for (int i=0;i <10; i++)
    {
        cout << "Digite a nota"<<(i+1) << " : ";
        cin >> notas[i];
        media += notas[i]; // media = media + notas[i]
    }
    media /= 10; // media = media /10
    cout << "M�dia = "<<media << endl;
    for (int i =0 ; i < 10; i++)
        if (notas[i] > media)
           cout << notas[i] << endl;

    return 0;
}
