#include "libft.h"

void imprimirClientes(Cliente clientes[],int totalClientes)
{
    int j;

    j = 0;

    while (j < totalClientes)
    {
        printf("°%i cliente..: %s\n", j + 1, clientes[j].nomeClient);
        j++;
    }
}