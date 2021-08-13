/*
Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
mensagem “Número inválido”.
*/
#include <stdio.h>

int main()
{
	int n, total = 0;
	
	scanf("%d", &n);
	
	if (n < 0)
		n *= -1;
	
	while(n > 0)//dividindo um numero menor que 10 por 10 o resultado sera 0
	{
		total += n%10;	
		n /= 10;	
	}
	
	printf("%d\n", total);
	
	return (0);
}
