// Escreva um programa que contenha duas variáveis inteiras. 
// Compare seus endereços e exiba o maior endereço.

#include <stdio.h>

int main(){
    int a = 0, *ptr, b = 0, *ptr2;
    ptr = &a;
    ptr2 = &b;
    printf("%x\n",ptr);
    printf("%x\n",ptr2);
    if(ptr > ptr2){
        printf("%x é > %x",ptr,ptr2);
    }else{
        printf("%x é > %x",ptr2,ptr);
    }
    return 0;
}