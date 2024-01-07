/*
 Implemente uma funcao recursiva que, dados dois numeros inteiros x e n,
 calcule e retorne o valor de x elevado a n.
 */
#include <stdio.h>

int	ft_potencia(int x, int n);

int	main()
{

	printf("%d\n",ft_potencia(3,7));
	return 0;
}

int	ft_potencia(int x, int n)
{
	if (n == 0)
		return 1;
	else
		return x * ft_potencia(x,n-1);
}
