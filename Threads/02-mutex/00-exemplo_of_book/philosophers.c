/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:24:16 by tales             #+#    #+#             */
/*   Updated: 2024/08/12 23:24:44 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUM_FILOSOFOS 5

pthread_mutex_t garfos[NUM_FILOSOFOS];

void* filosofo(void* num) {
    int id = *(int*)num;

    while (1) {
        printf("Filósofo %d está pensando...\n", id);
        sleep(1);

        // Pega os garfos
        pthread_mutex_lock(&garfos[id]);
        pthread_mutex_lock(&garfos[(id + 1) % NUM_FILOSOFOS]);

        printf("Filósofo %d está comendo...\n", id);
        sleep(2);

        // Devolve os garfos
        pthread_mutex_unlock(&garfos[id]);
        pthread_mutex_unlock(&garfos[(id + 1) % NUM_FILOSOFOS]);

        printf("Filósofo %d terminou de comer e voltou a pensar...\n", id);
    }
}

int main() {
    pthread_t thread[NUM_FILOSOFOS];
    int id[NUM_FILOSOFOS];

    // Inicializa os mutexes (garfos)
    int i = 0;
    while (i < NUM_FILOSOFOS) {
        pthread_mutex_init(&garfos[i], NULL);
        id[i] = i;
        i++;
    }

    // Cria as threads para os filósofos
    i = 0;
    while (i < NUM_FILOSOFOS) {
        pthread_create(&thread[i], NULL, filosofo, &id[i]);
        i++;
    }

    // Aguarda todas as threads (filósofos) terminarem
    i = 0;
    while (i < NUM_FILOSOFOS) {
        pthread_join(thread[i], NULL);
        i++;
    }

    // Destrói os mutexes
    i = 0;
    while (i < NUM_FILOSOFOS) {
        pthread_mutex_destroy(&garfos[i]);
        i++;
    }

    return 0;
}
