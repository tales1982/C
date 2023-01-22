#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int index;

	index = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		range[0][index] = min;
		min++;
		index++;
	}
	return (index);
}
