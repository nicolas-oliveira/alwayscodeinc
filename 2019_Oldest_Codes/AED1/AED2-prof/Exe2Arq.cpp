#include <iostream>
#include <fstream>

using namespace std;

struct TProva
{
    string data, hora, disciplina;
    float valor;
};

TProva dados[6];

int main()
{
	
	Exer2.open("text.txt", ios::in);
    for( int i=0; i<6; i++)
    {
        cout <<"Digite a data da prova ";
        cin >>dados[i].data;
        cout <<"Digite o horário da prova ";
        cin >>dados[i].hora;
        cout <<"Digite o valor total da prova ";
        cin >>dados[i].valor;
        cout <<"Digite o nome da disciplina ";
        cin >>dados[i].disciplina;
    }
    ofstream arq;
    arq.open("provas.dat",ios::out);

    for(int i=0; i<6; i++)
    {
       arq <<dados[i].disciplina << " "<<dados[i].data << " "
           <<dados[i].hora << " "<<dados[i].valor<< "\n";
    }
    arq.close();
    return 0;
}
