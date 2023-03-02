/* 1 pé = 12 Polegadas
 * 1 jarda = 3 pés
 * 1 milha = 1760 Jardas
 *
 * Faça um programa que receba uma medida em pés, faça as conversoes a seguir e mostre os resultados.
 *
 * */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#define NUM 30

int main(){

	setlocale(LC_ALL,"Portuguese");

	char nome[NUM];
	float pes,polegadas = 12, jarda = 3, milha = 5280;
	printf("Ola qual é seu nome?\n");
	scanf("%30[^\n]s",nome);
	printf("Bem vindo %s, Vamos fazer umas conversoes.?\n",nome);
	setbuf(stdin,NULL);
	printf("Insira a medida em pés.\n");
	scanf("%f",&pes);
	polegadas = pes * polegadas;
	printf("Polegadas: %.0f \n",polegadas);
	jarda = pes / jarda;
	printf("Jardas %.0f \n",jarda);
	milha = pes / milha;
	printf("Milhas:%.0f \n",milha);

}

