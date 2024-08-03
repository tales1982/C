/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valor_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:13:48 by tales             #+#    #+#             */
/*   Updated: 2024/06/09 19:31:36 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	valor_min(int *array, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = array[0];
	while (i < size)
	{
		if (aux > array[i])
		{
			aux = array[i];
		}
		i++;
	}
    return aux;
}
int	main(void)
{
	int array[] = {11, 8, 3, 7, 5};
	int length;
	int aux;
	int i;

	aux = array[0];
	length = sizeof(array) / sizeof(array[0]);
	i = 0;
	while (i < length)
	{
		printf("array_original[%d] = %d\n", i, array[i]);
		i++;
	}
	printf("\n");
	aux = valor_min(array, length);
	i = 0;

	printf("Menor valor = %d\n", aux);
}