
void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_b;

	tmp_b = *a;
	*a /= *b;
	*b = tmp_b % *b;
}
