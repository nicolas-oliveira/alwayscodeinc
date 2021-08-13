#include <iostream>
using namespace std;
void bubblesort(int vet[], int tam)
{
    int aux,flag;
    do{
      flag=0;
      for(int i=0 ; i < tam-1 ; i++)
      {
          if(vet[i] > vet[i+1])
          {
              aux = vet[i];
              vet[i] = vet[i+1];
              vet[i+1] = aux;
              flag =1;
          }
     }
    }while(flag ==1);  //imprime o vetor ordenado
    for (int i=0 ; i < tam ; i++)
        cout << vet[i] << " ";
}

int main()
{
    int tam;
    cout << "Entre com o tamanho do vetor ";
    cin>>tam;
    int vetor[tam];
    for (int i=0 ; i < tam ; i++)
      cin >> vetor[i]  ;
    bubblesort(vetor,tam);
    return 0;
}
