/* 
Faca um programa que leia o valor de um produto e seu desconto imprima o valor com desconto
*/
#include <stdio.h>
int main(){
    float val_produto, porc_desconto, val_desconto;    
    printf("Digite o valor do produto: ");
    scanf("%f", &val_produto);
    printf("Digite o valor do deconto em \%: ");
    scanf("%f", &porc_desconto);
    val_desconto = (val_produto * (1 - porc_desconto / 100 ));
    printf("%f", val_desconto);
    return 0;
}