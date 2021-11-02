#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string cidade,dado, mcidade;
    int pop, maior=0;
    ifstream arq("cidades.txt");
    for(int i=1; i <= 5; i++)
    {
        getline(cin, cidade);
        getline(cin, dado);
        stringstream aux(dado);
        aux >> pop;
        if(pop > maior)
        {
            maior = pop;
            mcidade = cidade;
        }
    }
    cout << "Cidade mais populosa : "<< mcidade;
    cout <<endl;
    arq.close();

}
