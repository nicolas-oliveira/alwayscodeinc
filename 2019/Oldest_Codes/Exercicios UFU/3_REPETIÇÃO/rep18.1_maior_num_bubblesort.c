/*
 Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecida pelo usuário.
Fazer ordenando os vetores com bubble sort
*/
#include <stdio.h>
int main(){
    int n;
    float a[n], hold;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    //Leitura do vetor
    for(int i = 0; i < n; i++){
        printf("[%d] - Digite o numero: ", i);
        scanf("%f", &a[i]);
    }

    //Ordenação em bubble sort
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j] < a[j+1]){ // 5 > 3 hold = 5 [0] = [1], [1] = hold
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }
        }
    }

    //output do vetor
    for(int i =0; i < n; i++)
    printf("%.0f\n", a[i]);
    return 0;
}