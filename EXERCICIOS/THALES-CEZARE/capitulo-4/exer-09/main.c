/*
 Durante os 31 dias do mês de janeiro foram tomadas as temperaturas
 médias de uma certa cidade. Determinar a temperatura média e o numero de
 dias desse mês com tremperaturas acima de 30° graus.
 */

#include <stdio.h>
#define	TAM 31

//void temperatura(int n);

int	main(void)
{
		setbuf(stdin,NULL);
	int	i;
	int	dias_quentes;
	float	mes[TAM];
	float	media_temp;
	
	
	dias_quentes = 0;
	media_temp = 0.0;
	i = 0;
	while(i < TAM)
	{
		printf("Digite a temperatura do dia %d°..:",i + 1);
		scanf("%f",&mes[i]);
		setbuf(stdin,NULL);
		if(mes[i] > 30)
		{
			dias_quentes++;
		}
		media_temp += mes[i];
		i++;
	}
	media_temp /= i;
	i = 0;
	printf("\nTemperaturas registradas em janeiro:\n");
	while(i < TAM)
	{
		printf("%d dia..: %.2f° graus.\n",i + 1, mes[i]);	
		i++;
	}
	printf("\nA temperatura média em janeiro foi de: %.2f graus\n", media_temp);
	printf("Dias com temperaturas acima de 30 graus: %d\n", dias_quentes);
}


