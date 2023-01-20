/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:34:05 by wbertoni          #+#    #+#             */
/*   Updated: 2019/12/10 03:00:55 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		ft_putchar(base[nbr_u % i_base]);
	return ;
}
