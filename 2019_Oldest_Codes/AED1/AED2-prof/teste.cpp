#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string nome, telefone;
    int idade;
   ofstream arq("pessoas.txt");
    for (int i = 1 ; i <=1; i++)
    {
    	cout << "Nome:";
        cin >> nome;
        cout << "Idade:";
        cin >> idade;
        cout << "Telefone:";
        cin >> telefone;
        arq << nome << " "<< idade <<" " << telefone << endl;
    }
    arq.close();
    
    ifstream arq1("pessoas.txt");
    int qtde =0;
    while(arq1 >> nome >> idade >> telefone)
    {
        if (idade >= 18)
            qtde++;
    }
    cout << "Foram cadastrados " << qtde << " maiores de idade";
    arq1.close();
}

