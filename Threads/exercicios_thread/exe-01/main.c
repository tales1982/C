/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by Olá do thre       #+#    #+#             */
/*   Updated: 2024/08/14 11:35:49 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

pthread_mutex_t	msg_1_mutex = PTHREAD_MUTEX_INITIALIZER;

void	*msg_1(void *)
{
	int	i;

	i = 0;
	while (i <= 5)
	{
		pthread_mutex_lock(&msg_1_mutex);
		printf("Ola thread_1\n");
		i++;
		pthread_mutex_unlock(&msg_1_mutex);
		usleep(20000);
	}
	return (NULL);
}

void	*msg_2(void *)
{
	int	i;

	i = 0;
	while (i <= 5)
	{
		pthread_mutex_lock(&msg_1_mutex);
		printf("Ola thread_2\n");
		i++;
		pthread_mutex_unlock(&msg_1_mutex);
		usleep(20000);
	}
	return (NULL);
}

int	main(void)
{
	pthread_t	thread_id1;
	pthread_t	thread_id2;

    pthread_create(&thread_id1, NULL, msg_1, NULL);
    pthread_create(&thread_id2, NULL, msg_2, NULL);
    
    pthread_join(thread_id1, NULL);
    pthread_join(thread_id2, NULL);
    
    /*
    if (pthread_create(&thread_id1, NULL, msg_1, NULL))
	{
		fprintf(stderr, "Erro ao criar thread_1\n");
		return (1);
	}
	if (pthread_create(&thread_id2, NULL, msg_2, NULL))
	{
		fprintf(stderr, "Erro ao criar thread_2\n");
		return (1);
	}
    
	if (pthread_join(thread_id1, NULL))
	{
		fprintf(stderr, "Erro ao esperar thread_1\n");
		return (2);
	}
	if (pthread_join(thread_id2, NULL))
	{
		fprintf(stderr, "Erro ao esperar thread_2\n");
		return (2);
	}
    */
    pthread_mutex_destroy(&msg_1_mutex);
	return (0);
}

/*
**Descrição:** Crie um programa que tenha duas threads.
A primeira thread deve imprimir "Olá do thread 1!" cinco vezes,
e a segunda thread deve imprimir "Olá do thread 2!" cinco vezes.
As mensagens podem ser intercaladas ou não, dependendo de como
o sistema agenda as threads.
*/