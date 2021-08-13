#include<iostream>
using namespace std;

double soma(int n)
{
   double s=0;
   for(int i=1 ; i<= n; i++)
      s = s + 1/(double)i;
   return s;
}
int main()
{
    int v;
    cout << "Digite um valor inteiro positivo ";
    cin >> v;
    cout << "Valor da expressão é " << soma(v);
    return 0;
}
