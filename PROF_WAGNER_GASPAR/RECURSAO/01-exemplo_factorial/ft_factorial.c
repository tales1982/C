/*
 Como fuciona a recursao para calcular o factotial de um numero ?
 Oque é factorial? é a soma de um numero com seu antecesor.
 exemplo factorial de 4! : 4 * 3 * 2 * 1 = 24
 */

#include <stdio.h>

int	ft_factorial(int n);

int main()
{
	printf("%d\n",ft_factorial(4));
	return(0);
}

int	ft_factorial(int n)
{
	if(n == 0 || n == 1)
	return (1);
	else
	return n * ft_factorial(n -1);
}
