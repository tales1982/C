/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_primo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:21:49 by tales             #+#    #+#             */
/*   Updated: 2024/07/07 19:19:33 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreva o programa que determine se um número é primo.
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

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	res;

	i = 0;
	signal = 1;
	res = 0;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
        i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * signal);
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
int	is_prime(int num)
{
	int	i;

	if (num <= 1)
		return (0); // Não é primo
	if (num == 2)
		return (1); // 2 é primo
	if (num % 2 == 0)
		return (0); // Números pares > 2 não são primos
	i = 3;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0); //Encontrou um divisor, não é primo
		i += 2;
	}
	return (1); //É primo
}

int	main(int ac, char **av)
{
	int	num;

	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		is_prime(num);
		if (is_prime(num))
		{
			ft_putnbr(num);
			ft_putstr(" é um número primo.\n");
		}
		else
		{
			ft_putnbr(num);
			ft_putstr(" não é um número primo.\n");
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
