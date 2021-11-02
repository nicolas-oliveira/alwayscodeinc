#include<iostream>
using namespace std;
struct TPessoa
{
    char sexo;
    string cor_olhos, cor_cabelo;
    int idade;
};
void cadastra(TPessoa *aux)
{
    for(int i=0; i<3; i++)
    {
        cout << "Sexo :"; cin >> aux[i].sexo;
        cout << "Cor dos olhos :"; cin >> aux[i].cor_olhos;
        cout << "Cor dos cabelos :"; cin >> aux[i].cor_cabelo;
        cout << "Idade :"; cin >> aux[i].idade;
    }
}
int contaCabelo(TPessoa *aux, string cor)
{
    int x=0;
    for(int i=0; i<3; i++)
    {
        if(aux[i].cor_cabelo == cor)
            x++;
    }
    return x;
}
void alteraOlhos(TPessoa *aux, string cor_antiga, string cor_nova)
{
    for(int i=0; i<3; i++)
    {
        if(aux[i].cor_olhos== cor_antiga)
            aux[i].cor_olhos = cor_nova;
    }
}
int main()
{
    TPessoa dados[30];
    cadastra(dados);
    cout << "Qtde de hab. com cabelo preto = " <<
             contaCabelo(dados,"preto")<< endl;
    alteraOlhos(dados,"castanho", "azul");
    cout << "Cor dos olhos do primeiro habitante "<<
            dados[0].cor_olhos;
    return 0;
}
