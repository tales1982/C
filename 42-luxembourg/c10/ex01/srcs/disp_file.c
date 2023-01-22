#include "ft.h"

void	disp_file(char *file)
{
	int fopen;
	char c[1];

	fopen = open(file, O_RDONLY);
	if(fopen < 0)
	{
		ft_putstr(strerror(errno));
		return ;
	}
	else
	{
		while(read(fopen, &c, 1))
			write(1, &c, 1);
		close(fopen);
	}
}
