/*
 Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
informado ao usuário e o programa termina.
*/
#include <stdio.h>
int main(){
    float nota1 , nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    if(nota1 >= 0.0 && nota1 <= 10.0){
        if(nota2 >= 0 && nota2 <= 10.0){
            printf("A média é o total de: %.2f", (nota1 + nota2)/2.0); //.2f limita apenas duas casas decimais
        }else{
            printf("A segunda nota não tem um valor válido (%.2f)",nota2);
        }
    }else{
        printf("A primeira nota nao tem um valor válido (%.2f)", nota1);
    }
    return 0;
}
