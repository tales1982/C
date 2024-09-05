/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:19:19 by tlima-d           #+#    #+#             */
/*   Updated: 2024/03/29 22:10:54 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Escreva um programa que receba três strings:
- O primeiro e o terceiro são representações de inteiros assinados de base 10
  que cabe em um int.
- O segundo é um operador aritmético escolhido entre: + - * /%

O programa deve exibir o resultado da operação aritmética solicitada,
seguido por uma nova linha. Se o número de parâmetros não for 3, o programa
apenas exibe uma nova linha.

Você pode assumir que a string não contém erros ou caracteres estranhos. Negativo
os números, na entrada ou na saída, terão um e apenas um '-' inicial. O
o resultado da operação cabe em um int.
*/
#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
 	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(sign * res);
}


int	main( int argc, char *argv[ ] )
{
	if (argc != 4)
	{ 
		write(1, "\n", 1); // Inclui quebra de linha para clareza
		return 1; 
	}
	int	imputA;
	int	imputB;
	imputA = ft_atoi(argv[1]);
	imputB = ft_atoi(argv[3]);
	
	if(argv[2][0] == '+')
		printf("%d\n",imputA + imputB);
	if(argv[2][0] == '-')
		printf("%d\n",imputA - imputB);
	if(argv[2][0] == '/')
		printf("%d\n",imputA / imputB);
	if(argv[2][0] == '*')
		printf("%d\n",imputA * imputB);
	if(argv[2][0] == '%')
		printf("%d\n",imputA % imputB);
		
	


	return(0);
}
