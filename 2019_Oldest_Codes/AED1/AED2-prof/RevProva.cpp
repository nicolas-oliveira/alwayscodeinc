#include <iostream>
#include <stdlib.h>
using namespace std;

struct TProduto{
    int codigo;
    string nome, descricao, unid;
    float qtde, valor_compra, valor_venda;
};

TProduto prods[10]; // vetor de produtos
int indice = 0;   //índice do vetor de produtos

void cadastra()
{
    cout << "Código";
    cin >> prods[indice].codigo;
    cout << "Nome";
    cin >> prods[indice].nome;
    cout << "Descrição";
    cin >> prods[indice].descricao;
    cout << "Tipo Unidade";
    cin >> prods[indice].unid;
    cout << "Quantidade";
    cin >> prods[indice].qtde;
    cout << "Valor de Compra";
    cin >> prods[indice].valor_compra;
    indice++;
}
void setValorVenda(float p)
{
    for(int i=0 ; i<indice; i++)
        prods[i].valor_venda = prods[i].valor_compra +
                               p*prods[i].valor_compra/100;
}

void lista()
{
    for(int i=0 ; i<indice; i++)
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
}
void buscaProd(int c)
{
   bool achei=false;
   for(int i=0 ; i<indice; i++)
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
   if(achei == false)
      cout << "código não cadastrado!";
}
int main()
{
     cadastra();//cadastra novo produto
     float perc;
     cout << "Digite o % de lucro";
     cin >> perc;
     cadastra();//cadastra novo produto
     setValorVenda(perc);//calcula valor de venda dos produts
     system("cls");
     lista();//lista todos os produtos cadastrados
     buscaProd(23);// busca o produto com o código 23
     return 0;
}
