/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:19:19 by tales             #+#    #+#             */
/*   Updated: 2024/04/15 20:56:39 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void ft_putchar(char s)
{
	write(1, &s , 1);
}


int	main(int ac, char **av)
{
	int	j;
	char	aux;
	
	j = 0;
	if(ac == 2)
	{
		while(av[1][j] != '\0')
		{
			if(av[1][j] >= 'a' && av[1][j] <= 'z')
			{
				ft_putchar(av[1][j] - 'a' + 'A' );
			}	
			else if(av[1][j] >= 'A' && av[1][j] <= 'Z')
			{
				ft_putchar(av[1][j] - 'A' + 'a' );
			}
			else
				ft_putchar(av[1][j]);
			j++;
		}
		
	}
	write(1, "\n", 1);
	
	return 0;
}
