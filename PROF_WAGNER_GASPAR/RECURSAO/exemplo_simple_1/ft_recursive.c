/*
 Imprimir todos os numero de n ate 0;
*/
#include <stdio.h>
void	ft_print_recursive(int nb);

int	main()
{
	ft_print_recursive(10);
}

void	ft_print_recursive(int nb)
{
	if(nb == 0)//Ponto de parada da fucao
	{
		printf("%d\n",nb);//imprimo o (0)
	}
	else
	{
		//printf("%d\n",nb);//antes da chamada recursiva imprimo o 10 em chamada decresente 
		ft_print_recursive(nb-1);//imprimo 10 - 1 = 9 ate chegar a 0 no ponto de parada.
		printf("%d\n",nb);//depois da chamada recursiva imprime no formato cresente.	
	}
}


