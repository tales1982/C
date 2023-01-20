/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 10:15:27 by wbertoni          #+#    #+#             */
/*   Updated: 2019/12/03 01:18:14 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	checklower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((checklower(str[index]) || checkupper(str[index]))))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
