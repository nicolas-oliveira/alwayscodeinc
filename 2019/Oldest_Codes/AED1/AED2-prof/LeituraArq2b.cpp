#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct TProva
{
    string disciplina, data, hora;
    float valor;
};


int main()
{
    TProva aux;
    int op;
    do
    {
        cout << "Escolha uma opção\n 1- Leitura\n 2- Escrita\n 3- Sair\n";
        cin >> op;
        if(op==1){
            ifstream arq1("provas.dat");
            while(!arq1.eof())
            {
                arq1>> aux.disciplina >> aux.data >> aux.hora >> aux.valor;
                cout << aux.disciplina << " " << aux.data << " "<<
                        aux.hora << " " << aux.valor << endl;
            }
            arq1.close();
        }
        if(op==2)
        {
            ofstream arq2 ("provas.dat");
            cout << "Disiciplina "; cin >> aux.disciplina;
            cout << "Data "; cin >> aux.data;
            cout << "Hora "; cin >> aux.hora;
            cout << "Valor "; cin >> aux.valor;
            arq2 << aux.disciplina << " " << aux.data << " "<<
                        aux.hora << " " << aux.valor << "\n";
            arq2.close();
        }
    }while(op!=3);
    return 0;
}
