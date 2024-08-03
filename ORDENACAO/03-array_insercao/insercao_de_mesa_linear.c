/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insercao_de_mesa_linear.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:56:58 by tales             #+#    #+#             */
/*   Updated: 2024/06/09 17:28:02 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(int *array, int length, int index, int value)
{
    int *new_array = malloc((length + 1) * sizeof(int));
    
    int i = 0;
    while (i < index)
    {
        new_array[i] = array[i];
        i++;
    }
    new_array[index] = value;
    while (i < length)
    {
        new_array[i + 1] = array[i];
        i++;
    }

    memcpy(array, new_array, (length + 1) * sizeof(int));

    i = 0;
    while (i < length + 1)
    {
        printf("array[%d] = %d\n", i, array[i]);
        i++;
    }

    free(new_array);
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    
    int *copy_array = malloc((length + 1) * sizeof(int));
    memcpy(copy_array, array, length * sizeof(int));

    insert(copy_array, length, 2, 6);

    free(copy_array);

    return 0;
}

