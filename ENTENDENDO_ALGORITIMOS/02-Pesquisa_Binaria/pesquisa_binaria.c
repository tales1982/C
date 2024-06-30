/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pesquisa_binaria.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:05:37 by tales             #+#    #+#             */
/*   Updated: 2024/06/15 15:39:34 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	busca_binaria(int *array, int size, int target)
{
	int	mid;
	int	low;
	int	high;
    int count;

    count = 0;
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (array[mid] == target)
		{
			printf("Valor encontrado no indece = [%d]\n", mid);
            printf("Contador = %d\n", count +1);
			return (mid);
		}
		else if (array[mid] < target)
		{
			low = mid + 1;
            count++;
		}
		else if (array[mid] > target)
        {
            high = mid - 1;
            count++;
        }
	}
    return(-1);
}

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(array) / sizeof(array[0]);
	int target = 9;

	busca_binaria(array, size, target);

	return (0);
}