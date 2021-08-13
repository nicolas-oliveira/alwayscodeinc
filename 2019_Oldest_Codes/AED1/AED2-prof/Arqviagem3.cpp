#include <iostream>
#include <fstream>
using namespace std;
int main()
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
    return 0;
}
