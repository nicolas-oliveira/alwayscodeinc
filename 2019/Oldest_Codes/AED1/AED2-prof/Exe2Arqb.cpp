#include <iostream>
#include <fstream>
#include <locale>

using namespace std;
struct TProva
{
   string data, hora, disciplina;
   float valor;
};

TProva vet[6];
int main()
{
    for (int i =0 ; i < 6; i++)
    {
        cout << "Nome da disciplina : ";
        cin >> vet[i].disciplina;
        cout << "Data : ";
        cin >> vet[i].data;
        cout << "Hora : ";
        cin >> vet[i].hora;
        cout << "Valor : ";
        cin >> vet[i].valor;
    }
    ofstream dados("provas.txt");
    for (int i =0 ; i < 6; i++)
    {
        dados << vet[i].disciplina << " " << vet[i].data << " " <<
                 vet [i].hora << " " << vet[i].valor << "\n";
    }
    dados.close();
    return 0;
}
