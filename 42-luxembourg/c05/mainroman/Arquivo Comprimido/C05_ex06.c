#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{	
	printf("0 is prime ?       : 0 \n");
	printf("Result of function : %d\n\n", ft_is_prime(0));

	printf("1 is prime ?       : 0 \n");
	printf("Result of function : %d\n\n", ft_is_prime(1));

	printf("-1 is prime ?      : 0 \n");
	printf("Result of function : %d\n\n", ft_is_prime(-1));

	printf("4 is prime ?       : 0 \n");
	printf("Result of function : %d\n\n", ft_is_prime(4));

	printf("5 is prime ?       : 1 \n");
	printf("Result of function : %d\n\n", ft_is_prime(5));

	printf("17 is prime ?      : 1 \n");
	printf("Result of function : %d\n\n", ft_is_prime(17));

	printf("26 is prime ?      : 0 \n");
	printf("Result of function : %d\n\n", ft_is_prime(26));

	printf("23 is prime ?      : 1 \n");
	printf("Result of function : %d\n\n", ft_is_prime(23));
	
	printf("2147483629 is prime ?      : 1 \n");
	printf("Result of function : %d\n\n", ft_is_prime(2147483629));

	return (0);
}
