#include <iostream>
using namespace std;
void bubblesort(int vet[], int tamanho){
    int hold, flag;
    do{
        flag = 0;
        for(int i = 0; i < tamanho-1; i++){
            if(vet[i] > vet[i+1]){
                hold = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = hold;
                flag = 1;
            }
        }
    }while(flag == 1);
    
    for(int i = 0; i < tamanho-1; i++)
        cout<< vet[i] << " ";
}
int main(){
    
    int vet[5] = {2,4,6,8,0};
    bubblesort(vet,5);
    
    return 0;
}