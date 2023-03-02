/*
 * Pedro comprou um saco de raçao para seus gatos, com o peso em quilos, faça uma funçao que receba o peso do saco de raçao,
 * em quilos, o número de gatos e a quantidade de raçao fornecida para cada gato por dia em gramas. A funçao deve retornar o total de quilos de raçao
 * restante no saco,apos um dia de consumo. Assim sendo, considerando que pedro possui 2 gatos, crie um algoritimo que invoque a funçao recen criada
 * para calcular e mostra quanto restará de raçao no saco após 5 dias.
 */

#include <stdio.h>
//#include <locale.h>

int main(){
//	setlocale(LC_ALL,"Portuguese");

	float klSaco = 0, cats = 0, racaoDiaria = 0, dias = 0,restoRacao = 0,racaoUsada = 0, kl = 1000;
	
	printf("Qual é o peso do saco?\n");
	scanf("%f",&klSaco);
	setbuf(stdin,NULL);
	
	printf("Quantos gatos voce tem?\n");
	scanf("%f",&cats);
	setbuf(stdin,NULL);

	printf("Qual é o peso da raçao diaria para cada gato?\n");
	scanf("%f",&racaoDiaria);
	setbuf(stdin,NULL);

	printf("Quantos dias voce ja alimentou o gatos\n");
	scanf("%f",&dias);
	setbuf(stdin,NULL);
	

	racaoUsada = dias * racaoDiaria;
	racaoUsada = racaoUsada * cats;
	klSaco = klSaco * kl;
	klSaco = klSaco -racaoUsada ;

	if(racaoUsada <= 999){

	printf("Voce ja usou %.0f gramas de raçao.",racaoUsada);	

	printf("Apos %.0f dias, ainda resta : %.0f de Raçao Kilos.\n ",dias,klSaco);
	}else{

	printf("Voce ja usou %.0f Kilos de raçao.\n",racaoUsada);	

	printf("Apos %.0f dias, ainda resta : %.0f Kilos de Raçao.\n ",dias,klSaco);
	}

	return 0;
}
