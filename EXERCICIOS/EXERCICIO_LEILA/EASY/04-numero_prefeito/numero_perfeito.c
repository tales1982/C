/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_perfeito.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:04:19 by tales             #+#    #+#             */
/*   Updated: 2024/07/07 19:17:56 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreva um programa que determine se um número é perfeito
Explicacao:
Um número perfeito é um número inteiro positivo que é igual à soma de seus divisores próprios,
	excluindo ele mesmo.
Por exemplo, os divisores próprios do número 6 são 1, 2 e 3, e 6 é igual a 1 + 2
	+ 3. Portanto, 6 é um número perfeito.
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

int	ft_itoa(char *str)
{
	int	i;
	int	signal;
	int	res;

	i = 0;
	signal = 1;
	res = 0;
	if (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ft_putchar('-');
		signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * signal);
}

int	isPerfectNumber(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			res += i;
			printf("%d\n", i);
		}
		i++;
	}
	return (res == nb);
}

int	main(int ac, char **av)
{
	int	num;

	if (ac == 2)
	{
        num = ft_itoa(av[1]);
		if (isPerfectNumber(num))
		{
			printf("%d é um número perfeito.\n", num);
		}
		else
		{
			printf("%d não é um número perfeito.\n", num);
		}
	}
    else
        ft_putchar('\n');
    
	return (0);
}
