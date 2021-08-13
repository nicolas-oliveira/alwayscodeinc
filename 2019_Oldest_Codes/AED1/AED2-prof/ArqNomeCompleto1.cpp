#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");
    string nome;
    cout << "Digite seu nome completo ";
    getline(cin , nome);
    int pos = 0;
    pos = nome.find(" ");
    while( pos != -1)
    {
        nome = nome.substr(0,pos)  + "_" + nome.substr(pos+1);
        pos = nome.find(" ");
    }
    string curso;
    cout << "curso ";
    cin >> curso;
    ofstream arq ("nomescompletos.txt", ios:: app);
    arq << nome << " " << curso << endl;
    arq.close();

    ifstream arq1("nomescompletos.txt");
    while (arq1 >> nome >> curso)
    {
        pos = nome.find("_");
        while( pos != -1)
        {
            nome = nome.substr(0,pos)  + " " + nome.substr(pos+1);
            pos = nome.find("_");
        }
        cout << "Nome " << nome << endl;
        cout << "Curso " << curso << endl;
    }
    arq1.close();
    return 0;
}
