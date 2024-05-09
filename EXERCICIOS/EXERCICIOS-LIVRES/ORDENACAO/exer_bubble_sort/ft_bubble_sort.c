#include "bubble_sort.h"

void	ft_bubble_sort(int *array, int size)
{
	int i;
    int j;

	i = 0;
	while (i < size -1)
	{
        j = 0;
        while (j < size -i - 1)
        {
            if(array[j] > array[j + 1])
            {
                ft_swap(&array[j],&array[j + 1]);
            }
            j++;
        }
        
		i++;
	}
}