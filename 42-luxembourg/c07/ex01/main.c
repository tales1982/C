#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *result;
	int i;

	result = (int *)malloc(3 * sizeof(int)); 
	result = ft_range(2,5);
	for (i = 0; i < 3; i++)
	{
		printf("%i", result[i]);
	}
}
