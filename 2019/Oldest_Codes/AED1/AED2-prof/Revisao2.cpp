/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
#include <locale>

using namespace std;

struct TData
{
    int dia, mes, ano;
};
struct TPessoa
{
    string nome;
    float altura;
    TData data_nasc;
};

int main()
{
   TPessoa dados[10] ;
   int ind=0, op=0;
   do{
       cout << "MENU Revis�o" << endl;
       cout << "Escolha sua op��o :" << endl;
       cout << "1 - Cadastrar" << endl;
       cout << "2 - Listar nomes e alturas"<<endl;
       cout << "3 - Buscar por data de nascimento "<< endl;
       cout << "0 - Sair"<<endl;
       cin >> op;
       switch (op)
       {
        case 1:
               if(ind < 10)
               {
                   cout << "Digite o nome ";
                   cin >> dados[ind].nome;
                   cout << "Digite a altura ";
                   cin >> dados[ind].altura;
                   cout << "Digite a data de nascimento dd mm aaaa ";
                   cin >> dados[ind].data_nasc.dia >>
                          dados[ind].data_nasc.mes >>
                          dados[ind].data_nasc.ano;
                   ind++;
               }
               break;
        case 2:
               for(int i =0; i<ind ; i++)
               {
                   cout << "Nome = " << dados[i].nome <<
                           " - Altura =" << dados[i].altura << endl;
               }
               break;
        case 3:
               break;
        case 0:
               return 0;
        default :
              cout << "op��o inv�lida!!!";
       }
   }while(op!=0);
   return 0;
}
