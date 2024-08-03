/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anexar_tabelar_linear.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:48:17 by tales             #+#    #+#             */
/*   Updated: 2024/06/09 16:55:35 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	int length;
	int i;
	length = sizeof(array) / sizeof(array[0]);
	int new_array[length + 1];

	i = 0;
	while (i < length)
	{
		new_array[i] = array[i];
		i++;
	}
	new_array[length] = 6;
	i = 0;
	memcpy(array, new_array, sizeof(new_array));
	while (i < length + 1)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}

	return (0);
}