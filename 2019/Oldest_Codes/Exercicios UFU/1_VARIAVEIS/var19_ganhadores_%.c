/*
A importancia de 780.000,00 sera divida entre tres ganhadores de um concurso 
Sendo que da quantia total:
  - O primeiro ganhador recebera 46%;
  - O segundo recebera 32%;
  - O terceiro recebera o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores:
*/
#include <stdio.h>
int main(){
    float ganh_1, ganh_2, ganh_3, val_r = 780000.00;
    ganh_1 = (val_r - (val_r * (1 - 0.46)));
    ganh_2 = (val_r - (val_r *(1 - 0.32)));
    ganh_3 = (val_r - (val_r * (1 - 0.22)));
    printf("Ganhador 1 = %f\nGanhador 2 = %f\nGanhador 3 = %f\n", ganh_1, ganh_2, ganh_3);
    return 0;
}