#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;
	int length;

	str = "teste";
	length = ft_strlen(str);
	printf("%i", length);
}
