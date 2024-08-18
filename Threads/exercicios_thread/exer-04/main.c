
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lacos_in_threads.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlima-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:19:19 by tlima-d           #+#    #+#             */
/*   Updated: 2024/03/15 16:58:31 by tlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <ctype.h>

// Códigos de cor ANSI
#define RESET_COLOR "\033[0m"
#define RED_COLOR "\033[31m"
#define GREEN_COLOR "\033[32m"
#define YELLOW_COLOR "\033[33m"
#define BLUE_COLOR "\033[34m"
#define MAGENTA_COLOR "\033[35m"

// Estrutura para passar o nome e a cor para a thread
typedef struct {
    char* name;
    char* color;
} thread_data_t;

// Função que será executada por cada thread
void* thread_function(void* arg) {
    thread_data_t* data = (thread_data_t*)arg;
    char* thread_name = data->name;
    char* color = data->color;
    int count = 0;

    // Loop de 10 segundos com sleep de 1 segundo
    while (count < 10) {
        sleep(1);
        printf("%s%s is running, second %d%s\n", color, thread_name, count + 1, RESET_COLOR);
        count++;
    }

    // Verifica se o nome da thread começa com letra maiúscula
    if (isupper(thread_name[0])) {
        printf("%s%s: Sucesso%s\n", color, thread_name, RESET_COLOR);
    } else {
        printf("%s%s: Erro - o nome não começa com letra maiúscula%s\n", color, thread_name, RESET_COLOR);
    }

    return NULL;
}

int main() {
    pthread_t threads[5];
    thread_data_t thread_data[5] = {
        {"Thread1", RED_COLOR},
        {"thread2", GREEN_COLOR},
        {"Thread3", YELLOW_COLOR},
        {"thread4", BLUE_COLOR},
        {"Thread5", MAGENTA_COLOR}
    };
    int i = 0;

    // Cria as 5 threads usando while
    while (i < 5) {
        pthread_create(&threads[i], NULL, thread_function, (void*)&thread_data[i]);
        i++;
    }

    i = 0;
    // Aguarda todas as threads terminarem usando while
    while (i < 5) {
        pthread_join(threads[i], NULL);
        i++;
    }

    return 0;
}

