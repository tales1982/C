#include <stdlib.h>
	
char *ft_strdup(char *src)
{
	char *new;
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	new = (char *)malloc(index * sizeof(char));
	index = 0;
	while (src[index] != '\0')
	{
		new[index] = src[index];
		index++;
	}
	new[index] = '\0';
	return (new);
}
