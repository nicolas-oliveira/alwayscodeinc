#include <iostream>
using namespace std;

bool NegPos(int valor)
{
    if(valor < 0)
        return true;
    else
        return false;
}
int main()
{
    int v;
    cout << "Valor ";
    cin >> v;
    if(v==0) cout<< "Neutro";
    else
    {
        if (NegPos(v))
            cout << "Negativo";
        else
            cout << "Positivo";
    }
    return 0;
}
