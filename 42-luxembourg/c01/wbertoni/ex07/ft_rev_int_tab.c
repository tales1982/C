/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:03:05 by wbertoni          #+#    #+#             */
/*   Updated: 2019/11/29 15:55:23 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int tmp;

	index = 0;
	while (index < (size / 2))
	{
		tmp = tab[index];
		tab[index] = tab[size - (1 + index)];
		tab[size - (1 + index)] = tmp;
		index++;
	}
}
