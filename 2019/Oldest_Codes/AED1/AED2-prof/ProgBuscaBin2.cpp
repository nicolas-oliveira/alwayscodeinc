#include <iostream>
using namespace std;
int busca_bin(int vet[], int tam, int valor)
{
   int i=0, j = tam-1;
   while(i<j){
       int meio = (i+j) /2;
       if(vet[meio] == valor)
         return meio;
       else
          if(valor > vet[meio])
             i = meio+1;
          else
             j = meio-1;
   }
   return -1;
}

void quicksort(int vet[], int inicio, int fim)
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
    int val;
    cout << "Digite o valor a ser pesquisado "    ;
    cin >> val;
    quicksort(vet, 0, t-1);
    int p= busca_bin(vet, t, val);
    if(p>= 0)
        cout << " o valor está na posição " << p+1;
    else
        cout << "valor não pertence ao vetor";
    return 0;
}
