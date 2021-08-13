#include <iostream>
#include <stdio.h>

using namespace std;
int main(){    
    int at, an, id, idf;

    printf("Ano atual: ");
    scanf("%d", &at);

    printf("Ano de nascimento: ");
    scanf("%d", &an);

        
    if((an < at) && (an > 0)){
        id = (at - an);
        printf("A sua idade eh: %d\n", id);
    }
    else{
        printf("Voce nasceu no futuro?\n");
    }
    if((at < 2060) && (at > 0)){
            idf = (2060 - an);
            printf("Idade em 2060: %d\n", idf);
    }
     
return 0;
}