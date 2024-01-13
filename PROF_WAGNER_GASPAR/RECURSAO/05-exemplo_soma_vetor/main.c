/*
  Faça uma funçao recursiva para calcular a soma de todos  os valores de um vetor de inteiros. 
*/

#include <stdio.h>
#define	TAM	10

int	soma_vet(int *v, int size)
{

	if(size == 0)
	return (0);
	else
	return v[size - 1] + soma_vet(v,size -1 );
}

int	main()
{
	int	vetor[TAM] = {1,2,3,4,5,6,7,8,9,};

	printf("%d\n",soma_vet(vetor,TAM));
	return(0);
}
