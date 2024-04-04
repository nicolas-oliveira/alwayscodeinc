#include <stdio.h>
int main(){
    int num,hr;
    float sal_hr, sal;
    scanf("%d", &num);
    scanf("%d", &hr);
    scanf("%f", &sal_hr);
    sal = (hr)*(sal_hr);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num,sal);
    return 0;
}