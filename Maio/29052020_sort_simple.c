// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os 
// valores em ordem crescente, uma linha em branco e em seguida, os valores na 
// sequência como foram lidos.
#include <stdio.h>
int swap(int *a, int *b){
    int hold = *a;
    *a = *b;
    *b = hold;
}
int main() {
    int num[3];
    int oldnum[3];
    for(int i = 0; i < 3; i++)
        scanf("%d", &num[i]);

    for(int i = 0; i < 3; i++)
        oldnum[i] = num[i];

    for(int i = 0; i < 2; i++) 
        for(int i = 0; i < 2; i++) 
            if(num[i] > num[i+1])
                swap(&num[i], &num[i+1]);

    for(int i = 0; i<3; i++)
        printf("%d\n", num[i]);

    printf("\n");
    
    for(int i = 0; i<3; i++)
        printf("%d\n", oldnum[i]);
    return 0;
}