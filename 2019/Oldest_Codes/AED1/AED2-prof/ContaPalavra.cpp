#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");
    string frase;
    cout << "Digite uma frase ";
    getline(cin, frase);
    int p = frase.find("ela");
    int cont =0;
    while(p !=-1 )
    {
       cont++ ;
       frase = frase.substr(p+1);
       p = frase.find("ela");
    }
    cout << "ela apareceu "<< cont << "X";
    return 0;
}
