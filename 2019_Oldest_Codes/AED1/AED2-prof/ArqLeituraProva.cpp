#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct TProva
{
    string data, hora, disciplina;
    float valor;
};

TProva dados[6];

int main()
{
    ifstream arq;
    int i=0;
    arq.open("provas.dat", ios::in);
    cout << setiosflags(ios::left) << setw(20) << "Disciplina" <<
          setw(15) << "Data" << setw(15) << "Hora" <<
          setw(10) << "Valor" << endl;
    while(arq >> dados[i].disciplina >> dados[i].data>>
          dados[i].hora>> dados[i].valor)
    {
        cout << setiosflags(ios::left) <<
                setw(20) << dados[i].disciplina <<
                setw(15) << dados[i].data <<
                setw(15) << dados[i].hora <<
                setw(15) << dados[i].valor << endl;
        i++;
    }
    arq.close();
    ofstream arq1 ;
    arq1.open("teste3.txt", ios::app);
    arq1 << "nomes";
    return 0;
}
