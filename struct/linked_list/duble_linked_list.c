/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duble_linked_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:18:24 by tales             #+#    #+#             */
/*   Updated: 2024/08/18 15:48:58 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_Node
{
	int				data;
	struct s_Node	*next;
	struct s_Node	*prev;
}					Node;

void add_to_front(Node **head, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (!new_node)
    {
        perror("Erro ao alocar memória");
        return;
    }
    new_node->data = new_data;
    new_node->next = *head;
    new_node->prev = NULL;

    if (*head != NULL)
        (*head)->prev = new_node;

    *head = new_node;
}

void add_to_end(Node **head, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (!new_node)
    {
        perror("Erro ao alocar memória");
        return;
    }
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }

    Node *last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}

void delete_node(Node **head, int data)
{
    Node *current = *head;

    while (current != NULL && current->data != data)
        current = current->next;

    if (current == NULL)
    {
        printf("Nó com valor %d não encontrado.\n", data);
        return;
    }

    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
}

void print_list(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL;

    add_to_front(&head, 10);
    add_to_front(&head, 20);
    add_to_end(&head, 30);
    add_to_end(&head, 40);

    printf("Lista atual: ");
    print_list(head);

    //delete_node(&head, 40);
    //printf("Lista após deletar 40: ");
    //print_list(head);

    //delete_node(&head, 30);
    //printf("Lista após deletar 30: ");
    //print_list(head);

    return 0;
}
