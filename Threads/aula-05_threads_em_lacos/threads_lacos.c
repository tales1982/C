/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads_lacos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:01:19 by tales             #+#    #+#             */
/*   Updated: 2024/08/09 19:07:07 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#define	N_THREADS	10

pthread_t minhas_threads[N_THREADS];		// Identificadores para 10 threads


/** Espera passar *nst segundos, de segundo em segundo */
void codigo_tarefa(int *nst){
    int ns = 0;
    while(ns < *nst) {
        sleep(1);
        printf("Tarefa: passaram %d segundos do total de %d.\n", ns+1, *nst);
        ns++;
    }
}


/** Função principal, cria as threads */
int main(void){
    int param_threads[N_THREADS];

    printf("Inicio\n");

    // Prepara os parametros de todas as threads
    int i = 0;
    while(i < N_THREADS) {
        param_threads[i] = 5+i;
        i++;
    }

    // Cria todas as threads
    i = 0;
    while(i < N_THREADS) {
        pthread_create(&minhas_threads[i], NULL, (void *) codigo_tarefa, (void *)&param_threads[i]);
        i++;
    }

    // Espera por todas as threads
    i = 0;
    while(i < N_THREADS) {
        pthread_join(minhas_threads[i], NULL);
        i++;
    }

    printf("Fim\n");
    return(0);
}


