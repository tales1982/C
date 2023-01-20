/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:41:13 by wbertoni          #+#    #+#             */
/*   Updated: 2019/12/03 01:26:25 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checklower(char c)
{
	if (!(c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	return (1);
}

int		checkupper(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strlowercase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

int		ft_str_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	str = ft_strlowercase(str);
	if (index == 0)
	{
		if (checklower(str[index]))
		{
			str[index] -= 32;
		}
		index++;
	}
	while (str[index] != '\0')
	{
		if (checkupper(str[index]) || checklower(str[index]))
		{
			if (!(checkupper(str[index - 1]) || checklower(str[index - 1])))
			{
				if (!(ft_str_is_numeric(str[index - 1])))
					str[index] -= 32;
			}
		}
		index++;
	}
	return (str);
}
