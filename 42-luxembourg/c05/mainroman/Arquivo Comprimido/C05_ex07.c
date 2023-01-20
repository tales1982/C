#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{	
	printf("Current or next prime of 0       : 2 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(0));
	
	printf("Current or next prime of -1      : 2 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(-1));
	
	printf("Current or next prime of 2       : 2 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(2));
	
	printf("Current or next prime of 3       : 3 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(3));
	
	printf("Current or next prime of 8       : 11 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(8));
	
	printf("Current or next prime of 71      : 71 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(71));
	
	printf("Current or next prime of 90      : 97 \n");
	printf("Result of function               : %d\n\n", ft_find_next_prime(90));
	
	printf("Current or next prime of 2147483620      : 2147483629  \n");
	printf("Result of function                       : %d\n\n", ft_find_next_prime(2147483620));
	printf("Current or next prime of 2147483647      : 2147483647  \n");
	printf("Result of function                       : %d\n\n", ft_find_next_prime(2147483647));
	return (0);
}
