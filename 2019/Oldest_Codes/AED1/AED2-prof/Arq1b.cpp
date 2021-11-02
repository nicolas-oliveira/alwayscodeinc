#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main()
{
    ofstream nome;
    nome.open("dados.txt");
    for(int i=1; i<=100; i++)
	{
		nome << i << "\n";
	}
	nome.close();
    return 0;
}
