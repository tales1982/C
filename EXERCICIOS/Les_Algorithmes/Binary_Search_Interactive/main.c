/*
 Binary search interactive.
 */

#include <stdio.h>
#define TAM 10

int binary_search_interactive(int *vet, int nb, int end)
{
	int 	start;
	int	mid;
	
	start = 0;
	mid = (start + end ) / 2;
	while(start <= end)
	{
		if(nb == vet[mid])
		 {
		 	return (mid);
		 }
		 else
		 {
		 	if(nb < vet[mid])
		 	{
		 		end = mid - 1;
		 	}
		 	else
		 	{
		 		start = mid + 1;
		 	}
		 	mid = (start + end ) / 2;
		 }
	}
	return (-1);
}

int main()
{
	int vet[TAM] = {1,5,9,12,16,17,19,22,45,78};
	
	printf("%d",binary_search_interactive(vet,0,TAM));
}
