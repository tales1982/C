#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 52;
	b = -10;
	printf("Valor de a: %i\n", a);
	printf("Valor de b: %i\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("Valor de div: %d\n", div);
	printf("Valor de mod: %d\n", mod);
}
