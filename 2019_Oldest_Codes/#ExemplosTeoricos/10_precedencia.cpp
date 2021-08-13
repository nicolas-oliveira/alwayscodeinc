
#include <stdio.h>
int main(){
    int a, b, c, d, e;
    //Resto, divisão, multiplicação, subtração, soma    
    e = 4 / 2 * 2;
    a = 6 + 2 * 3 - 4 / 2; // Precedência entre / e *
    b = 5 * (5 + (6 - 2) + 1);
    c = 5 * 5 + 6 - 2 + 1;
    d = 7 * 10.0 - 5 % 3 * 4 + 9;
    
    printf("%d\n", e);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}