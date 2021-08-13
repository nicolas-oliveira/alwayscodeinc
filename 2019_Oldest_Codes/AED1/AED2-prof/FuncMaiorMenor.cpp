#include <iostream>
using namespace std;

void leitura()
{
   int val, maior, menor;
   for(int i=1; i<=50; i++)
   {
       cout<< "Valor : ";
       cin >> val;
       if (i==1)
       {
           maior = val;
           menor = val;
       }
       else
       {
          if(maior < val)
              maior = val;
          if(menor > val)
            menor = val;
       }
   }
   cout << "Maior valor lido "<< maior << " e o menor "<< menor;
}//fecha leitura
int main()
{
    leitura();
    return 0;
}
