/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-criacao_de_thread.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:29:56 by tales             #+#    #+#             */
/*   Updated: 2024/08/15 17:26:41 by tales            ###   ########.fr       */
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

#define TAM 3

void *tareva1(void *arg)
{
    char *nome = (char *)arg;
    printf("Thread %s: Levanta\n", nome);
    sleep(1);
    return NULL;
}

void *tareva2(void *arg)
{
    char *nome = (char *)arg;
    printf("Thread %s: Andar\n", nome);
    sleep(1);
    return NULL;
}

void *tareva3(void *arg)
{
    char *nome = (char *)arg;
    printf("Thread %s: Dormi\n", nome);
    sleep(1);
    return NULL;
}

int main(void)
{
    pthread_t minhas_threads[3];
    char *nomes[] = {"TALES", "THEO", "THOMAS"};

    for (int i = 0; i < TAM; i++)
    {
        pthread_create(&minhas_threads[i], NULL, tareva1, (void *)nomes[i]);
        pthread_create(&minhas_threads[i], NULL, tareva2, (void *)nomes[i]);
        pthread_create(&minhas_threads[i], NULL, tareva3, (void *)nomes[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        pthread_join(minhas_threads[i], NULL);
    }
    return 0;
}
