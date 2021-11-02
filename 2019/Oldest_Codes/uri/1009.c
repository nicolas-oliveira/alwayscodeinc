#include <stdio.h>

int main(){
    char nome[10];
    double a,b, tot;
    scanf("%s", nome);
    scanf("%lf",&a);
    scanf("%lf",&b);
    tot = a + (b*0.15); 
    printf("TOTAL = R$ %.2f\n", tot);

    return 0;
}