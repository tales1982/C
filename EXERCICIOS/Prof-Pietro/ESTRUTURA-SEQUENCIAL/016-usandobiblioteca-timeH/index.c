/*
 * Faça um programa que receba o ano de nascimento de uma pessoa e do ano atual, calcule a idade dele e mostre. 
 */

#include <stdio.h>
#include <time.h>//necessário para usar localtime() , struct tm e outras funçoes e tempo.
#include <locale.h>
#define N 30
int main(){
	setlocale(LC_ALL,"Portuguese");
	//ponteiro para struct que armazena data e hora.
	struct tm *ano_atual;
	time_t segundos;
	time(&segundos);
	ano_atual = localtime(&segundos);
	int anoAtual, nacimento;
	char nome[N];
	printf("Ola como voce se chama?\n");
	scanf("%30[^\n]s",nome);
	setbuf(stdin,NULL);
	printf("Muito prazer %s.\n",nome);
	printf("%s, qual o ano que voce naçeu?\n",nome);
	scanf("%i",&nacimento);
	anoAtual = ano_atual->tm_year+1900;
	printf("%s, voce naçeu no ano de %i, e voce agora tem %i anos..\n",nome, nacimento, anoAtual - nacimento);
	


	return 0;
}
