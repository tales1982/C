#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	printf("0!: %i\n", ft_recursive_factorial(0));
	printf("1!: %i\n", ft_recursive_factorial(1));
	printf("2!: %i\n", ft_recursive_factorial(2));
	printf("3!: %i\n", ft_recursive_factorial(3));
	printf("4!: %i\n", ft_recursive_factorial(4));
	printf("10!: %i\n", ft_recursive_factorial(10));
}
