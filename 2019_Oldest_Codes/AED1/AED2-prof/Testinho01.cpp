#include <iostream>
#include <locale>
using namespace std;

struct Teste{
   string nome;
   int matricula;
   float media;
};

bool aprovado(float media)
{
    if (media >= 5)
        return true;
    else
        return false;
}
int main()
{
   Teste dados[10];
   Teste aprov[10], reprov[10];
   int cont_aprov=0, cont_reprov=0;

   for (int i =0 ; i<10; i++)
   {
       cin >> dados[i].nome;
       cin >> dados[i].matricula;
       cin >> dados[i].media;
       if (aprovado(dados[i].media))
       {
           aprov[cont_aprov] = dados[i];
           cont_aprov++;
       }
       else
       {
           reprov[cont_reprov] = dados[i];
           cont_reprov++;
       }
   }
   for(int i=0; i<cont_aprov; i++)
   {
       //imprime aprovado
       cout << aprov[i].nome << " - "<< aprov[i].media<< endl;
   }
    for(int i=0; i<cont_reprov; i++)
   {
       //imprime aprovado
   }
   return 0;
}
