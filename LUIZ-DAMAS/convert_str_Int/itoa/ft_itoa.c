#include <stdio.h>

int ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == 'r')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (num * sign);
}

int	main(void)
{
	char *str = " ---+--+-1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}

