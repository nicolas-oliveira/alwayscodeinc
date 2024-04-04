#include <iostream>
using namespace std;

struct TDisc
{
    string palavra_port, palavra_ing;
};
TDisc dicionario[100];
void cadastra()
{
    for (int i =0 ; i <5; i++)
    {
        cout << "Português ";
        cin >> dicionario[i].palavra_port;
        cout << "Inglês ";
        cin >> dicionario[i].palavra_ing;
    }
}
string traduza (string palavra)
{
   string aux="";
   for (int i =0 ; i <5; i++)
    if(palavra == dicionario[i].palavra_port)
        aux = dicionario[i].palavra_ing;
    if (aux == "")
       return "Palavra não cadastrada";
    else
       return aux;
}

int main()
{
    cadastra();
    string palavra;
    cout << "Digite uma palavra em português ";
    cin >> palavra;
    cout << "Tradução "<< traduza(palavra);
    return 0;
}
