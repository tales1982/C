/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:03:46 by wbertoni          #+#    #+#             */
/*   Updated: 2019/12/10 03:03:21 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		while_atoi(int neg, int index, char *str)
{
	int nb;

	nb = str[index] - '0';
	while ((str[index + 1] >= '0' && str[index + 1] <= '9') &&
			str[index] != '\0')
	{
		index++;
		nb = (nb * 10) + (str[index] - 48);
	}
	if (neg % 2)
	{
		nb *= -1;
		return (nb);
	}
	return (nb);
}

int		ft_atoi(char *str)
{
	int index;
	int neg;
	int nb;

	neg = 0;
	nb = 0;
	index = 0;
	while (str[index] != '\0')
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
				(str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
			i++;
		while (str[index] == '-')
		{
			neg++;
			index++;
		}
		if (str[index] >= '0' && str[index] <= '9')
		{
			return (while_atoi(neg, index, str));
		}
		index++;
	}
	return (nb);
}

int		is_valid(int i_base, char *base)
{
	int check;
	int i_rep;

	check = 1;
	i_rep = 0;
	while (check && base[i_rep] != '\0')
	{
		if (i_base != i_rep && base[i_base] == base[i_rep])
			check = 0;
		if (base[i_rep] == '+' || base[i_rep] == '-')
			check = 0;
		i_rep++;
	}
	return (check);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				check;
	unsigned int	nbr_u;
	unsigned int	i_base;

	check = 1;
	i_base = 0;
	if (nbr < 0)
		nbr_u = nbr * -1;
	else
		nbr_u = nbr;
	while (check && base[i_base] != '\0')
	{
		check = is_valid(i_base, base);
		i_base++;
	}
	if (i_base <= 1)
		check = 0;
	if (check && nbr_u > i_base)
		ft_putnbr_base(nbr_u / i_base, base);
	if (check)
		return (base[nbr_u % i_base];
	else
		return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int				nbr;

	nbr = ft_atoi(str);
	ft_putnbr_base(nbr, base);
}
