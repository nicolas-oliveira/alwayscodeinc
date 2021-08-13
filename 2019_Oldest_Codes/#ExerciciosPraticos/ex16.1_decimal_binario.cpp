#include <stdio.h>
int main(){
    int vet[35];
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);    
        for (int i = 33; i >= 0; i--){
        vet[i] = (n % 2); // O vetor recebe o indice
        n /= 2; // Operador que indica que n = (n/2)
    }
        for ( int i = 0; i < 32; i++){
        printf("%d", vet[i]);
    } 
}