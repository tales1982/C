/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:59:00 by tales             #+#    #+#             */
/*   Updated: 2024/05/05 23:19:24 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pilha.h"

int main(void)
{
    STACK *pilha_A;
    
    pilha_A = (STACK*)malloc(sizeof(STACK));
    if(pilha_A == NULL)
    {
        printf("Erro ao alocar memoria na pilha\n");
        exit(0);
    }
    else
    {
        printf("Pilha original..\n");
        empilha_pilha(5,pilha_A);
        empilha_pilha(2,pilha_A);
        empilha_pilha(4,pilha_A);
        empilha_pilha(1,pilha_A);
        empilha_pilha(3,pilha_A);
        visualizar_pilha(pilha_A);
        printf("Pilha ordenada..\n");
    }
    return(0);
}
/*comesando a logica pra ordena*/
void ordena_pilha(STACK pilha_A, STACK pilha_B)
{

}