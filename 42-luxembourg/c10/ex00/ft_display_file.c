#include "ft.h"

int		main(int argc, char **argv)
{
	int counter;
	int fd;
	char *c[1];
	int r;

	counter = 0;
	if(argc == 1)
		ft_putstr("File name missing.\n");
	else if(argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY, 0);
		if(fd < 0)
			ft_putstr("Cannot read file.\n");
		else
		{
			while((r = read(fd, c, 1)))
			{
				if(r < 0)
				{
					ft_putstr("Cannot read file.\n");
					return (0);
				}
				write(1, &c, 1);
			}
		}
	}
}
