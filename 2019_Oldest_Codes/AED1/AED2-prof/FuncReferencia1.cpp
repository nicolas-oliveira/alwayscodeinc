#include<iostream>

using namespace std;

void incr(int x, int &y)
{
    y = y+x;
}
int main()
{
    int a,b;
    cout << "Digite o valor Y ";
    cin >> a;
    cout << "Digite o valor do incremento ";
    cin >>b;
    incr(b, a);
    cout << "Valor de y "<< a;
    return 0;
}
