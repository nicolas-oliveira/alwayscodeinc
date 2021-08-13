#include <stdio.h>

int main(){
	
	FILE *fp, *arq;
	char ch, a;
	
	fp = fopen("depois.txt", "w+");
	if(fp == NULL)
			printf("Erro, nao foi possivel criar o arquivo\n");
	
	arq = fopen("antes.txt", "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel ler o arquivo\n");
	else{
		ch=getc(arq);
		while(ch != EOF){
			if(ch==' '){
				fputc(ch, fp);
				ch=getc(arq);
			} else {
			fputc(ch+3, fp);
			ch=getc(arq);
			}
		}
		fclose(arq);
	}
	
	
	return 0;
}


