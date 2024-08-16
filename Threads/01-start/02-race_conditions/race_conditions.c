/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   race_conditions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:37:34 by tales             #+#    #+#             */
/*   Updated: 2024/08/15 21:01:02 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>

volatile unsigned int count = 0; // recurso compartilhado

void *inc_count(void *arg)
{
    int i;
    int qtd;

    i = 0;
    qtd = *(int *)arg;
    while (i++ < qtd)
        count++;
    return ((void *)0);
}

int main(int ac, char **av) {
    pthread_t threads[5];
    int i;
    int qtd;

    if(ac < 2) 
        qtd = 10000;
    else
        qtd = atoi(av[1]);
    i = 0;
    while (i < 5)
    {
        pthread_create(&threads[i], NULL, inc_count,(void*)&qtd);
        i++;
    }
    i = 0;
    while (i < 5)
    {
        pthread_join(threads[i], NULL);
        i++;
    }
    printf("count = %u\n", count);
    return 0;
}

/*
Race Conditions
Como vimos acima sobre threads, que diferente de processos, threads compartilham o mesmos recursos disponíveis para o processo a qual pertencem.
Nesse cenário, pode acontecer comportamentos inesperados quando threads acessam um mesmo recurso ao mesmo tempo ou mesma região da memória.

Executando o código com valores mais altos podemos ver que os resultados não saem com esperado.

Aproveitar e colocar uma nota sobre o modificador volatile.
Ele indica para o compilador que variável pode ser modificada por fatores externos, aplicando uma restrição às otimições realizadas pelo compilador.

ThreadSanitizer
Uma ferramenta que pode nos ajudar é ThreadSanitizer.

Para utilizarmos, compilarmos nosso código com flag -fsanitize=thread.
Ao executar, é disparado um aviso que está ocorrendo uma condição de corrida à variável count. Vejamos:
*/