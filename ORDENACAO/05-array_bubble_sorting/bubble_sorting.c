/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:31:32 by tales             #+#    #+#             */
/*   Updated: 2024/06/15 12:20:53 by tales            ###   ########.fr       */
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
	int	count;

	i = 0;
	count = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (array[j] > array[j + 1])
			{
				ft_swap(&array[j], &array[j + 1]);
				printf("contador = [%d]\n", count + 1);
				count++;
			}
			else
				j++;
		}
		i++;
	}
}

int	main(void)
{
	int array[] = {42, 32, 24, 73, 12, 15, 89, 67, 38, 22, 56, 48, 92, 61, 30, 79, 85, 40, 29, 3};
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