/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizar_pilha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:51:15 by tales             #+#    #+#             */
/*   Updated: 2024/05/05 22:57:10 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pilha.h"

void visualizar_pilha(STACK *pilha)
{
    NODE *temp = pilha->top;
    if(temp == NULL)
    {
        printf("A pilha esta vazia.\n");
        return;
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d",temp->data);
            temp = temp->next;
            printf("\n");
        }
        
    }
}