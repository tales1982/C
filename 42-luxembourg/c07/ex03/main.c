#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char *strs[2] = {"casa", "banana"};
	char *sep = " ";
	char *conc = NULL;

	conc = ft_strjoin(2, strs, sep);
	printf("%s", conc);

}
