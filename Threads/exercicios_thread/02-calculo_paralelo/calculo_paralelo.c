/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculo_paralelo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:29:51 by tales             #+#    #+#             */
/*   Updated: 2024/08/15 18:11:29 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define TAM 10

void *calc1(void *arg)
{
    int *array = (int *)arg;
    int *res = malloc(sizeof(int)); // Alocar memória para armazenar o resultado
    int i = 0;

    *res = 0;
    while (i <= 4)
    {
        *res += array[i];
        i++;
    }
    return (void *)res;
}

void *calc2(void *arg)
{
    int *array = (int *)arg;
    int *res = malloc(sizeof(int)); // Alocar memória para armazenar o resultado
    int i = 5;

    *res = 0;
    while (i < 10)
    {
        *res += array[i];
        i++;
    }
    return (void *)res;
}

int main(void)
{
    int *result1, *result2;
    int array[TAM] = {10, 5, 10, 5, 10, 5, 10, 5, 10, 5};
    pthread_t saldo1; // Identificador da thread
    pthread_t saldo2; // Identificador da thread

    pthread_create(&saldo1, NULL, calc1, (void *)array);
    pthread_create(&saldo2, NULL, calc2, (void *)array);
    
    pthread_join(saldo1, (void **)&result1);
    pthread_join(saldo2, (void **)&result2);
    
    int total = *result1 + *result2; // Soma os resultados das duas threads
    printf("Resultado total: %d\n", total);

    free(result1); // Libera a memória alocada
    free(result2); // Libera a memória alocada
    
    return 0;
}
