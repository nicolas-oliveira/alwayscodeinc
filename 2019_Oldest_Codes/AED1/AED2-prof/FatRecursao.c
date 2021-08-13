#include <iostream>
using namespace std;

int fatorial (int n)
{
    int f = 1;
    for(int i=n; i>=1; i--)
        f = f*i;
    return f;
}

int main()
{
    cout << "Digite um valor inteiro ";
    int x;
    cin >> x;
    cout << "Fatorial = "<< fatorial(x);
    return 0;
}

