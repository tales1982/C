#include <stdio.h>

int calcular(int *a, int *b)
{

*a = 2 * (*a);
    *b = 2 * (*b);
    return (*a + *b);
}
