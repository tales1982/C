#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *conc;
	int i;
	int j;
	int counter;
	int i_conc;

	i = 0;
	j = 0;
	i_conc = 0;
	if (size == 0)
		conc = (char *)malloc(sizeof(char));
		conc = "";
		return (conc);
	while (j < size)
	{
		while (strs[j][i] != '\0')
		{
			counter++;
			i++;
		}
		i = 0;
		j++;
	}
	j = 0;
	i = 0;
	while (sep[i] != '\0')
		counter++;
	i = 0;
	conc = (char *)malloc((counter + size) * sizeof(char));
	while (j < size)
	{
		while (strs[j][i] != '\0')
		{
			conc[i_conc] = strs[j][i];
			i++;
		}
		i = 0;
		while (sep[i] != '\0')
		{
			conc[i_conc] = sep[i];
		}
		i = 0;
		j++;
	}
	return (conc);
}
