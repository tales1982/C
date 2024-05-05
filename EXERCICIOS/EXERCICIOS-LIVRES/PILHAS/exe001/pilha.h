/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilha.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:54:07 by tales             #+#    #+#             */
/*   Updated: 2024/05/05 23:02:43 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PILHA_H
# define PILHA_H

//************* BIBLIOTEQUE *******************
# include <stdio.h>
# include <stdlib.h>
//**************** STRUCT *********************
typedef struct NODE
{
	int			data;
	struct NODE	*next;
}				NODE;

typedef struct
{
	NODE		*top;
}				STACK;

//********** DECLARACAO DE FUNCAO *************
int				main(void);
int				desempilhar_pilha(STACK *pilha);
void			empilha_pilha(int dado, STACK *pilha);
void			inicializar_pilha(STACK *pilha);
void			visualizar_pilha(STACK *pilha);

#endif