/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:19:19 by tales             #+#    #+#             */
/*   Updated: 2024/04/15 21:24:25 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nome da tarefa: fizzbuzz
Arquivos esperados: fizzbuzz.c
Funções permitidas: write
-------------------------------------------------- ------------------------------

Escreva um programa que imprima os números de 1 a 100, cada um separado por um
nova linha.

Se o número for múltiplo de 3, ele imprimirá 'fizz'.

Se o número for múltiplo de 5, ele imprimirá 'buzz'.

Se o número for múltiplo de 3 e múltiplo de 5, ele imprimirá 'fizzbuzz'.

Exemplo:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/
void	ft_putchar(char c);
#include <unistd.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i / 10);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}