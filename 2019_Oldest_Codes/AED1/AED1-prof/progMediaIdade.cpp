/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
using namespace std;

int main()
{
    int idade, num, i, somatorio=0;

    cout << "Qual num. de alunos? ";
    cin >> num;
    // PARA
    for(i=1; i<=num; i++)
    {
       cout << "Idade aluno"<< i<< " : ";
       cin >> idade;
       somatorio += idade;
    }
    cout << "m�dia das idades = "<< (float)somatorio/num<<endl;
    somatorio=0;
    //WHILE
    i =1;
    while(i<=num)
    {
       cout << "Idade aluno"<< i<< " : ";
       cin >> idade;
       somatorio += idade;
       i++;
    }
    cout << "m�dia das idades = "<< (float)somatorio/num;
    return 0;
}
