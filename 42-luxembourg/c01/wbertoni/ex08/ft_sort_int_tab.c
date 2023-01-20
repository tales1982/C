
void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int index;

	index = 1;
	while (index < size)
	{
		while (tab[index - 1] > tab[index])
		{
			tmp = tab[index];
			tab[index] = tab[index - 1];
			tab[index - 1] = tmp;
			index = 1;
		}
		index++;
	}
}
