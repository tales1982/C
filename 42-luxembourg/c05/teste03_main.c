#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(void)
{
	printf("2, 2: %i\n", ft_recursive_power(2, 2));
	printf("4, 0: %i\n", ft_recursive_power(4, 0));
	printf("20, 100: %i\n", ft_recursive_power(20, 100));
	printf("-2, 3: %i\n", ft_recursive_power(-2, 3));
	printf("0, 0: %i\n", ft_recursive_power(0, 0));
}
	
