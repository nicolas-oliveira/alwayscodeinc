#include<iostream>
using namespace std;

float Expr(int n)
{
   float s=1;
   int f=1;
   for(int i=1 ; i<= n; i++){
       f = f *i;
       s = s + 1/(float)f;
   }
   return s;
}
int main()
{
    int v;
    cout << "Digite um valor inteiro positivo ";
    cin >> v;
    cout <<"O valor da expressão é " << Expr(v);
    return 0;
}
