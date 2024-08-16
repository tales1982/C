/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struck_thread.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:31:30 by tales             #+#    #+#             */
/*   Updated: 2024/08/16 18:48:45 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int				idx;
	int				length;
} thread_arg, *ptr_thread_arg;

void	*thread_function(void *arg)
{
	ptr_thread_arg	targ;
	int				i;

	targ = (ptr_thread_arg)arg;
	for (i = targ->idx; i < (targ->idx + targ->length); i++)
	{
		printf("Thread : %ld - value: %d\n", pthread_self(), i);
	}
	return ((void *)0);
}

int	main(int argc, char **argv)
{
	pthread_t		thread_id[2];
	thread_arg		arguments[2];
	int				i;

	i = 0;
	while (i < 2)
	{
		arguments[i].idx = i * 10;
		arguments[i].length = 10;
		pthread_create(&thread_id[i], NULL, thread_function, &arguments[i]);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		pthread_join(thread_id[i], NULL);
		i++;
	}
	return (0);
}