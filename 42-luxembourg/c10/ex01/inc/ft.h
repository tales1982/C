#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdio.h>
#include <libgen.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void	ft_putstr(char *str);
void	disp_file(char *file);
void	disp_stdin(void);
int		ft_strcmp(char *s1, char *s2);

#endif	
