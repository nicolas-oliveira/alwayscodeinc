/*
Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:
------------------------------------------
| CONSUMO    |  (Km/l) |      MENSAGEM     |
------------------------------------------
| menor que  |    8     | Venda o carro!   |
| entre      |  8 e 14  |   Econômico!     |
| maior que  |    12    | Super econômico! |
------------------------------------------

*/
#include <stdio.h>
int main(){
    float km, l, kml;
    printf("Digite a distância percorrida: ");
    scanf("%f", &km);
    printf("Digite a quantidade em litros gasta: ");
    scanf("%f", &l);
    kml = km / l;
    if(kml < 8){
        printf("%.2f Km/l - Venda o carro!",kml);
    }else if(kml >=8 && kml <= 14){
        printf("%.2f Km/l - Econômico!",kml);
    }else{
        printf("%.2f Km/l - Super econômico!",kml);
    }
    return 0;
}