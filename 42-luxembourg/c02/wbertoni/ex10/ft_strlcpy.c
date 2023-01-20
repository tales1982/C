
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	unsigned int length;

	length = 0;
	index = 0;
	if (!(size == 0))
	{
		while (src != '\0' && index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[size - 1] = '\0';
	}
	index = 0;
	while (src[index] != '\0')
	{
		index++;
		length++;
	}
	return (length);
}
