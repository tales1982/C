/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:50:28 by tales             #+#    #+#             */
/*   Updated: 2024/06/30 13:38:22 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	digit;

	if (n < 0)
	{
		write(1, "-", 1);
		if (n == -2147483648)
		{
			write(1, "2", 1);
			n = -147483648;
		}
		n = -n;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(void)
{
	int	n;
    
	n = 123;
    	ft_putnbr(n);
    write(1,"\n",1);

		// '1' is the file descriptor for standard output (stdout)
	return (0);
}
