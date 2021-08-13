#include <iostream>
#include <locale>
using namespace std;

bool perfeito(int x)
{
    int s=0;
    for(int i =1; i<x ; i++)
        if(x%i ==0)
           s = s+i;
    if (s == x)
        return true;
    else
        return false;
}
int main()
{
   int n;
   setlocale(LC_ALL, "portuguese");
   cout << "Informe um valor inteiro";
   cin >> n;
   if(perfeito(n))
      cout << "número perfeito";
   else
      cout << "número imperfeito";
   return 0;
}
