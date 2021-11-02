#include <stdio.h>
int main(){
    int a, b, abs;
    scanf("%d %d %d", &a,&b,&abs);
    
    if(a > abs && a > b){
    printf("%d eh o maior\n", a);
    }else if(abs > a && abs > b){
        printf("%d eh o maior\n", abs);
    }else if(b > a && b > abs){
        printf("%d eh o maior\n", b);
    }
    return 0;
}