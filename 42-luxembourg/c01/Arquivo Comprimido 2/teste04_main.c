#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 45;
	b = 4;

	printf("Valor de a: %i\n", a);
	printf("Valor de b: %i\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Valor de a_div: %i\n", a);
	printf("Valor de b_mod: %i\n", b);


}
