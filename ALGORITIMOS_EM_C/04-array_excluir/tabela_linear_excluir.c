/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabela_linear_excluir.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:57:12 by tales             #+#    #+#             */
/*   Updated: 2024/06/09 18:20:36 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete (int *array, int *copyArray, int length, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	// Copiar elementos antes do índice a ser deletado
	while (i < index)
	{
		copyArray[i] = array[i];
		i++;
	}
	// Copiar elementos depois do índice a ser deletado
	i = index + 1;
	while (i < length)
	{
		copyArray[j + index] = array[i];
		i++;
		j++;
	}
}

int	main(void)
{
	int array[] = {1, 2, 6, 3, 4, 5};
	int length = sizeof(array) / sizeof(array[0]);
	int *copyArray = malloc((length - 1) * sizeof(int));//vai ser 1 a menos que o array original

	delete (array, copyArray, length, 2);
	memcpy(array, copyArray, (length - 1) * sizeof(int));//copia o array modificado para o array original

	int i = 0;
	while (i < length - 1)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}

	free(copyArray);

	return (0);
}