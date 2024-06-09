/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:31:32 by tales             #+#    #+#             */
/*   Updated: 2024/06/09 19:05:19 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble_sorting(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (array[j] > array[j + 1])
				ft_swap(&array[j], &array[j + 1]);
			else
				j++;
		}
		i++;
	}
}

int	main(void)
{
	int array[] = {11, 8, 3, 7, 5};
	int length;
	int i;

	length = sizeof(array) / sizeof(array[0]);
	i = 0;
	while (i < length)
	{
		printf("array_original[%d] = %d\n", i, array[i]);
		i++;
	}
	printf("\n");
	bubble_sorting(array, length);
	i = 0;
	while (i < length)
	{
		printf("array_ordenado[%d] = %d\n", i, array[i]);
		i++;
	}
}