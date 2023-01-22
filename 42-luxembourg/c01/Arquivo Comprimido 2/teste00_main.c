#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int a;
	
	a = 54;
	printf("%i\n", a);
	ft_ft(&a);
	printf("%i", a);
}
