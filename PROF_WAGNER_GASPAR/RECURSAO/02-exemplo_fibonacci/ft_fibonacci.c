/*
Fazer uma funcao que calcule o enesimo termo de fibonacci
oque e fibonacci, fiboi e a soma de um termo com o termo anteriaor.
exemplo : 
indece 1,  2,  3,  4,  5,  6,  7,   8   ,9  ,10 
       0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34
O 10° terme = 34:
*/
#include <stdio.h>

int	ft_fibonacci(int n);

int	main()
{
	printf("%d\n",ft_fibonacci(10));
	return(0);
}

int	ft_fibonacci(int n)
{
	if(n == 1 )
		return(0);
	else if(n == 2)
		return (1);
	else
		return ft_fibonacci(n - 1) + ft_fibonacci(n - 2);// (5 - 1) + (6 - 2) = 8  7° termo e continua somando.
}
