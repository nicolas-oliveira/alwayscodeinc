/*
 Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.
*/
#include <stdio.h>
int main(){
    int i = 0;
    float a[10], b[10];
    while(i < 10){
        printf("Digite um numero: ");
        scanf("%f", &a[i]);
        i++;
    }
    
    i = 0;
    while(i < 10){
        b[i] = a[i]*a[i]; 
        printf("O quadrado de %d é:%.2f\n", i,b[i]);
        i++;
    }
    
    return 0;
}
