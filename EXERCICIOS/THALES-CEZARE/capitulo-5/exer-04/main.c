/*
A serie de fibonacci e formada pela seguite sequencia : 1,1,2,3,5,8,13,21,34,....
Escreva um algoritimo que gere a serie de fibonacci até o trigésimo termo.
*/

#include <stdio.h>
void	fibonacci(int nb);

int	main()
{
	int nb;
	
	nb = 30;
	fibonacci(nb);
	return(0);
}

void	fibonacci(int nb)
{
	int	termo1;
	int	termo2;
	int	soma;
	int	i;
	
	termo1 = 0;
	termo2 = 1;
	soma = 0;
	i = 0;
	while(i < nb)
	{
		printf("%d\n",termo1);
		soma = termo1 + termo2;
		termo1 = termo2;
		termo2 = soma;
		i++;
		
	}
	
}
