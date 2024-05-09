#ifndef BUBBLE_SORT
# define BUBBLE_SORT

# include <unistd.h>
#include <stdio.h>
int		ft_size(int *n);
void	ft_putstr(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_bubble_sort(int *array, int size);
#endif