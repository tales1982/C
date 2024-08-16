/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:04:35 by tales             #+#    #+#             */
/*   Updated: 2024/08/15 21:07:52 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

pthread_mutex_t			mutex = PTHREAD_MUTEX_INITIALIZER; // mutex

volatile unsigned int	count = 0; // recurso compartilhado

void	*inc_count(void *arg)
{
	int	i;
	int	qtd;

	i = 0;
	qtd = *(int *)arg;
	pthread_mutex_lock(&mutex); // lock
	while (i++ < qtd)
		count++;
	pthread_mutex_unlock(&mutex); // unlock
	return ((void *)0);
}

int	main(int ac, char **av)
{
	pthread_t threads[5];
	int i;
	int qtd;

	if (ac < 2)
		qtd = 10000;
	else
		qtd = atoi(av[1]);
	i = 0;
	while (i < 5)
	{
		pthread_create(&threads[i], NULL, inc_count, (void *)&qtd); //  criação de threads
		i++;
	}
	i = 0;
	while (i < 5)
	{
		pthread_join(threads[i], NULL); // sincronização de threads
		i++;
	}
	printf("count = %u\n", count);
	return (0);
}
/*
Explicando:
PTHREAD_MUTEX_INITIALIZER	Macro utilizado para inicializar uma mutex
pthread_mutex_lock()	Aqui está adquirindo o lock de uma variável mutex
pthread_mutex_unlock(&mutex)	Desbloqueia o lock
*/
