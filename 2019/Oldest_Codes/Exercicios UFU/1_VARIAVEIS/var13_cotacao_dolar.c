/*Leia a cotacao do dolar e leia um valor em real, depois mostre o valor correspondente em dolar
*/

#include <stdio.h>
int main(){
    float cot, rs, dol;
    printf("Digite o valor em reais: ");
    scanf("%f", &rs);
    printf("\e[H\e[2J");    //LIMPA TELA DO SATANAS_C
    printf("Qual a cotacao atual do dolar? (EX: 3.88 RS): ");
    scanf("%f", &cot);
    dol = rs / cot;
    printf("\e[H\e[2J");
    printf("O valor em dolares correspondente a cotacao de %f reais eh no total de: $%f\n", cot, dol);
        
    return 0;
}