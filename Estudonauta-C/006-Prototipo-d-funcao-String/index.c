//==================================================
// 						  Function Principal

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	char nome[10],sobrenome[10];

	printf("Digite seu nome: ");
	//scanf("%10[^\n]s",nome);
    scanf("%s[\n]", nome);
	setbuf(stdin,NULL);

	printf("Digite seu sobrenome: ");
	//scanf("%10[^\n]s",sobrenome);
    scanf("%s[\n]", sobrenome);
	setbuf(stdin,NULL);

	teste(nome,sobrenome);
	return 0;
}

//=================================================================================================================================
// 						development of functions

void teste(char a[10], char b[10]){

          
	printf("OLA BEM VINDO %s %s\n",a,b);
}
