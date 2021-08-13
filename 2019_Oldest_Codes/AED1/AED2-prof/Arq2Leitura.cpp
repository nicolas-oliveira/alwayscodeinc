#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream arq;
    arq.open("dados.txt", ios::in);
    string nome, mat;
    cout << setiosflags(ios::left)<<setw(10) << "Nome" <<
            setw(20) << "Matrícula"<<endl;

    while(arq >> nome >> mat)
       cout << setiosflags(ios::left)<<setw(10) << nome <<
               setw(20) << mat <<endl;
    arq.close();
    return 0;
}
