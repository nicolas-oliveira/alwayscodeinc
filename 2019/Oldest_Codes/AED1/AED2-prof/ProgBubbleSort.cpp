#include <iostream>
using namespace std;
void bubblesort(int vet[], int tam)
{
   int aux, flag;
   do{
    flag =0;
     for (int i =0 ; i< tam-1; i++)
     {
       if(vet[i] > vet[i+1])
        {
           aux = vet[i];
           vet[i] = vet[i+1];
           vet[i+1]= aux;
           flag =1;
        }
    }
   }while(flag == 1);
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
   bubblesort(vet,t);
   return 0;
}
