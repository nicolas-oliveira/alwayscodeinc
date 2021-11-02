#include <iostream>
using namespace std;
void selectionsort(int vet[], int tam)
{
   int aux, menor;

   for (int i =0 ; i< tam; i++)
   {
       menor = i;
       for(int j = i+1; j< tam; j++)
       {
           if(vet[j] < vet[menor])
           {
               menor = j;// salvo a posição do menor valor
           }
       }// saio daqui com a posição do menor valor do vetor
       if( i != menor)
       {
           aux = vet[i];
           vet[i] = vet[menor];
           vet[menor]= aux;
       }
   }
   // imprime o vetor ordenado
   for (int i =0 ; i< tam; i++)
   {
       cout << vet[i] << " ";
   }
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
