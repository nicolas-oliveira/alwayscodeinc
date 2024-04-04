#include <stdio.h>
int main(){
    double n,m, soma = 0;
    scanf("%lf", &n);
    scanf("%lf", &m);
    soma = ( (n*3.5) + (m*7.5) ) / 11.0;
    printf("MEDIA = %.5lf\n", soma);
    return 0;
}