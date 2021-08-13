#include <iostream>

using namespace std;

void selectionsort(int vet[], int tamanho){
    int aux, j;
    for(int i=0; i < tamanho; i++){
        j=1;
        while(j>0 && vet[j-1] > vet[j]){
            aux = vet[j-1];
            vet[j-1] = vet[j];
            vet[j] = aux;
            j--;
        }
    }
    for(int i=0; i<tamanho;i++)
    cout << vet[i];
    
}
int main(){
    
    int vet[5] = {2,4,6,8,0};
    selectionsort(vet,5);

    for(int i = 0; i < 5; i++)
    cout << vet[i] << " ";
    
    return 0;
}