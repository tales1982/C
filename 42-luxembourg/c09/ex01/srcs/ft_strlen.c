#include <stdio.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while(*str)
	{
		str++;
		counter++;
	}
	return (counter);
}
