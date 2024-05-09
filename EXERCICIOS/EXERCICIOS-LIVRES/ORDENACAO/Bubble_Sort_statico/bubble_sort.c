#include "bubble_sort.h"

void	bubbleSort(int *array, int tam)
{
	int	i;
	int	j;

	i = 0;
	while (i < tam - 1)
	{
		j = 0;
		while (j < tam - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
			j++;
		}
		i++;
	}
}
