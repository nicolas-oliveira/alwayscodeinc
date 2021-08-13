#include<iostream>
using namespace std;

int fat(int n)
{
   int f=1;
   for(int i=n ; i>=1; i--)
       f = f *i;
   return f;
}
int main()
{
    int v;
    cout << "Digite um valor inteiro positivo ";
    cin >> v;
    cout <<v<<"!= " << fat(v);
    return 0;
}
