#include <iostream>
using namespace std;

int Expo ( int x, int n)
{
    if( n ==0)
        return 1;
    else
        return x * Expo(x, n-1);
}
int main()
{
    int x,n;
    cin >> x >> n;
    cout << "X^n =

    "<< Expo(x,n);
    return 0;
}
