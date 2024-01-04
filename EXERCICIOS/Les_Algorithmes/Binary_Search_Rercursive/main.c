/*
 binary seach recursive.
 */

/*
 binary seach recursive.
 */

#include <stdio.h>

int	binary_search_recursive(int *vet,int nb, int start, int end)
{
	int	mid;
	
	if(start <= end)
	{
		mid = (start + end) / 2;
		if(nb == vet[mid])
		{
			return mid;
		}
		else
		{
			if(nb <= vet[mid -1])
			{
				return binary_search_recursive(vet, nb,start, mid - 1);
			}
			else
			{
				return binary_search_recursive(vet, nb, mid + 1, end);
			}
		}
	}
	return (-1);
}

int main()
{
	//Importante o array deve ta ordenado, se nao tiver tem que ordenar.
	int list[12] = {2,3,5,7,9,11,16,17,19,22,25,29};
	printf("%d",binary_search_recursive(list,2,0,12));
}
