/*
 * Sabe-se que o quillowatt de energia custa um milésimo do salario minimo: Faça um procedimento
 * que receba o valor do salário
 * minimo e quantidade de quillowatts consumida por uma residencia.O procedimento deve calcular
 * e retornar atraveis de passagem de parametros por referencia:
 * Sabendo disso, desenvolva um algoritimo que peça para inserir o valor do salário minimo e a
 * quantidade de quillowatts consumida. Invoque o respectivo procedimento e mostre,
 * na tela , as informacoes dos itens A , B , C. 
 *
 * A) O valor, em reais, de cada quillowatt;
 * B) O valor, em reais, a ser pago por essa residencia;
 * C) O valor, em reais, a ser pago com desconto de 15%. 
*/
//================================================================================//                                                  Function Prototype   								 
//                                                  
void teste(char a[], char b[]);

//==================================================================================================================================
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
