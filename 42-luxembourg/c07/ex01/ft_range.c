#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int index;

	index = 0;
	if (min > max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		range[index] = min;
		min++;
		index++;
	}
	return (range);
}
