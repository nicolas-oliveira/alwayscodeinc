#include <iostream>
using namespace std;
void quicksort(int vet[], int inicio, int fim)
{
  int pivo,meio,aux, i=inicio,j=fim;
  meio = (int) ((i+j)/2);
  pivo = vet[meio];
  do
  {
      while(vet[i] < pivo) i =i +1;
      while (vet[j] > pivo) j = j-1;
      if(i<=j)
      {
          aux = vet[i];
          vet[i]= vet[j];
          vet[j] = aux;
          i=i+1;
          j=j-1;
      }
  }while (j>i);
  if(inicio <j ) quicksort(vet,inicio, j);
  if(fim > i) quicksort(vet,i, fim);
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
