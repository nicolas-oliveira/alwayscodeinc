#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string cidade;
    int pop;
    ofstream arq("cidades.txt");
    for(int i=1; i <= 3; i++)
    {
        cout << "Nome da cidade " ;
        getline(cin, cidade);
        cout << "Populacao " ;
        cin >> pop;
        cin.ignore();
        arq << cidade<< "\n";
        arq << pop << "\n" ;
    }
    cout <<endl;
    arq.close();
    ifstream arq1("cidades.txt");
    int mpop, mepop;
    string mcidade, mecidade, saida;
    for(int i=1; i <= 3; i++)
    {
        getline(arq1, cidade);
        getline(arq1, saida);
        stringstream aux(saida);
        aux >> pop;
        if (i== 1)
        {
           mpop = mepop =  pop;
           mcidade =  mecidade = cidade;
        }
        else
        {
            if ( pop > mpop)
            {
                 mpop =  pop;
                 mcidade= cidade;
            }
            if ( pop < mepop)
            {
                 mepop =  pop;
                 mecidade= cidade;
            }
        }
    }
    cout << "Mais populosa " << mcidade << endl;
    cout << "Menos populosa " << mecidade;
    return 0;
}
