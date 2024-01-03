/*
 Foi realizada uma pesquisa de algumas caracteristicas fisicas da populaçao
 de uma certa regiao, a qual coletou os seguintes dados referentes a cada 
 habitante para serem analisados:
 sexo(maculino,feminino)
 cor dos olhos(azul, verde, castanho, ou preto)
 idade
 Faça um algoritimo que leia os dados coletados e determine:
 a média de idade dos habitantes
 a média de idade dos homens
 a média de idade das mulheres
 a maior idade dos habitantes
 a porcentagem de pessoas do sexo feminino cuja idade esta entre 18 e 25 anos
 a porcentagem de pessoas com olhos claros
 Obs: O ultimo dao contém uma idade negativa.
 */

#include <stdio.h>
#define TAM 10
typedef	struct
{
	char	sexo;
	char	olhos;
	int	idade;
}	Habitantes;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { 
        // lê e descarta os caracteres até encontrar 
        //'\n' (nova linha) ou EOF (Fim do arquivo)
    }
}

int	main()
{
	int	i;
	Habitantes pessoa[TAM];
	float media_;
	
	
	i = 0;
	puts("\t __________________________");
	puts("\t|                          |");
	puts("\t|         Enquete          |");
	puts("\t|__________________________|");
	
	while (i < TAM)
	{
		printf ("\n\tQual e seu sexo (M/F)..: ");
		scanf ("%c",&pessoa[i].sexo);
		limparBuffer();
		
		printf("\n\tQual é a cor do seus olhos.\n");
		printf("\tA para Azul\n\tC para castanho\n\tV para Verde\n\tP pra preto\n\tDigite sua escolha...: ");
		scanf("%c",&pessoa[i].olhos);
		limparBuffer();
		
		printf("\n\tQual sua idade..: ");
		scanf("%d",&pessoa[i].idade);
		limparBuffer(); 
		i++;
	}
	return(0);
}


