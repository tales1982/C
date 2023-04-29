/*
Desenvolva um programa em C que adicione o bônus de 10% ao salário de um
vendedor, caso suas vendas ultrapassem R$ 10000,00 no mês. Se as vendas
ultrapassarem R$ 20000,00, adicione 15% ao salário. Se o vendedor vender
para R$ 30000,00 ou mais, adicione 25% ao salário.
Exemplo: Salário R$ 4000,00
Vendas igual ou abaixo de 10 MIL: Salário de R$ 4000,00
Vendas acima de 10 MIL: Salário R$ 4400,00
Vendas acima de 20 MIL: Salário R$ 4600,00
Vendas igual ou acima de 30MIL: Salário de 5000,00
*/

#include <stdio.h>
#include <locale.h>
#define SALARIO 2890
int main(void){
	setlocale(LC_ALL,"Portuguese");
	char nome[15];
	float  venda, porcento = 10;

	printf("-----------Fechamento Mensal--------------\n");
      	printf("Entre o nome do fucionario.\n");
	scanf("%15[^\n]s",nome);
	setbuf(stdin,NULL);
	
	printf("Digite o valor da suas vendas desse meis.\n ");
	scanf("%f",&venda);
	setbuf(stdin,NULL);

	if(venda <= 10000 ){
		printf("%s suas vendas desse meis foram abaixo do cota, espero que melhore pro proximo meis.\n",nome);
		printf("como voce nao alcansou a cota desse meis seu salario é de R$ %d Reais, voce nao teve nenmhum bonus.\n",SALARIO);
	}else if(venda > 10000 && venda <=20000){
		printf("%s Parabens,voce alcansou a cota mensal, suas venda foram boas por isso voce vai ter um bonus de 10%% no salario .\n",nome);
		porcento = porcento / 100 * SALARIO;
		printf("O seu salario com o bonus é de R$ %.2f Reais, voce teve R$ %.0f Reais de bonus.\n",(SALARIO + porcento),porcento);
	}else if(venda > 20000 && venda <= 30000){
		printf("PARABENS %s, Voce feis um otimo meis vendeu acima de 20.000 mil, por isso voce vai obter um bonus no salario.\n",nome);
		porcento += 5;
		porcento = porcento / 100 * SALARIO;
		printf("Seu salario desse meis vai ter um bonus de 15%% sendo assim seu salario é de R$ %.2f Reais seu bonus foi de %.0f\n",porcento + SALARIO,porcento);
	}else{
		printf("BRAVO!! %s, Voce bateu todos os recordes vendeu mais  de 30 mil reais vendeu mais que qualquer um aqui, por isso vai ter um bonus de 25%% no salario.\n",nome);
		porcento +=10;
		porcento = porcento / 100 * SALARIO;
		printf("Seu salario desse meis é de R$ %.2f Reais, seu bonus foi de R$ %.2f Reais.\n",SALARIO + porcento,porcento);
	}


	      
}
