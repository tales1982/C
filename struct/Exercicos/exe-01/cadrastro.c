/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cadrastro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:13:33 by tales             #+#    #+#             */
/*   Updated: 2024/08/18 11:30:12 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_cadastro
{
	char	*nome;
	int	    idade;
	double	nota;
}			t_cadastro;

int	main(void)
{
    t_cadastro *aluno;
    
    aluno = (t_cadastro *)malloc(sizeof(t_cadastro));
    if (aluno == NULL)
    {
        perror("Erro ao alocar memória para aluno");
        return 1;
    }
    aluno->nome = (char *)malloc(100 * sizeof(char));
    if(aluno->nome == NULL)
    {
        perror("Erro ao alocar memória para aluno");
        free(aluno);
        return 1;
    }
    
    
    printf("Digite o nome do aluno: ");
    scanf("%99s",aluno->nome);
    setbuf(stdin,NULL);
    
    printf("Digite a idade do aluno: ");
    scanf("%d",&aluno->idade);
    setbuf(stdin,NULL);

    printf("Digite a nota do aluno: ");
    scanf("%lf",&aluno->nota);
    setbuf(stdin,NULL);
    
    printf("Nome do aluno: %s\nIdade do aluno: %d\nNota do aluno %.3lf\n", aluno->nome,aluno->idade,aluno->nota);

    // Libera a memória alocada
    free(aluno->nome);
    free(aluno);
}