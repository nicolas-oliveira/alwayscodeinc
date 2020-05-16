// Escreva um programa que declare um inteiro, um real e um char, e ponteiros 
// para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). 
// Modifique os valores de cada variável usando os ponteiros. Imprima os valores 
// das variáveis antes e após a modificação.

#include <stdio.h>
int main(){
    int var1 = 0,*ptr1;
    char var2 = '0',*ptr2;
    float var3 = 0.0,*ptr3;
    printf("%d, %c, %.2f != ",var1,var2,var3);
    
    // ptr = &var1 => recebe o endereço da variável
    // *ptr => guarda o valor que o endereço aponta

    ptr1 = &var1;
    *ptr1 = 1;
    printf("%d",var1);

    ptr2 = &var2;
    *ptr2 = 'A';

    ptr3 = &var3;
    *ptr3 = 1.11;

    return 0;
}