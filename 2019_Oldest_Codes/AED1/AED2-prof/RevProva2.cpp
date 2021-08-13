#include <iostream>
#include <stdlib.h>
using namespace std;

struct TProduto{
    int codigo;
    string nome, descricao, unid;
    float qtde, valor_compra, valor_venda;
};
TProduto prods[5];// vetor de produtos
void cadastra()// faz o cadastro de produtos no vetor
{
    for(int i=0; i< 5; i++)
    {
        cout << "Código ";
        cin >> prods[i].codigo;
        cout << "Nome";
        cin >> prods[i].nome;
        cout << "Descrição";
        cin >> prods[i].descricao;
        cout << "Tipo Unidade";
        cin >> prods[i].unid;
        cout << "Quantidade";
        cin >> prods[i].qtde;
        cout << "Valor de Compra";
        cin >> prods[i].valor_compra;
    }
}//fecha a função cadastra
void calculaVenda(float p)
{
    for(int i=0 ; i<5; i++)
        prods[i].valor_venda = prods[i].valor_compra +
                               p*prods[i].valor_compra/100;
}//fecha função calculaVenda
void listaProduto()
{
    for(int i=0 ; i<5; i++)
    {
        cout << "Código "<< prods[i].codigo << endl;
        cout << "Nome " << prods[i].nome<< endl;
        cout << "Descrição "<< prods[i].descricao<< endl;
        cout << "Tipo Unidade "<< prods[i].unid<< endl;
        cout << "Quantidade "<< prods[i].qtde<< endl;
        cout << "Valor de Compra "<< prods[i].valor_compra<< endl;
        cout << "Valor de Venda "<< prods[i].valor_venda<< endl;
        cout << endl;
    }
}//fecha listaProduto
void buscaProduto(int c)
{
   bool achei=false;
   for(int i=0 ; i<5; i++)
   {
      if(prods[i].codigo == c)
      {
        cout << "Código "<< prods[i].codigo << endl;
        cout << "Nome " << prods[i].nome<< endl;
        cout << "Descrição "<< prods[i].descricao<< endl;
        cout << "Tipo Unidade "<< prods[i].unid<< endl;
        cout << "Quantidade "<< prods[i].qtde<< endl;
        cout << "Valor de Compra "<< prods[i].valor_compra<< endl;
        cout << "Valor de Venda "<< prods[i].valor_venda<< endl;
        achei = true;
      }
   }
   if(achei==false)
       cout<< "Código não cadastrado!!";
}
int main()
{
    cadastra();
    float perc;
    cout << "Digite o % de lucro ";
    cin >> perc;
    calculaVenda(perc);
    listaProduto();
    buscaProduto(108);
    return 0;
}
