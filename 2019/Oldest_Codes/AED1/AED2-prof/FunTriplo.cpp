#include<iostream>
using namespace std;

void triplo (int &x)
{
    x = 3*x;
}

int main()
{
    int v;
    cin >> v;
    cout << "Valor lido "<< v << endl;
    triplo(v);
    cout << "Valor atual "<< v;
    return 0;
}
