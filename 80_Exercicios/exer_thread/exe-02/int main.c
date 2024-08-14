/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <tlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:43:33 by tlima-de          #+#    #+#             */
/*   Updated: 2024/08/14 13:41:54 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define TAM 10

pthread_mutex_t soma_total = PTHREAD_MUTEX_INITIALIZER;

typedef struct {
    int* array;
    int inicio;
    int fim;
    int resultado;
} SomaArgs;

void* soma(void* arg)
{
    SomaArgs* args = (SomaArgs*)arg;
    int temp_res = 0;
    int i = args->inicio;
    
    while (i <= args->fim) {
        temp_res += args->array[i];
        i++;
    }

    pthread_mutex_lock(&soma_total);
    args->resultado = temp_res;
    pthread_mutex_unlock(&soma_total);
    
    return NULL;
}

int main()
{
    int array[TAM] = {10, 5, 10, 5, 10, 5, 10, 5, 10, 5};
    pthread_t thread1, thread2;
    SomaArgs args1 = {array, 0, 4, 0};
    SomaArgs args2 = {array, 5, 9, 0};
    
    // Criar as threads
    pthread_create(&thread1, NULL, soma, &args1);
    pthread_create(&thread2, NULL, soma, &args2);
    
    // Esperar as threads terminarem
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    int res = args1.resultado + args2.resultado;
    printf("Soma total: %d\n", res);
    
    // Destruir o mutex
    pthread_mutex_destroy(&soma_total);

    return 0;
}

/*
Crie um vetor de 10 números inteiros. Divida esse vetor entre duas threads, onde 
cada thread será responsável por calcular a soma de metade do vetor.
A thread principal deve esperar as duas threads terminarem e então somar 
os resultados para obter a soma total.
*/