/*
 Uma pessoa aplicou numa caderneta de poupança um capital de 5.000,00
 a juros mensais de 2% durante 1 ano. Escreva um algoritimo que determine
 o montante de cada mês durante este periodo.
*/

#include <stdio.h>
void	rendimento()
{
	float capital;
	float juros;
	int i;
	
	i = 0;
	capital	= 5000;
	
	printf("\n\tVoce aplicou R$ 5.000  na poupança durante 1 ano.\n\n");
	
	while(i < 12)
	{
		/*juros = 2.0;
		juros /= 100;
		juros *= capital;
		capital += juros;*/
		juros = 0.02 * capital; // 2% de juros sobre o capital atual
		capital += juros;
		
		printf("\tSua aplicaçao rendeu no %.2d° mês, R$ %.2f\n", i + 1,juros);
		i++;
	}
  	
	printf("\n\tSeu capital em 1 ano passou para R$ %.2f\n\n",capital);
}

int	main()
{
	
	rendimento();
	return(0);
}



