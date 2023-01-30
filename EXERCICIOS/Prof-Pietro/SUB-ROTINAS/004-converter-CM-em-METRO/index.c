/*
 * Cada degrau de uma escada tem X cm de altura. Faça uma funçao que receba essa altura, em cm, e a altura que o usuario deseja alcansar
 * ao subir a escada, em metros. A funçao deve retornar o numero de degraus necessarios, para se atingir a altura desejada (desprezando a altura do proprio usuario)
 * Em seguida, crie um algoritimo para que o usuario possa informar os dados de entrada de funçao e ao final calcule e mostre o numeros de degraus.
 */
//=========================================================================================================================================================================
//Tales Lima
//
//======================================================================= Fuction Pricipal ================================================================================
#include <stdio.h>
#include <locale.h>
int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	int degrau = 0, metro = 100, altura = 0 ;

	printf("Insira  a altura de cada degrau em (CM).\n");
	scanf("%d",&degrau);
	setbuf(stdin,NULL);

	printf("Insira a altura da escada em (METROS).\n");
	scanf("%d",&altura);
	setbuf(stdin,NULL);

	degrau = ((float)altura * (float)metro) / (float)degrau;
	printf("A escada te exatemente: %d degraus.\n",degrau);
}

