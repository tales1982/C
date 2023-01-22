#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{	
	printf("Square of 1 is     : 1 \n");
	printf("Result of function : %d\n\n", ft_sqrt(1));

	printf("Square of 2 is     : 0\n");
	printf("Result of function : %d\n\n", ft_sqrt(2));

	printf("Square of 3 is     : 0 \n");
	printf("Result of function : %d\n\n", ft_sqrt(3));

	printf("Square of -1 is    : 0  \n");
	printf("Result of function : %d\n\n", ft_sqrt(-1));

	printf("Square of 10 is    : 0 \n");
	printf("Result of function : %d\n\n", ft_sqrt(10));

	printf("Square of 9 is     : 3 \n");
	printf("Result of function : %d\n\n", ft_sqrt(9));

	printf("Square of 36 is    : 6 \n");
	printf("Result of function : %d\n\n", ft_sqrt(36));

	printf("Square of 77 is    : 0 \n");
	printf("Result of function : %d\n\n", ft_sqrt(77));

	printf("Square of 68 is    : 0 \n");
	printf("Result of function : %d\n\n", ft_sqrt(68));

	printf("Square of  is 2147483646          : 0 \n");
	printf("Result of function                : %d\n\n", ft_sqrt(2147483646));
	return (0);
}
