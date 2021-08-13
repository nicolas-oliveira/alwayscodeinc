/*
 Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos
*/
#include <stdio.h>
int main(){
    float a,b,c,media;
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &a);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &b);
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &c);
    media = (a + b + (c*2)) / 4;
    printf("A média tem o total de: %.2f", media);  
    return 0;
}