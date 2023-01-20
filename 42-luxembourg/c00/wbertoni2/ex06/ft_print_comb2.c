/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:48:24 by wbertoni          #+#    #+#             */
/*   Updated: 2019/11/26 19:09:22 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int digit)
{
	char tens;
	char ones;

	tens = ((digit) / 10) + '0';
	ones = ((digit) % 10) + '0';
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	ft_print_comb2(void)
{
	int diff;
	int number;

	diff = 0;
	number = 0;
	while (diff <= 98)
	{
		while (number <= 99)
		{
			if (diff < number)
			{
				print_digit(diff);
				write(1, " ", 1);
				print_digit(number);
				if (diff != 98 || number != 99)
				{
					write(1, ", ", 2);
				}
			}
			number++;
		}
		number = 0;
		diff++;
	}
}
