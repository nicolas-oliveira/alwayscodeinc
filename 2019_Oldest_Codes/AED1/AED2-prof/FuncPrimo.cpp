#include <iostream>
#include <locale>
using namespace std;

bool verificaPrimo(int i)
{
   for( int x=2 ; x<i-1; x++)
      if(i%x == 0)
        return false;
   return true;
}
int main()
{
   int n;
   setlocale(LC_ALL, "portuguese");
   cout << "Digite um valor inteiro ";
   cin >> n;
   if(verificaPrimo(n))
      cout << "valor é primo";
   else
      cout << "Valor não é primo";
   return 0;
}
