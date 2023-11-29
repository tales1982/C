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
/*
	Compara se as string no verdadeira oiu falsa comparando o primeiro intendo da string olhando se contem ou nao um valor.
*/
#include <stdio.h>

int isnull(char *s) {
    return (s[0] == '\0');
}

int main() {
    char str1[] = "";       // Uma string vazia
    char str2[] = "Olá!";   // Uma string com conteúdo

    if (isnull(str1)) {
        printf("A string str1 está vazia.\n");
    } else {
        printf("A string str1 não está vazia.\n");
    }

    if (isnull(str2)) {
        printf("A string str2 está vazia.\n");
    } else {
        printf("A string str2 não está vazia.\n");
    }

    return 0;
}

