/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
#include <locale>

using namespace std;

int main()
{
    string nome, sobrenome;
    int idade;

    setlocale(LC_ALL,"portuguese");
    cout << "Digite seu primeiro nome ";
    cin >> nome;
    cout << "Sobrenome ";
    cin >> sobrenome;
    cout << "Nome completo � " << nome << " "<< sobrenome << endl;

    cout << "Digite sua idade ";
    cin >> idade;
    if(idade >=18)
        cout << "Maior idade";
    else
        cout << "Menorrrrr";
    return 0;
}
