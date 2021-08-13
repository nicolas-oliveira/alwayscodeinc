/*
Foi realizada pesquisa de algumas habitantes de certa região. De cada habitante foram 
coletados os seguintes dados: sexo,cor dos olhos (azuis, verdes ou castanhos),cor dos 
cabelos (louros, pretos ou castanhos) e idade. Faça função que leía esses dados em um 
vetor de registro. O vetor de regístro deve ser enviado por referência.
*/
#include <iostream>
using namespace std;
struct pessoas
{
	char sexo;
	string olhos,cabelo;
	int idade;
};
void cadastra(pessoas *aux)
{
	int i;
	for (i = 0; i < 3; i++){
		cout << "Digite o sexo:";
		cin >> aux[i].sexo;
		cout << "Digite a cor dos olhos:";
		cin >> aux[i].olhos;
		cout << "Digite a cor dos cabelos:";
		cin >> aux[i].cabelo;
		cout << "Digite a idade:";
		cin >> aux[i].idade;
	}
}
void trocacabelo (pessoas *aux, string antiga, string nova)
{
    string n, a;
    int i;
    cout << "Digite a cor antiga dos olhos que deseja alterar: ";
    cin >> a;
    cout << "Digite a nova cor dos olhos que deseja alterar: ";
    cin >> n;
    for (i = 0; i < 3; i++)
    {
        if (aux[i].olhos == a)
        {
            aux[i].olhos = n;
        }
    }

}
int contacabelo (pessoas *aux, string cor)
{
	int i,c = 0;
	for (i = 0; i < 3; i++)
	{
		if (aux[i].cabelo == cor)
		{
			c = c + 1;
		}
	}
	return c;
}
int main ()
{
	int i;
    string antiga,nova;
	pessoas dados[3];
	cadastra(dados);
	cout << "Quantidade de habitantes com cabelo preto:" << contacabelo(dados,"preto") <<endl;
    trocacabelo(dados,antiga,nova);
    for (i = 0; i < 3; i++)
    {
        cout << dados[i].sexo << endl;
        cout << dados[i].olhos << endl;
        cout << dados[i].cabelo << endl;
        cout << dados[i].idade << endl;
    }
	return 0;
}