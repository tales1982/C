#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range = NULL;
	int size;
	int i;

	size = ft_ultimate_range(&range, 2, 5);
	printf("%d\n", size);
	for (i = 0; i < 3; i++)
	{
		printf("%d", range[i]);
	}
}
