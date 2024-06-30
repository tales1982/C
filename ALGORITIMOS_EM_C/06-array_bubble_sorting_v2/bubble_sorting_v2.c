/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sorting_v2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 11:53:30 by tales             #+#    #+#             */
/*   Updated: 2024/06/15 12:20:26 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#define TRUE 1
#define FALSE 0

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	bubble_sorting_v2(int *array, int length)
{
	int	i;
	int	j;
	int	isSwap;
	int	count;

	isSwap = FALSE;
	count = 0;
	i = 0;
	while (i < length - 1)
	{
		isSwap = FALSE;
		j = 0;
		while (j < length - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				ft_swap(&array[j], &array[j + 1]);
				printf("contador = [%d]\n", count + 1);
				count++;
				isSwap = TRUE;
			}
			j++;
		}
		if (!isSwap) // If no swaps occurred, array is sorted
			break;
		i++;
	}
	printf("Número de trocas: %d\n", count); // Print total count
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
	bubble_sorting_v2(array, length);
	i = 0;
	while (i < length)
	{
		printf("array_ordenado[%d] = %d\n", i, array[i]);
		i++;
	}
}
