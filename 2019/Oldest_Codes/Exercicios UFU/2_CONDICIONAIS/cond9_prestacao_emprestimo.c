/*
 Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo nao concedido, caso
contrário imprima: Empréstimo concedido
*/
#include <stdio.h>
int main(){
    float salario, prestacao, pc_emp;
    printf("Digite o valor do salário: R$");
    scanf("%f",&salario);
    printf("Digite o valor da prestação: R$");
    scanf("%f", &prestacao);
    pc_emp = (prestacao / salario)*100;
    if(pc_emp < 20.0 && pc_emp >= 0.0){
        printf("Empréstimo concedido. \nTotal de %.1f\%", pc_emp); //Para imprimir % use '\%' 
    }else{
        printf("Empréstimo não concedido. \nTotal de %.1f\% ", pc_emp);
    }
    
    return 0;
}
