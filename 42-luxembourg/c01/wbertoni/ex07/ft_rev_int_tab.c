
void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int tmp;

	index = 0;
	while (index < (size / 2))
	{
		tmp = tab[index];
		tab[index] = tab[size - (1 + index)];
		tab[size - (1 + index)] = tmp;
		index++;
	}
}
