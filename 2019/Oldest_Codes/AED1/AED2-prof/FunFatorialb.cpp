#include<iostream>
using namespace std;

unsigned long Fat(int n)
{
   unsigned long f = 1;
   for(long i=1; i<=n; i++)
      f = f *i;
   return f;
}
int main()
{
    int n;
    cout << "Digite um valor para N ";
    cin >> n;
    cout << n <<"!= "<< Fat(n);
    return 0;
}
