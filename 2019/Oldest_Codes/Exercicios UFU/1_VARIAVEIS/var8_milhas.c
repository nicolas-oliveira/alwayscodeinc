//Leia uma distância em quilometros e apresente-a convertida em milhas.
//A formula de conversão é> M = k/1,61, sendo k a distancia em kilometros e m em milhas

#include <stdio.h>

int toupper(int var);

int main(){
    char esc;
    float k, m;
    
    do{
        printf("Digite a conversão Km ou Milhas(K ou M): ");
        scanf("%c", &esc);
        esc = toupper(esc);
        printf("\e[H\e[2J");
        
        if(esc == 'K'){
            printf("Digite o valor em quilometros: ");
            scanf("%d", &k);
            m = (k / 1.61);
            printf("\e[H\e[2J");
            printf("O valor em milhas e: %d", m);
        }
        
        if(esc == 'M'){
            printf("Digite o valor em milhas: ");
            scanf("%d", &m);
            k = (m * 1.61);
            printf("\e[H\e[2J");
            printf("O valor em quilometros e: %d", k);
        }
    }while(esc != 'K' && esc != 'M');

    return 0;
}

int toupper(int var){
    if(var >= 97 && var <= 122)
    var -= 32;
    return var;
}