/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:36:56 by tales             #+#    #+#             */
/*   Updated: 2025/06/09 16:07:07 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    FILE *file;
    char dadosRecebidos[50];
    int r = 0;

    // abrindo arquivo pra gravacao se nao existir ele cria
    file = fopen("db/arquivo.txt", "w");

    if (file == NULL)
    {
        printf("Erro ao abrir arquivo\n");
        return (1);
    }

    // gravacao de dados
    r = fputs("1 - Tales\n2 - Alex\n3 - Adria\n", file);
    if(r == -1 )
    {
        printf("Erro na hora de salvar os dados");
    }
    
    printf("Valor de R3 : %d\n", r);
    fclose(file);

    // leitura de dados
    file = fopen("db/arquivo.txt", "r");
    if (file == NULL)
    {
        printf("Erro ao abrir arquivo para leitura\n");
        return 1;
    }
    printf("-- Iniciando leitura do arquivo --\n");
    while (fgets(dadosRecebidos, 50, file) != NULL)
    {
        printf("%s", dadosRecebidos);
    }

    fclose(file);

    return (0);
}