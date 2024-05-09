#include "bubble_sort.h"

void	ft_putstr(int *nbr)
{
	int i;

	i = 0;
	while (nbr[i] != '\0')
	{
		printf("%d",nbr[i]);
		printf("\n");
		i++;
	}
} 