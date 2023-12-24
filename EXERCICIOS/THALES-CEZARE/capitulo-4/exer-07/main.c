/*
 Elabore um programa que leia numero inteiro positivo "n" e calcule o seu fatorial (n).
 onde n! = n.(n-1).(n-2)... 1 ; por definicao 0! = 1.
 Exemplo : 5! = 5.4.3.2.1 = 120.
 */
#include <stdio.h>

int factorial(int n)
{
	unsigned int	res;
	res = 1;
	
	while(n >= 1)
	{
		res *= n;
		n--;				
	}
	return (res);
}

int	main(void)
{
	printf("%d",factorial(5));
	printf("\n");
	return (0);
}
