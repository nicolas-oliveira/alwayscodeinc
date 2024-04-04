#include <stdio.h>
int main(){
    int x;
    float y, kml;
    scanf("%d", &x);
    scanf("%f", &y);
    kml = x / y;
    printf("%.3f km/l\n", kml);
    return 0;
}