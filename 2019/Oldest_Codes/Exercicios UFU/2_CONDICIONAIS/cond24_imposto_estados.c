/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Faça um programa em que o usuário entre com o valor e o estado destino do
produto e o programa retorne o preço final do produto acrescido do imposto do estado
em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem
de erro.
*/
#include <stdio.h>
#include <string.h> //strcmp de comparar strings , 0 é igual, 1 diferente
int main(){
    float vl;
    char vl_name[2];
    printf("Digite o valor do produto: ");
    scanf("%f",&vl);
    
    do{
        printf("\e[H\e[2J");
        
        printf("Digite o estado correspondente (MG, SP, RJ, MS): ");
        scanf("%s",&vl_name);
        
            if(strcmp(vl_name, "MG") == 0){
            printf("A taxa de imposto é de 7%%\nO valor do imposto é de %.2f\n", (vl*0.07));
            printf("O valor total é de %.2f", (vl*1.07));
            
            }else if(strcmp(vl_name, "SP") == 0){
            printf("A taxa de imposto é de 12%%\nO valor do imposto é de %.2f\n", (vl*0.12));
            printf("O valor total é de %.2f", (vl*1.12));
            
            }else if(strcmp(vl_name, "RJ") == 0){
            printf("A taxa de imposto é de 15%%\nO valor do imposto é de %.2f\n", (vl*0.15));
            printf("O valor total é de %.2f", (vl*1.15));
            
            }else if(strcmp(vl_name, "MS") == 0){
            printf("A taxa de imposto é de 8%%\nO valor do imposto é de %.2f\n", (vl*0.08));
            printf("O valor total é de %.2f", (vl*1.08));
            
            }else{
            printf("Não existe um valor correspondente. Digite novamente");
            
            }
        
    }while(strcmp(vl_name, "MG") != 0 && strcmp(vl_name, "SP") != 0 && strcmp(vl_name, "RJ") != 0 && strcmp(vl_name, "MS") != 0);
    return 0;
}