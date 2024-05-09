#include "bubble_sort.h"

int	main(void)
{
	int num[] = {64, 34, 25, 12, 22, 11, 90};
	int tam;
	tam = size(num);
	printf("Original..\n");
	print(num);
	bubbleSort(num, tam);
	printf("Odenado..\n");
	print(num);
}