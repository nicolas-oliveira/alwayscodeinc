#include <iostream>
using namespace std;

int SomaVet(int v[], int n)
{
    if (n ==0)
        return 0;
    else
        return v[n-1]+ SomaVet(v, n-1);
}

int main()
{
   int vet[5];
   for(int i=0; i< 5; i++)
       cin >> vet[i];
   cout << "Soma = " << SomaVet(vet, 5);
   return 0;
}
