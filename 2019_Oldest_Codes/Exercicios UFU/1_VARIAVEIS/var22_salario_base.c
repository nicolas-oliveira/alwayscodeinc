/*
 Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
ele paga 7% de imposto sobre o salário-base.
*/
#include <stdio.h>
int main(){
    float sal_base, sal_final;
    printf("Salario-base: R$");
    scanf("%f", &sal_base);
    sal_final = sal_base * (1.05)*(0.93);
    printf("Salario final: R$%f", sal_final);
    return 0;
}