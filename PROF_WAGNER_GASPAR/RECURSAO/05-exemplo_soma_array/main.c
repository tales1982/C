/*
  Faca uma funcao recursiva para calcular a soma de todos os valores de 
  um vetor de inteiros.
 */

#include <stdio.h>

int soma_vet(int *vet,int tam)
{
	if(tam == 0)
	    return (0);
	else
	    return vet[tam-1] + soma_vet(vet,tam-1);
}

int main()
{
    int nb[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d",soma_vet(nb,10));//55
}
