#include "bubble_sort.h"

int size(int *arr)
{
    int i;

    i = 0;
    while (arr[i] != '\0')
        i++;
    return(i);
}