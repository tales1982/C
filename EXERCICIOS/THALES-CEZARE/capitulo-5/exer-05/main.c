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
 Obs: O ultimo dado contém uma idade negativa.
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
	Habitantes	pessoa[TAM];
	float	media_todos;
	float	media_h;
	float	media_f;
	int	count;
	int	count_h;
	int	count_f;
	float	porceto_j;
	int	opcao;
	int	aux_maior_idade;
	int	countMulheresEntre18e25;
	float	porcentagem;
	float	porcentagem_olhos;
	int	olhosClaros;

	opcao = 1;
	media_todos = 0.0;
	media_h = 0.0;
	media_f = 0.0;
	count = 0;
	count_h = 0;
	count_f = 0;
	porceto_j = 0.0;
	aux_maior_idade = 0;
	countMulheresEntre18e25 = 0;
	porcentagem = 0.0;
	porcentagem_olhos = 0.0;
	olhosClaros = 0;
	
	puts("\t __________________________");
	puts("\t|                          |");
	puts("\t|         Enquete          |");
	puts("\t|__________________________|");
	
	do
	{
		printf ("\n\tQual e seu sexo (M/F)..: ");
		scanf ("%c",&pessoa[count].sexo);
		limparBuffer();
		
		printf("\n\tQual é a cor do seus olhos.\n");
		printf("\tA para Azul\n\tC para castanho\n\tV para Verde\n\tP pra preto\n\tDigite sua escolha...: ");
		scanf("%c",&pessoa[count].olhos);
		limparBuffer();
		
		printf("\n\tQual sua idade..: ");
		scanf("%d",&pessoa[count].idade);
		limparBuffer(); 

		printf("\n\tPara continuar digite 1 / Para sair Digite 0..: ");
		scanf("%d",&opcao);
		limparBuffer(); 

		media_todos += pessoa[count].idade;
		if(pessoa[count].sexo == 'm' || pessoa[count].sexo == 'M')
		{
			media_h += pessoa[count].idade;
			count_h++;
		}
		if(pessoa[count].sexo == 'f' || pessoa[count].sexo == 'F')
		{
			media_f += pessoa[count].idade;
			count_f++;
			if(pessoa[count].idade >= 18 && pessoa[count].idade <= 25)
			{
				countMulheresEntre18e25++;
			}
		}
		if(pessoa[count].idade > aux_maior_idade)
		{
			aux_maior_idade = pessoa[count].idade;
		}
		if(pessoa[count].olhos == 'a' || pessoa[count].olhos == 'A' && pessoa[count].olhos == 'v' || pessoa[count].olhos == 'V')
		{
			olhosClaros++;
		}
		
		count++;


	}while(opcao != 0);

	media_todos /= count;
	media_h /= count_h;
	media_f /= count_f;
	porcentagem = ((float)countMulheresEntre18e25 / count) * 100;
	porcentagem_olhos = ((float)olhosClaros / count) * 100;
	
	
	printf("\n\tMedia de idade de todos os habitantes... %.2f\n",media_todos);
	printf("\tMedia de idade dos hommes... %.2f\n",media_h);
	printf("\tMedia de idade das mulheres... %.2f\n",media_f);
	printf("\tA maior idade e de... %d anos\n",aux_maior_idade);
	printf("\tPorcentagem de mulheres entre 18 e 25 anos: %.2f%%\n", porcentagem);
	printf("\tPorcentagem de pessoas com os olhos claros : %.2f%%\n", porcentagem_olhos);



	return(0);
}


