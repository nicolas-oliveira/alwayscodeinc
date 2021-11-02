#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main()
{
    string nome;
    string mat;
    setlocale(LC_ALL,"portuguese");
    cout << "Digite sua matrícula ";
    cin >> mat;
    cin.ignore();
    cout << "Nome ";
    getline(cin, nome);
    ofstream arq("alunos.txt", ios::app);
    arq << nome << " " << mat << "\n";
    arq.close();
    return 0;
}
