/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:17:12 by tales             #+#    #+#             */
/*   Updated: 2024/08/18 15:12:23 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

typedef struct linked_list
{
    int date;
    struct linked_list *next;

} No;

void inserirNoInicio(No **value_actuel, int new_date)
{
    No *new_no; 
    
    new_no = (No *)malloc(sizeof(No));
    if (new_no == NULL)
    {
        perror("Erro ao alocar a memoria");
        return;
    }

    new_no->date = new_date;         // Atribui o valor de new_date ao novo nó.
    new_no->next = *value_actuel;    // Faz o novo nó apontar para o nó que era anteriormente o primeiro da lista.
    *value_actuel = new_no;          // Atualiza o ponteiro passado para apontar para o novo nó.
}
void imprimirLista(No *top)
{
    No *atual = top;
    while (atual != NULL)
    {
        printf("%d\n",atual->date);
        atual = atual->next; 
    }
    printf("NULL\n");
}

int main()
{
    No *cabeca = NULL;  // Inicializa a lista como vazia

    // Inserindo elementos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);
    inserirNoInicio(&cabeca, 40);

    // Imprime a lista
    printf("Lista encadeada:\n");
    imprimirLista(cabeca);

    // Libera a memória alocada (opcional, mas recomendável)
    No *atual = cabeca;
    No *proximo;
    while (atual != NULL)
    {
        proximo = atual->next;
        free(atual);
        atual = proximo;
    }

    return 0;
}
