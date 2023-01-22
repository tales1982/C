#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, -9};
	int size;
	int i;

	size = 10;
	ft_rev_int_tab(tab, size);
	for (i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}
