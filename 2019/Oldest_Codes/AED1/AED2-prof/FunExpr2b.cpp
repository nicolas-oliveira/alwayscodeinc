#include<iostream>
using namespace std;

 float Expr(int n)
{
   float s = 1;
   int f = 1;
   for(int i=1; i<=n; i++){
      f = f *i;
      s = s + 1/(float)f;
   }
   return s;
}
int main()
{
    int n;
    cout << "Digite um valor para N ";
    cin >> n;
    cout << "O valor da expressão é "<< Expr(n);
    return 0;
}
