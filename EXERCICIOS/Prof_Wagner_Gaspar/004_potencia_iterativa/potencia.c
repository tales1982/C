/*
  Implemente uma funcao iteractive  que, dados dois numeros inteiros x e n,
 calcule e retorne o valor de x elevado a n.
 */
#include <stdio.h>

int	ft_potencia(int x, int n);

int	main()
{
	printf("%d\n",ft_potencia(3,3));
	return 0;
}

int	ft_potencia(int x, int n)
{
	int count;
	int res;
	
	res = 1;
	count = 0;
	
	if(n == 0)
	return 1;
	else
	{
		while(count < n)
		{
			res *= x;  
			count++;
			
		}
	}
	return res;
}
