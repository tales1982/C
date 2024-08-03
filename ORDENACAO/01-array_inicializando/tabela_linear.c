/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabela_linear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:45:47 by tales             #+#    #+#             */
/*   Updated: 2024/06/09 16:46:33 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	int length;
	int i;

	length = sizeof(array) / sizeof(array[0]);
	i = 0;
	while (i < length)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
	printf("%d\n", length);
}