/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pesquisa_simples.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:07:20 by tales             #+#    #+#             */
/*   Updated: 2024/06/15 15:13:44 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	pesquisa_simples(int *array, int size, int target)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (target == array[0])
	{
		printf("Valor encontrado\nValor = %d", target);
		return (target);
	}
	while (i < size)
	{
        if(target == array[i])
        {
            printf("O valor esta no indece = %d",i);
            return (array[i]);
        }
        else
            printf("Valor nao encontrado");
        count ++;
		i++;
	}
}


int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 9;
    
    busca_binaria(array, size, target);
    
    return 0;
}