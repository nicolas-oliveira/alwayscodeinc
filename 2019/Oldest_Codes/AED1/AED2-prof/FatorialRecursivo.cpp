#include <iostream>
using namespace std;

int fatorial (int n)
{
    int f = 1;
    for(int i=n; i>=1; i--)
        f = f*i;
    return f;
}

int fat(int n)
{
    if (n==0)
        return 1;
    else
        return n*fat(n-1);
}

int main()
{
    cout << "Digite um valor inteiro ";
    int x;
    cin >> x;
    cout << "Fatorial = "<< fatorial(x)<<endl;
    cout << "Fatorial = "<< fat(x)<<endl;
    return 0;
}
