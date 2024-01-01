/*
 Tendo como dados de entrada a altura e sexo de uma pessoa,
 construa um algoritmo que calcule seu peso ideal utilizando
 as segintes fórmula de Robinson.
 Peso Ideal Homen = 52 +[1.9 × ((altura em cm/2.54)−60)]
 Peso Ideal Mulher= 49 +[1.7 × ((altura em cm/2.54)−60)]
 */
 
#include <stdio.h>

void	menu(void);
void	dados(float *altura, char *sexo);

int	main()
{
	float	altura;
	char	sexo;

	menu();
	dados(&altura, &sexo);
	return 0;
}

void	menu(void)
{
	puts(" _______________________________ ");
	puts("|                               |");
	puts("|       Calcular peso ideal     |");
	puts("|_______________________________|");
	puts("");
}

void	dados(float *altura, char *sexo)
{
	float peso_ideal;
	
	peso_ideal = 0.0;
	printf("Digite sua altura em cm: ");
	scanf("%f", altura);
	setbuf(stdin, NULL);

	printf("Qual é seu sexo M/F: ");
	scanf(" %c", sexo);
	setbuf(stdin, NULL);
	
	if(*sexo == 'f' || *sexo == 'F')
	{
		peso_ideal = 49 + (1.7*((*altura/2.54)-60));
	}
	else if(*sexo == 'm' || *sexo == 'M')
	{
		peso_ideal = 52 + (1.9*((*altura/2.54)-60));
	}
	else
	{
		puts("Digite seus dados corretamete porfavor.");
	}
	
	puts(" _______________________________ ");
	puts("|                               |");
	printf("| Seu peso ideal é %.2f kilos  |\n",peso_ideal);
	puts("|_______________________________|");
	puts("");
	
}

