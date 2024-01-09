/*
  Desenvolva uma funcao recursiva que calcule a soma dos numeros inteiros de 1 a N.
*/

#include <stdio.h>

int soma(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return n += soma(n - 1);
	}
}

int main()
{
	printf("%d",soma(5));

	return 0;
}
