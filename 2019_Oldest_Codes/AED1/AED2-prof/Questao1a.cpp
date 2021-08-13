#include <iostream>


using namespace std;

struct TSala
{
    int num, cart, lamp;
    float larg, comp;
    string nome;
};

int main()
{
    TSala salas[50];
    for(int i=0 ; i<30; i++) // leitura
    {
        cout << "Número ";
        cin >> salas[i].num;
        cout << "Nome ";
        cin >> salas[i].nome;
        cout << "Qtde carteiras ";
        cin >> salas[i].cart;
        cout << "Qtde Lâmpadas ";
        cin >> salas[i].lamp;
        cout << "Largura ";
        cin >> salas[i].larg;
        cout << "Comprimento ";
        cin >> salas[i].comp;
    }
    for(int i=0 ; i<30; i++) // impressão
    {
        if(salas[i].cart>40)
            cout << "Número "<< salas[i].num << endl;
    }
    return 0;
}
