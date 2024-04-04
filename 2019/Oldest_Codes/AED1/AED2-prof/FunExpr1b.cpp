#include<iostream>
using namespace std;

float Expr(int n)
{
   float s = 0;
   for (int i=1; i<=n; i++)
      s = s + 1/ (float) i;
   return s;
}
int main()
{
    int n;
    cout << "Digite um valor para N ";
    cin >> n;
    cout << "Valor da expressão é "<< Expr(n);
    return 0;
}
