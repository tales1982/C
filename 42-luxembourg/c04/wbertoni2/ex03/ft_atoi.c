/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:30:18 by wbertoni          #+#    #+#             */
/*   Updated: 2019/12/10 04:00:46 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int		while_atoi(int neg, int index, char *str)
{
	int nb;

	nb = str[index] - '0';
	while (is_number(str[index + 1]) && str[index] != '\0')
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
	int i;
	int neg;
	int nb;

	neg = 0;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
				(str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg++;
			i++;
		}
		if (is_number(str[i]))
		{
			return (while_atoi(neg, i, str));
		}
		i++;
	}
	return (nb);
}
