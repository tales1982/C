#include "bubble_sort.h"

void print(int *n)
{
    int i;

    i = 0;
    while(n[i] != '\0')
    {
        printf("%d", n[i]);
        printf("\n");
        i++;
    }
}