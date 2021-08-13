/*
Considere a empresa tabajaraPRODS, elabore um pograma que cadastre produtos e calcule
o valor de revenda dos mesmos
Dados do produto:
codigo int
nome string
descricao string
tipo unidade string
qtde float
valor-compra float
valor-venda float
Seu programa deve cadastrar 5 produtos
Posterior ao cadastro leia 0% de lucro e calcule os valores de revenda
Liste todos os produtos cadastrados
Verifique se há produto com código
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Tproduto {
    int codigo;
    string nome, descricao, unid;
    float qtde, valor_compra, valor_venda;
};
Tproduto prods[5];
void cadastra(){
    for(int i=0; i<5; i++){
        cout << "codigo ";
        cin >> prods[i].codigo;
    }
}