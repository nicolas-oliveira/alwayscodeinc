/*Leia um valor de volume em metros cubicos m3 e apresente-o convertido em litros. A formula de conversao e:
L= 1000 * M , sendo L o volume em litros e M o volume em metros cubicos
*/
#include <stdio.h>
int main(){
    float l = 0, m = 0;
    /*
    printf("Digite a quantidade em metros cubicos: ");
    scanf("%f", &m);
    l = 1000 * m;
    printf("A quantidade em litros e: %f\n", l);
    */
    printf("Digite a quantidade em litros: ");
    scanf("%f", &l);
    m = l / 1000.0;
    printf("A quantidade em metros cubicos e: %f", l);
  
    return 0;
}