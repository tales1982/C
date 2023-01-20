/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 21:59:11 by wbertoni          #+#    #+#             */
/*   Updated: 2019/12/03 03:29:37 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_char_is_printable(char str)
{
	if (str == '\0')
	{
		return (0);
	}
	if (!((str >= 0 && str <= 31) || str >= 127))
	{
		return (0);
	}
	return (1);
}

void	print_hex(char tens, char ones)
{
	ft_putchar('\\');
	ft_putchar(tens);
	ft_putchar(ones);
}

void	calc_hex(char c)
{
	char	tens;
	char	ones;

	if ((c % 16) > 9)
	{
		tens = (c / 16) + '0';
		ones = (c % 16) + 87;
		print_hex(tens, ones);
	}
	if ((c % 16) < 9)
	{
		tens = (c / 16) + '0';
		ones = (c % 16) + '0';
		print_hex(tens, ones);
	}
	if (c == 127)
	{
		ft_putchar('\\');
		ft_putchar('1');
		ft_putchar('2');
		ft_putchar('7');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		counter;

	counter = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (ft_char_is_printable(str[index]))
		{
			calc_hex(str[index]);
		}
		else
			ft_putchar(str[index]);
		index++;
	}
}
