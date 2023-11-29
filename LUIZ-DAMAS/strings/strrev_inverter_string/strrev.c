/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ######.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:19:19 by tales             #+#    #+#             */
/*   Updated: 2022/09/25 16:58:31 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
Comando para inverter uma string de tras pra frente.
*/

char	*strrev(char *s);
int	string_size(char *s);

int	main(void)
{
	char nome[] = "Tales";
	 

	printf("%s\n",strrev(nome));
	
}


int	string_size(char *s)
{
	int	i;
	
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*strrev(char *s)
{
	int	i;
	int	len;
	char	aux;
	
	i = 0;
	len = string_size(s) - 1;
	while(len > i)
	{
		aux = s[i];
		s[i] = s[len];
		s[len] = aux; 
		len--;
		i++;
	}
	return (s);
}
 
