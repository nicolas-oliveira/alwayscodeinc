#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string origem, destino, data, hora;
    ofstream arq("viagem.txt");
    for(int i=1; i <= 3; i++)
    {
        cout << "Origem " ;
        getline(cin, origem);
        cout << "Destino " ;
        getline(cin, destino);
        cout << "Data " ;
        getline(cin, data);
        cout << "Hora  " ;
        getline(cin, hora);
        arq << origem << "\n" ;
        arq << destino << "\n" ;
        arq << data << "\n" ;
        arq << hora << "\n" ;
    }
    cout <<endl;
    arq.close();
    ifstream arq1("viagem.txt");
    for(int i=1; i <= 3; i++)
    {
        getline(arq1, origem);
        cout << origem << endl;
        getline(arq1, destino);
        cout << destino <<  endl;
        getline(arq1, data);
        cout << data << endl;
        getline(arq1, hora);
        cout << hora << endl;
    }
}
