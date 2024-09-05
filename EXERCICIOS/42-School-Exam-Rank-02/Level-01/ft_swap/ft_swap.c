/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:19:19 by tales             #+#    #+#             */
/*   Updated: 2024/04/15 20:56:19 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux; 
}
/*
int main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 20;
	printf("Valor original..: A = %d, B = %d\n", a, b);
	ft_swap(&a ,&b);
	printf("Valor Copia..: A = %d, B = %d\n", a, b);
	return(0);
}
*/
