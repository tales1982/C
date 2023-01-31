/*
Implemente um programa em C que leia dois números inteiros e os apresente
na tela em ordem decrescente.
Exemplo: o usuário entra com 11 e 15. O sistema imprime 15 11.
Exemplo: o usuário entra com 12 e 6. o sistema imprime 12 6.
Exemplo: o usuário entre com 14 e 14. O sistema imprime 14 14.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");

	int n1,n2;

	printf("Digite o 1° numero.\n");
	scanf("%d",&n1);
	setbuf(stdin,NULL);

	printf("Digite o 2° numero.\n");
	scanf("%d",&n2);
	setbuf(stdin,NULL);

	if(n1 > n2){
		printf("O %d é maior que %d.\n",n1,n2);
	}else if(n2>n1){
		printf("O %d é maior que %d.\n",n2,n1);
	}else{
		printf("O %d e %d sao iguais.\n",n1,n2);
	}
}
