/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:22:59 by tales             #+#    #+#             */
/*   Updated: 2024/06/30 12:03:18 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

// Função utilitária para reverter uma string
void reverse(char *str, int len)
{
    int start;
    int end;
    char temp; // Variável temporária para troca

    start = 0;
    end = len - 1;
    while (start < end)
    {
        // Troca os caracteres nas posições start e end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move os índices
        start++;
        end--;
    }
}

char* ft_itoa_base(int num, char* str, int base)
{
    int i = 0;
    int is_negative = 0; // false

    /* Manipula 0 explicitamente, caso contrário, uma string vazia será impressa para 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    /* No caso de base 10, se o valor é negativo, o sinal '-' é adicionado */
    if (num < 0 && base == 10)
    {
        is_negative = 1;
        num = -num;
    }

    // Processa dígitos individuais
    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }

    // Se o número for negativo, adicione o sinal '-'
    if (is_negative)
        str[i++] = '-';

    str[i] = '\0'; // Termina a string

    // Reverte a string
    reverse(str, i);

    return str;
}

int main()
{
    char str[100];
    printf("Number: %d\nBase: %d\tConverted String: %s\n", 1567, 10, ft_itoa_base(-1567, str, 10));
    printf("Base: %d\t\tConverted String: %s\n", 2, ft_itoa_base(1567, str, 2));
    printf("Base: %d\t\tConverted String: %s\n", 8, ft_itoa_base(1567, str, 8));
    printf("Base: %d\tConverted String: %s\n", 16, ft_itoa_base(1567, str, 16));
    return 0;
}
