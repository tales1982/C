/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suppression_d_element.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:46:06 by tales             #+#    #+#             */
/*   Updated: 2024/08/04 18:04:44 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
int	ft_size(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int ac, char **av)
{
	char    **aux;
    int     i;
    int     size;
    
    i = 1;
    size = 0;
	if (ac > 1)
	{
        while (i < ac)
        {
            size += ft_size(av[i]) + 1;
            i++;
        }
        aux = (char *)malloc(size * sizeof(char));
        if(aux == NULL)
            return(1);
            aux = '\0';// Inicializar aux com uma string vazia
        i = 1;
        while (i < ac)
        {
            ft_strcpy(aux[i], av[i]);
            i++;
        }
        i = 0;
        while (aux[i] != '\0')
        {
            ft_putchar(aux[i]);
            i++;
        }
        
        
        
	}
	else
		ft_putstr("Entrez une valeur d'index existante dans la liste");
	ft_putchar('\n');
    free(aux);
    return(0);
}