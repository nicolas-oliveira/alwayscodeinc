#include <iostream>
using namespace std;
void quicksort(int vet[], int inicio, int fim)
{
    int pivo, i=inicio,j=fim, meio, aux;
    meio= (int) ((i+j)/2);
    pivo = vet[meio];
    do{
       
       while(vet[i] < pivo) i++; //Icrementa se caso for menor
       while(vet[j] > pivo) j--; //Decrementa se caso for maior
       
       if(i <= j)
       {
        //Trocar de lugar
          aux=vet[i];
          vet[i] = vet[j];
          vet[j] = aux;
          i++; //Incrementa i
          j--; //Decrementa j
       }

    }while( j > i);
    
    if(inicio < j)quicksort(vet,inicio,j);
    
    if(i < fim) quicksort(vet, i, fim);
}

int main()
{
    int t;
    cout << "Entre com o tamanho do vetor ";
    cin >> t;
    int vet[t];
    for(int i=0; i< t ; i++)
        cin >> vet[i];
    quicksort(vet,0, t-1);
    for(int i=0; i<t; i++)
       cout << vet[i] << " ";
    
    return 0;
}
