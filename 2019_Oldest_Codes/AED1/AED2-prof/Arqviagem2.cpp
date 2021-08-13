#include <iostream>
#include <fstream>
using namespace std;
void le_cadastro()
{
    string origem, destino, data, hora;
    ifstream arquivo ("dadosviagem.txt");
    for (int i= 1; i<= 3; i++)
    {
        getline(arquivo, origem);
        getline (arquivo, destino);
        getline (arquivo, data);
        getline(arquivo, hora);
        cout << "Origem " << origem << endl;
        cout << "Destino " << destino << endl;
        cout << "Hora " << hora << endl;
        cout << "Data " << data << endl;
    }
    arquivo.close();
}
int main()
{
    string origem, destino, data, hora;
    ofstream arquivo ("dadosviagem.txt");

    for (int i= 1; i<= 3; i++)
    {
        cout << "Origem : ";
        getline(cin, origem);
        cout << "Destino : ";
        getline(cin, destino);
        cout << "Data : ";
        getline(cin, data);
        cout << "Hora : ";
        getline(cin, hora);
        arquivo << origem << "\n";
        arquivo << destino << "\n";
        arquivo << data << "\n";
        arquivo << hora << "\n";
    }
    arquivo.close();
    return 0;

}
