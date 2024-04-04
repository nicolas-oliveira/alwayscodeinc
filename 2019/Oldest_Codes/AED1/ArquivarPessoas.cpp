#include <iostream>
#include <fstream>
#include <locale>
using namespace std;


int main ()
{
	setlocale(LC_ALL, "portuguese");
	string nome, telefone;
	int idade;

	ofstream arq("pessoas.txt");
	for (int i=0; i<2; i++)
	{
		cout<< "Digite o nome: "; 
		cin >> nome;
		cout<< "Digite a idade: "; 
		cin >> idade;
		cout<< "Digite o telefone: "; 
		cin >> telefone;
		arq << nome << " "<< idade << " " << telefone << endl;	
	}
	arq.close();
	ifstream arq1("pessoas.txt");
	int qtde=0;
	while(arq1 >> nome >> idade >> telefone)
	{
		if (idade >= 18)
			qtde++;
	}
	cout << "Foram cadastrados  " << qtde << "  maiores de idade" ;
	arq1.close();
	return 0;
}