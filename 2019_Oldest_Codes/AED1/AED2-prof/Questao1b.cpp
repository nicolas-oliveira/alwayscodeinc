#include <iostream>
using namespace std;

struct TAtleta
{
    int num;
    float alt, peso, sal;
    string nome;
};
int main()
{
    TAtleta jodadores[25];
    for(int i=0 ; i<23; i++) // leitura
    {
        cout << "Número ";
        cin >> jodadores[i].num;
        cout << "Nome ";
        cin >> jodadores[i].nome;
        cout << "Altura ";
        cin >> jodadores[i].alt;
        cout << "Peso ";
        cin >> jodadores[i].peso;
        cout << "Salário ";
        cin >> jodadores[i].sal;
    }
    for(int i=0 ; i<23; i++) // impressão
    {
        if(jodadores[i].peso>90)
            cout << "Número "<< jodadores[i].num << endl;
    }
    return 0;
}
