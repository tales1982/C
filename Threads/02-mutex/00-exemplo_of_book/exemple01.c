/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exemple01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:46:11 by tales             #+#    #+#             */
/*   Updated: 2024/08/12 23:07:01 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int compteur = 0;
#define NB_THREADS  5
pthread_mutex_t compteur_mutex = PTHREAD_MUTEX_INITIALIZER;

void *fn_thread (void * num)
{
    int numero = *((int *)num);
    while (1)
    {
        pthread_mutex_lock(&compteur_mutex);
        if (compteur >= 40) {
            pthread_mutex_unlock(&compteur_mutex);
            break;
        }
        compteur++;
        pthread_mutex_unlock(&compteur_mutex);
        
        fprintf(stdout, "Thread %d : compteur = %d \n", numero, compteur);
        usleep(numero * 100000);
    }
    pthread_exit(NULL);
}

int main(void)
{
    pthread_t thread[NB_THREADS];
    int i = 0;
    int ret;
    int thread_nums[NB_THREADS];
    
    i = 0;
    while (i < NB_THREADS)
    {
        thread_nums[i] = i + 1;  // Numerando as threads de 1 a NB_THREADS
        if ((ret = pthread_create(&thread[i], NULL, fn_thread, &thread_nums[i])) != 0)
        {
            fprintf(stderr, "%s", strerror(ret));
            exit(EXIT_FAILURE);
        }
        i++;
    }
    
    while (1)
    {
        pthread_mutex_lock(&compteur_mutex);
        if (compteur >= 40) {
            pthread_mutex_unlock(&compteur_mutex);
            break;
        }
        fprintf(stdout, "main : compteur =  %d \n", compteur);
        pthread_mutex_unlock(&compteur_mutex);
        sleep(1);
    }

    i = 0;
    while (i < NB_THREADS)
    {
        pthread_join(thread[i], NULL);
        i++;
    }

    return EXIT_SUCCESS;
}
