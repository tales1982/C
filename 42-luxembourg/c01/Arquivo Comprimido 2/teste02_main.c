#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int value_a;
	int value_b;

	value_a = 1;
	value_b = 2;
	a = &value_a;
	b = &value_b;

	printf("Valor de a: %d\n", *a);
	printf("Valor de b: %d\n", *b);
	ft_swap(a, b);
	printf("Valor de a: %d\n", *a);
	printf("Valor de b: %d\n", *b);
}
