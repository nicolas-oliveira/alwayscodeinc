/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
#include <locale>
#include<stdlib.h>
using namespace std;

int main ()
{
   int k, n, maior=0;
   cout << "Digite um valor k ";
   cin >> k;
   for( int i =1 ; i <= k; i++)
   {
       cout << "Digite um valor ";
       cin >> n;
       if(n > maior)
          maior = n;
   }
   cout << "O maior valor lido foi " << maior;
   return 0;
}
