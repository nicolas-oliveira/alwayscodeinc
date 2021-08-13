/*
 A nota final de um estudante é calculada a partir de três notas atribuı́das entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. A média das três notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
*/
#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;
    do{
    printf("Trabalho de Laboratorio: ");
    scanf("%f", &nota1);
    }while(nota1 > 10.0);
    
    do{
    printf("Avaliação Semestral: ");
    scanf("%f", &nota2);
    }while(nota2 > 10.0);
    
    do{
    printf("Exame Final: ");
    scanf("%f", &nota3);
    }while(nota3 > 10.0);
    
    media = ((nota1*2.0) + (nota2*3.0) + (nota3*5.0))/10.0;
    if(media <= 2.9){
        printf("Reprovado\nNota: %.2f",media);
    }else if(media <= 4.9 && media >= 3.0){
        printf("Recuperação\nNota: %.2f",media);
    }else if(media > 5.0){
        printf("Aprovado\nNota: %.2f",media);
    }
    return 0;
}