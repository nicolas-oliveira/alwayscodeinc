#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    string nome, matr;

    ifstream arq1("alunos.txt");
    cout << setiosflags(ios::left)<< setw(15) <<"Nome" <<
                setw(15) << "Matrícula"<< endl;
    while(arq1 >> nome >> matr)
        cout << setiosflags(ios::left)<< setw(15) <<nome <<
                setw(15) << matr<< endl;

    arq1.close();
    return 0;
}
