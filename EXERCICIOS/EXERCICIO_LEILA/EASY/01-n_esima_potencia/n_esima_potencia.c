/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_esima_potencia.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:28:44 by tales             #+#    #+#             */
/*   Updated: 2024/07/07 14:22:00 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreva um programa que calcule x ate à n-ésima potência,
e imprima na tela os numeros seguido de uma quebra de linha,
se o numero de argumento for diferente de 2, imprima uma quebra de linha
Funcoes permitidas: write
*/

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

void	calculate_powers(int x, int n)
{
	int i;
	int j;
	int res;

    i = 0;
    while(i <= n)
    {
		res = 1;
		j = 0;
        while(j < i)
        {
            res *= x;
            j++;
        }
        ft_putnbr(res);
        ft_putchar('\n');
        i++;
    }
}

int	main(int ac, char **av)
{
	int x;
    int n;
    
	if (ac == 3)
	{
		x = ft_atoi(av[1]);
        n = ft_atoi(av[2]);
		calculate_powers(x,n);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}