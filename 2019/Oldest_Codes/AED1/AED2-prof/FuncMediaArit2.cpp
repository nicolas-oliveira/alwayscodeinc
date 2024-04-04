#include <iostream>
using namespace std;

float media()
{
   float val, soma=0;
   int cont=0;
   do{
      cout << "Valor ";
      cin >> val;
      soma = soma + val;
      if(val !=0) cont++;
   }while (val != 0);
   if (cont > 0)
       return soma/cont;
   return 0;
}
int main()
{
    cout << "Média "<< media();
    return 0;
}
