
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int length;

	length = 0;
	while (src[length] != '\0' && n > length)
	{
		dest[length] = src[length];
		length++;
	}
	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
	return (dest);
}
