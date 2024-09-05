/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:19:19 by tales             #+#    #+#             */
/*   Updated: 2024/04/15 20:55:56 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------
Escreva um programa que receba uma string e exiba sua primeira palavra, seguida por uma
nova linha.

Uma palavra é uma seção de string delimitada por espaços/tabulações ou pelo início/fim de
a corda.

Se o número de parâmetros não for 1, ou se não houver palavras, basta exibir
uma nova linha.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/
#include<unistd.h>

void ft_putchar(char s)
{
    write(1, &s, 1);
}
void first_word(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while (str[i] != ' ' && str[i] != '\0' && !(str[i] >= 9 && str[i] <= 13))
    {
        ft_putchar(str[i]);
        i++;
    }
 
       
}

int main(int argc, char **argv)
{
    if (argc == 2) // Verifica se um argumento (além do nome do programa) foi passado
    {
        first_word(argv[1]);
    }
    ft_putchar('\n'); // Imprime uma nova linha em qualquer caso

    return 0;
}

