#include<iostream>
using namespace std;

struct TPessoa
{
    char sexo;
    string olhos, cabelo;
    int idade;
};
void cadastra( TPessoa *pessoas)
{
    for(int i =0; i<3; i++)
    {
        cout << "Digite o sexo do habitante ";
        cin >> pessoas[i].sexo;
        cout << "Digite a cor dos olhos do habitante ";
        cin >> pessoas[i].olhos;
        cout << "Digite a cor dos cabelos do habitante ";
        cin >> pessoas[i].cabelo;
        cout << "Digite a idade do habitante ";
        cin >> pessoas[i].idade;
    }
}
int buscaCorCabelo(TPessoa *pessoas, string cor)
{
   int x=0;
   for(int i =0; i<3; i++)
    {
        if(pessoas[i].cabelo == cor)
            x++;
    }
    return x;
}
int main()
{
    TPessoa dados[30];
    cadastra(dados);
    cout << "Sexo do segundo habitante " << dados[1].sexo <<endl;
    cout<<" Qtde de hab. com cabelo preto = "<<
            buscaCorCabelo(dados,"preto");
    return 0;
}
