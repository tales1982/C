#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	printf("0: %i\n", ft_fibonacci(0));
	printf("1: %i\n", ft_fibonacci(1));
	printf("2: %i\n", ft_fibonacci(2));
	printf("3: %i\n", ft_fibonacci(3));
	printf("4: %i\n", ft_fibonacci(4));
	printf("5: %i\n", ft_fibonacci(5));
	printf("6: %i\n", ft_fibonacci(6));
	printf("10: %i\n", ft_fibonacci(10));
	printf("-4: %i\n", ft_fibonacci(-4));
}
