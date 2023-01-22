#include <string.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("[Banana] find:[ana]\n");
	printf("strstr: %s\n", strstr("Banana","ana"));
	printf("ft_strstr: %s\n", ft_strstr("Banana","ana"));

	printf("\n[Banana] find:[]\n");
	printf("strstr: %s\n", strstr("Banana",""));
	printf("ft_strstr: %s\n", ft_strstr("Banana",""));

	printf("\n[Banana] find:[ane]\n");
	printf("strstr: %s\n", strstr("Banana","ane"));
	printf("ft_strstr: %s\n\n", ft_strstr("Banana","ane"));

	return 0;
}
