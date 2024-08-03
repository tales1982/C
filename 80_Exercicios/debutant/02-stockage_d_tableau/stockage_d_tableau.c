/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stockage_d_tableau.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:40:53 by tales             #+#    #+#             */
/*   Updated: 2024/08/03 22:35:11 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_size(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)malloc((ft_size(str) + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		aux[i] = str[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

int	main(int ac, char **av)
{
	int i = 1;
	int total_size = 0;
	char *aux;

	if (ac > 1)
	{
		// Calcular o tamanho total necessário para armazenar todos os argumentos juntos
		while (i < ac)
		{
			total_size += ft_size(av[i]) + 1; //+1 para espaço ou terminador nulo
			i++;
		}

		// Alocar memória para 'aux' com o tamanho total calculado
		aux = (char *)malloc(total_size * sizeof(char));
		if (aux == NULL)
		{
			return (1); // Falha ao alocar memória
		}

		// Copiar todos os argumentos para 'aux'
		i = 1;
		int pos = 0;
		while (i < ac)
		{
			char *copy = ft_strcpy(av[i]);
			if (copy == NULL)
			{
				free(aux);
				return (1); // Falha ao alocar memória para a cópia
			}
			int j = 0;
			while (copy[j] != '\0')
				aux[pos++] = copy[j++];
			if (i < ac - 1)
				aux[pos++] = ' '; // Adicionar um espaço entre os argumentos

			free(copy);
			i++;
		}
		aux[pos] = '\0'; // Adicionar o terminador nulo

		// Imprimir 'aux'
		i = 0;
		while (aux[i] != '\0')
		{
			ft_putchar(aux[i]);
			i++;
		}

		// Liberar a memória alocada para 'aux'
		free(aux);
	}
	ft_putchar('\n');

	return (0);
}