// Escreva um programa que contenha duas variáveis inteiras. Leia essas 
// variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo 
// do maior endereço.

#include <stdio.h>

int main(){
    int a,b, *ptr1,*ptr2;
    char c,d, *ptr3,*ptr4;

    printf("Digite o valor de 'a'(int): ");
    scanf("%d",&a);

    printf("Digite o valor de 'b'(int): ");
    scanf("%d",&b);

    printf("Digite o valor de 'c'(char): ");
    scanf("%c",&c);

    printf("Digite o valor de 'd'(char): ");
    scanf("%c",&d);

    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;  
    ptr4 = &d;

    printf("a: %x\nb: %x\nc: %x\nd: %x\n",ptr1,ptr2,ptr3,ptr4);
    if(ptr1 > ptr2){
        printf("O end de a é > que b");
    }else if(ptr2 > ptr1){
        printf("O end de a é > que b");
    }
    return 0;
}