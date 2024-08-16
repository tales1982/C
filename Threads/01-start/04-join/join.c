/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:09:31 by tales             #+#    #+#             */
/*   Updated: 2024/08/15 21:12:46 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <pthread.h>

#define NTHREADS 10

void                *thread_function(void*);
pthread_mutex_t     mutex = PTHREAD_MUTEX_INITIALIZER;
int                 counter = 0;

int     main(void)
{
    pthread_t   thread_id[NTHREADS];
    int         i;

    i = 0;
    while (i < NTHREADS)
    {
        pthread_create(&thread_id[i], NULL, thread_function, NULL);
        i++;
    }
    i = 0;
    while (i < NTHREADS)
    {
        pthread_join(thread_id[i], NULL);
        i++;
    }
    printf("Counter: %d\n", counter);
    return (0);
}

void    *thread_function(void*)
{
    printf("Thread number: %ld\n", pthread_self());
    pthread_mutex_lock(&mutex);
    counter++;
    pthread_mutex_unlock(&mutex);
    return ((void*)0);
}

/*
No exemplo acima, inicializamos 10 threads, que chamam a função thread_function, que por sua vez, incrementa o valor de counter, e depois aguardamos o encerramento de cada uma dos threads inicializados para depois continuar com o fluxo de execução do código.

Observa que aqui também utilizamos mutexes para controlar as alterações da variável counter, e assim evitar que o programa se comporte de forma inesperada: seja deixando de fazer uma incrementação, seja incrementando a mais. Bem, que nesse caso, como a quantidade de incrementações é pífia a chance de ocorrer uma condição de corrida é baixa.

Uma explicação à chamada da função pthread_self(): ela retorna o ID da thread chamada, é mesmo valor que retornado por uma chamada pthread_create(3) quando criamos um thread.
*/