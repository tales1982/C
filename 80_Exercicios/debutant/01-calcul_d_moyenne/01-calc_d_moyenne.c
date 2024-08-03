/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-calc_d_moyenne.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:26:51 by tales             #+#    #+#             */
/*   Updated: 2024/08/03 20:31:44 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar(nb + 48);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int ft_atoi(char *str)
{
    int i;
    int sinal;
    int res;

    i = 0;
    sinal = 1;
    res = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sinal = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res * sinal);
}

void calc_moyenne(char **str, int len)
{
    int *res;
    int i;
    int soma = 0;
    float media;

    res = (int *)malloc(len * sizeof(int));
    if (res == NULL)
    {
        ft_putstr("Erro de alocacao de memoria\n");
        return;
    }

    for (i = 0; i < len; i++)
    {
        res[i] = ft_atoi(str[i + 1]);
        soma += res[i];
    }

    media = soma / (float)len;
     ft_putstr("A média das notas é:");
     ft_putnbr(media);
     ft_putstr("\n");

    free(res);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        calc_moyenne(av, ac - 1);
    }
    else
    {
        ft_putstr("ERRO\n");
    }
    return (0);
}
