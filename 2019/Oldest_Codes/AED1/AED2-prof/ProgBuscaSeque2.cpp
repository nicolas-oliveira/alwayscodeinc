#include <iostream>
using namespace std;
int busca_seq(int vet[], int tam, int valor)
{
   for(int i=0; i<tam; i++)
   {
      if (vet[i] == valor)
          return i;
   }
   return -1;
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
    int p= busca_seq(vet, t, val);
    if(p>= 0)
        cout << " o valor está na posição " << p+1;
    else
        cout << "valor não pertence ao vetor";
    return 0;
}
