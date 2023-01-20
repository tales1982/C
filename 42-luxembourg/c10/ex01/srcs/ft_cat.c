#include "ft.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc >= 2)
	{
		while(i < argc)
		{
			if(ft_strcmp(&argv[i][0], "-") == 0)
			{
				disp_stdin();
				i++;
			}
			disp_file(basename(&argv[i][0]));
			i++;
		}
		return (0);
	}
	else
		disp_stdin();
}

