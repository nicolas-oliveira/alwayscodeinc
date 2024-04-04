/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
#include <locale>
using namespace std;
struct TData {
   int dia;
   int mes;
   int ano;
};
struct TFisico{
    TData data;
    float altura;
    string nome;
};
 int main ()
{
    TFisico dados [10];
    int cont =0 , op=0;
    setlocale(LC_ALL,"portuguese");
    do{
        cout << "MENU Revis�o"<<endl;
        cout << "1 - cadastrar" << endl;
        cout << "2 - Listar nome e altura" << endl;
        cout << "3 - Pesquisar por data" << endl;
        cout << "0 - sair" << endl;
        cin >> op;
        switch (op)
        {
          case 1:
              if( cont < 10)
              {
                  cout << "Digite o nome : ";
                  cin >> dados[cont].nome;
                  cout << "Altura : ";
                  cin >> dados[cont].altura;
                  cout << "Data de Nascimento: (dd mm aaaa)";
                  cin >> dados[cont].data.dia >>
                         dados[cont].data.mes >>
                         dados[cont].data.ano;
                  cont++;
              };
           break;
          case 2:
              for (int i =0 ; i< cont; i++)
              {
                  cout << "Nome "<< dados[i].nome << "  Altura "
                  << dados[i].altura << endl;
              }
           break;
          case 3 :
              int d, m, a;
              cout <<"Digite a data a ser pesquisada(dd mm aaaa) ";
              cin >> d >> m >> a;
              for ( int i=0 ; i< cont; i++)
              {
                 if((dados[i].data.dia == d) && (dados[i].data.mes == m)
                     && (dados[i].data.ano == a))
                    cout << "Nome "<< dados[i].nome << "  Altura "
                        << dados[i].altura << endl;
              }
            break;
          case  0:
            return 0;
          default :
            cout << "Valor inv�lido!!";
        }
    }while ( op!=0);
    return 0;
}
