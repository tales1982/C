/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_possitivo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:12:07 by tales             #+#    #+#             */
/*   Updated: 2024/07/07 19:20:04 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreva um programa que calcula para um determinado número inteiro possitivo "n" o valor "n!",
Explicação do Exercício.:
Você precisa escrever um programa que calcula o fatorial de um número inteiro positivo "n".
O fatorial de um número "n" (denotado como "n!") é o produto de todos os números inteiros positivos de 1 até "n".
Por exemplo:
O fatorial de 5 (5!) é 5 * 4 * 3 * 2 * 1 = 120.
O fatorial de 3 (3!) é 3 * 2 * 1 = 6.
se o numero de argumento for diferente de 2, imprima uma quebra de linha
Funcoes permitidas: write
*/
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

unsigned int	factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putstr("2147483648");
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	res;

	i = 0;
	sinal = 1;
	res = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
	}
	return (res * sinal);
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		if (n < 0)
		{
			ft_putstr("Erro: Número negativo\n");
			return (1);
		}
		ft_putstr("Fatorial de ");
		ft_putnbr(n);
		ft_putstr(" é ");
		ft_putnbr(factorial((unsigned int)n));
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}

	return (0);
}