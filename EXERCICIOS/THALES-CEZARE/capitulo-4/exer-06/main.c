/*
 Dadas as notas de uma prova de introducao a programacao de computadores deuma determinada classe,
 de termina a maior e a menor nota obtida por essa classe (nota maxima = 10 e nota minima = 0).
 Uma nota negativa indica o final dos dados.
*/

#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	int	*nota;
	int	i;
	int	tamanho_array;
	int	aux_max;
	int	aux_min;
	
	tamanho_array = 50;
	nota = (int *) malloc(tamanho_array * sizeof(int));
	aux_max = 0;
	aux_min = 10;
	
	i = 0;
	
	while(i < tamanho_array)
	{
		printf("Digite a %dª nota (-1 para sair): ", i + 1);
		scanf("%d", &nota[i]);

		if(nota[i] < 0)
		{
		break;
		}
		
		if(aux_max <= nota[i])
		{
			aux_max = nota[i];
		}
		if(aux_min >= nota[i])
		{
			aux_min = nota[i];
		}
		
		i++;
	}
	printf("A maior nota é :%d\n",aux_max);
	printf("A menor nota é :%d",aux_min);
	printf("\n");
	free(nota);
}
