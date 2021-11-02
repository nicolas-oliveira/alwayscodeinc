/* Leia um angulo em graus e apresente-o convertido em radianos e vice-versa. A formula de conversao e: 
R = G*pi/180, sendo g o angulo em graus e r em radianos e pi = 3,14
*/

#include <stdio.h>
int toupper(int var);
int main() {
    char esc;
    float g, r;
    do{
    printf("Escolha a formula de conversao em graus ou radianos(G ou R): ");
    scanf("%c", &esc);
    esc = toupper(esc);
    printf("\e[H\e[2J");
    
    
        
        if(esc == 'G'){    
            printf("Digite o valor em Graus: ");
            scanf("%f", &g);
            r = (g * (22/7))/ 180.00;
            printf("\e[H\e[2J");
            printf("O valor em Radianos é de aproximadamente: %.2f", r);
        }
        if(esc == 'R'){
            printf("Digite o valor em Radianos: ");
            scanf("%f", &r);
            g = (r * 180.00) / (22/7);
            printf("\e[H\e[2J");
            printf("O valor em Graus é aproximadamente: %.2f", g);
        }

    } while(esc != 'G' && esc != 'R');
    
    return 0;
}
int toupper (int var){
    if (var >= 97 && var <= 122)
    var -= 32;
    return var;
}