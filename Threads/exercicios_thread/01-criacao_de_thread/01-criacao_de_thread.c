/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-criacao_de_thread.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:29:56 by tales             #+#    #+#             */
/*   Updated: 2024/08/16 20:31:01 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
## 1. Criação de Threads Simples
- **Objetivo:** Crie um programa que inicie várias threads.
Cada thread deve imprimir uma mensagem identificando-se.
- **Desafio:** Garanta que as threads realmente sejam executadas em paralelo.
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *dormi(void *arg)
{
    pthread_t thread_id = pthread_self(); // Obter o ID da thread atual
    printf("Thread ID: %lu - Vai Dormir\n", thread_id);
    usleep(100000);
    return NULL;
}

void *comer(void *arg)
{
    pthread_t thread_id = pthread_self(); // Obter o ID da thread atual
    printf("Thread ID: %lu - Vai Comer\n", thread_id);
    usleep(100000);
    return NULL;
}

int main(void)
{
    pthread_t id[2];

    // Criação das threads
    pthread_create(&id[0], NULL, dormi, NULL);
    pthread_create(&id[1], NULL, comer, NULL);

    // Espera as threads terminarem
    pthread_join(id[0], NULL);
    pthread_join(id[1], NULL);

    return 0;
}

