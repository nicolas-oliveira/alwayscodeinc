// Código Feito por JEAN
#include <stdio.h>
#include <string.h>

void inverter(char str[100]){
	int tam = 0; //strlen(str)-1;
	for(tam = 0; str[tam]; tam++);
	
	while(tam >= 0){
		//printf("%c", str[i]);
		printf("%c", str[tam]);
		tam--;
	}
	printf("\n");
}

int main(){
	char str[100];
	
	printf("Diga o que quer, nobre cavalheiro!\n");
	scanf("%[^\n]s", str);

	inverter(str);

    return 0;
}