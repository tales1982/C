/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empilhar_pilha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:03:45 by tales             #+#    #+#             */
/*   Updated: 2024/05/05 23:04:32 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pilha.h"

void empilha_pilha(int dado,STACK *pilha)
{
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
        printf("ERRO ao alocar memoria");
        return;
    }
    else
    {
        temp->data = dado; // Armazena o dado recebido no nó
        temp->next = pilha->top; // O novo nó aponta para o antigo topo da pilha
        pilha->top = temp; // Atualiza o topo da pilha para o novo nó
    }
}