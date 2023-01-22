
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int divide;
	int module;

	divide = a / b;
	module = a % b;
	*div = divide;
	*mod = module;
}
