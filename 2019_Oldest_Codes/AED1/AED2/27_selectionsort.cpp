#include <iostream>

using namespace std;
void selectionsort(int vet[], int tamanho){
    int aux, menor;
    
    for(int i = 0; i < tamanho-1; i++){
        menor = i;
        
         for(int j = i+1; j < tamanho; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            }
        } 

        /* for(int j = i+1; j < tamanho-1; j++){
            if(vet[j] > vet[menor]){
                menor = j;
            }
        } DECRESCENTE */

        if(i != menor){
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}
int main(){
    
    int vet[5] = {2,4,6,8,0};
    selectionsort(vet,5);

    for(int i = 0; i < 5; i++)
    cout << vet[i] << " ";
    
    return 0;
}