#include "ft.h"

void	disp_stdin(void)
{
	int r;
	char c[1];

	while((r = read(0, c, 1)))
	{
		if(r < 0)
		{
			ft_putstr(strerror(errno));
			return ;
		}
		else
			write (1, &c, 1);
	}
}
