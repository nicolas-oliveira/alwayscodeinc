#include <iostream>
#include <locale>
using namespace std;
int contDiv(int x)
{
   int cont =0;
   for(int i=1; i<=x; i++)
      if(x%i ==0)
         cont = cont +1;
    return cont;
}
int main()
{
   int n;
   setlocale(LC_ALL, "portuguese");
   cout << "Informe um valor inteiro ";
   cin >> n;
   cout << "Há "<< contDiv(n) << " divisores";
   return 0;
}
