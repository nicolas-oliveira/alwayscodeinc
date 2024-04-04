#include <iostream>
using namespace std;
void selectionsort(int vet[], int tam)
{
   int aux, menor;
   for(int i=0 ; i<tam-1; i++)
   {
       menor=i;
       for( int j = i+1; j < tam ; j++)
       {
           if(vet[j] < vet[menor])
               menor = j;
       }
       if(i != menor)
       {
           aux = vet[i];
           vet[i] = vet[menor];
           vet[menor]=aux;
       }
   }
   for (int i=0 ; i < tam ; i++)
      cout << vet[i] << " ";
}

int main()
{
    int t;
    cout << "Entre com tamanho do vetor ";
    cin >> t;
    int vet[t];
    for (int i =0 ; i< t; i++)
   {
       cin >> vet[i];
   }
   selectionsort(vet,t);
   return 0;
}
