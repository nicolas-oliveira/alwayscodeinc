/* Leia um valor de comprimento em polegadas e apresente-o convertido em centimetros
A formula de conversao e: C = P*2,54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/
#include <stdio.h>
int toupper(int var);
int main(){
    
    char choice;
    int p, cm;
    do{
    
    printf("Escolha a unidade de medida centimetros ou Polegadas (C ou P): ");
    scanf("%c",&choice);
    
    choice = toupper(choice);
    
    printf("%c", choice);
    printf("\e[H\e[2J");
    
    
    
        if(choice == 'C'){
            printf("Digite o valor em centimetros: ");
            scanf("%d", &cm);
            p = cm /(2.64);
            printf("\e[H\e[2J");
            printf("O valor em polegadas e de: %d", p);
        }
    
        if(choice == 'P'){
            printf("Digite o valor em polegadas: ");
            scanf("%d", &p);
            cm = p * 2.64;
            printf("\e[H\e[2J");
            printf("O valor em centimetro e de: %d", cm);
        }
    
    } while(choice != 'C' && choice != 'P');
    
    return 0;
}

int toupper(int var){
    
    if(var >=97 && var <=122){
        var -= 32;
    }
    
    return var;
}