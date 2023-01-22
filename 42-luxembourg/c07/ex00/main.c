#include <unistd.h>

char	*ft_strdup(char *src);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(void)
{
	char *str = "wincenty";
	
	ft_putstr(ft_strdup(str));

}
