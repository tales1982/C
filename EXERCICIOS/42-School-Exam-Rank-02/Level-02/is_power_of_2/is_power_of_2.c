/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:19:19 by tlima-d           #+#    #+#             */
/*   Updated: 2024/03/15 16:58:31 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0; // 0 não é considerado uma potência de 2
    else
        return (n & (n - 1)) == 0; // Verifica se n é uma potência de 2
}
