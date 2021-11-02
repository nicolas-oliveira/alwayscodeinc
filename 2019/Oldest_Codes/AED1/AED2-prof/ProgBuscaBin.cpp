#include <iostream>
using namespace std;
int busca_bin(int vet[], int tam, int valor)
{
   int m = tam/2;
   if (vet[m] == valor)
     return m;
   else
     if(vet[m] > valor){
       for(int i=0; i<m; i++)
         if(vet[i]== valor)
             return i;
       return -1;
     }
     else
     {
       for(int i=m+1; i<tam; i++)
         if(vet[i]== valor)
             return i;
       return -1;
     }
}
void quick_sort(int vet[], int inicio, int fim)
{
    int pivo, i=inicio,j=fim, meio, aux;
    meio= (int) ((i+j)/2);
    pivo = vet[meio];
    do
    {
       while(vet[i] < pivo) i=i+1;
       while(vet[j] > pivo) j=j-1;
       if(i<=j)
       {
          aux=vet[i];
          vet[i] = vet[j];
          vet[j] = aux;
          i = i+1;
          j = j-1;
       }
    }while(j>i);
    if(inicio < j)quick_sort(vet,inicio,j);
    if(i < fim) quick_sort(vet, i, fim);
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
    int valor;
    cout << "Digite o valor a ser localizado ";
    cin >> valor;
    quick_sort(vet,0,t-1);// ordena o vetor
    int p = busca_bin(vet, t, valor);
    if (p>=0)
        cout <<"No vetor ordenado o valor está na posição "<< p;
    else
        cout << "Valor não pertence ao vetor";
   return 0;
}
