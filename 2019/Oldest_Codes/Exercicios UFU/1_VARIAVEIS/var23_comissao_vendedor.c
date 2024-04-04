/*
 Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
  - O total a pagar com desconto de 10%;
  - O valor de cada parcela, no parcelamento de 3× sem juros;
  - A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
  - A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
 */
#include <stdio.h>
int main(){
    float total_n;
    printf("Digite o total do valor da venda: ");
    scanf("%f", &total_n);
    printf("Total com desconto de 10\%: R$%f,\n", (total_n*0.9));
    printf("Parcelas de 3x sem juros: R$%f\n", (total_n / 3));
    printf("Comissão caso seja à vista com desconto: R$%f\n", (total_n*0.9*0.05));
    printf("Comissão caso seja parcelado: R$%f", (total_n*0.05));
    
    return 0;
}