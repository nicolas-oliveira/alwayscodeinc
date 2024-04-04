#include<stdio.h>

int main(){
    int r, x, i;
    printf("Digite um número: ");
    scanf("%d",&x);
    for(i=0; i<32; i++){
        r = (x % 2);
        x = (x / 2);
        printf( "%d", r);
    }
    printf("\n");
    return 0;
}