#include "bubble_sort.h"

int	ft_size(int *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
		i++;
	return (i);
}