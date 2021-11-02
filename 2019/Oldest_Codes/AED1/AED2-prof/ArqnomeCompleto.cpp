#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");
    string nome;
    cout << "Nome completo ";
    getline(cin, nome);
    int pos =0 ;
    pos = nome.find(" ");
    while( pos !=-1)
    {
        nome = nome.substr(0, pos) + "_"+ nome.substr(pos+1);
        pos = nome.find(" ");
    }
    cout << "Digite seu curso ";
    string curso;
    cin >> curso;
    ofstream arq ("nomecompleto.txt" , ios :: app); // abre para escrita
    arq << nome << " " << curso << "\n";
    arq.close();
    ifstream arq1 ("nomecompleto.txt"); // abrindo para leitura
    while(arq1 >> nome >> curso)
    {
        pos = nome.find("_");// localiza a o texto
        while( pos !=-1)
        {
           nome = nome.substr(0, pos) + " "+ nome.substr(pos+1); // copia parte da string
           pos = nome.find("_");
        }
        cout<<"Nome "<< nome ;
        cout << " Curso " << curso <<endl;
    }
    return 0;
}
