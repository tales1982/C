/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   desempilhar_pilha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:28:20 by tales             #+#    #+#             */
/*   Updated: 2024/05/05 23:04:27 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pilha.h"

int	desempilhar_pilha(STACK *pilha)
{
	NODE *dado = pilha->top; // obtenho o último elemento da pilha
	int dadoEliminado; // variável para armazenar o dado eliminado
	
	if (dado == NULL)
	{
		printf("Pilha vazia.\n");
		return (-1); // retorna -1 se a pilha estiver vazia
	}
	else
	{
        dadoEliminado = dado->data; // salva o dado que será eliminado da pilha
        pilha->top = dado->next;    // atualiza o topo para o próximo nó na pilha
        free(dado);                 // libera a memória do nó removido
        return dadoEliminado;       // retorna o dado eliminado
	}
}