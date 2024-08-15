/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:57:00 by tales             #+#    #+#             */
/*   Updated: 2024/08/15 20:14:12 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <pthread.h>

void *funcao_basica(void *arg);


int main(void)
{
    pthread_t thread_1;
    pthread_t thread_2;

    pthread_create(&thread_1,NULL,funcao_basica,NULL);
    pthread_create(&thread_2,NULL,funcao_basica,NULL);

    pthread_join(thread_1,NULL);
    pthread_join(thread_1,NULL);

    printf("Threads finalizadas.\n");
    return 0;
}
void *funcao_basica(void *arg)
{
    int i;

    i = 0;
    while (i <= 10)
    {   
        printf("Thread ID: %ld, numero de interacoes %d\n", pthread_self(), i);// O pthread_self gera o id da thread.
        i++;
    }
    pthread_exit(NULL);
}

/*
pthread_create	Cria uma nova thread
pthread_exit	Conclui uma chamada de thread
pthread_join	Espera que um thread específico seja abandonado
*/