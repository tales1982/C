/*
 * Faça um programa que receba o número de horas trabalhada por um gestor e o valor do salario minimo vigente. Crie uma funçao
 * que calcule o salário a receber do gestor, seguindo as regras abaixo.
 * 1° Descubra quanto vale a hora trabalhada.
 * 2° O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 * 3° O imposto equivale a 3% do salario bruto;
 * 4° O salário a receber equivale ao salário bruto menos o imposto.
 * 5° Calcule as horas extra e desconte os devido impostos das horas extra e some com o valor final do salario.
 */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float prixHRS = 0.0,salarioNet = 0.0, hrsTrab = 0.0,hrsExtra =0.0, tax = 3,bonus = 0.0,bonusFim = 40;

	printf("Insira o número de horas trabalhadas.\n");
	scanf("%f",&hrsTrab);
	setbuf(stdin,NULL);

	printf("Digite o valor da hora do fucionario.\n");
	scanf("%f",&prixHRS);
	setbuf(stdin,NULL);

	printf("Digite quantas horas extra voce fez este meis.\n");
	scanf("%f",&hrsExtra);
	setbuf(stdin,NULL);

	if(hrsExtra == 0){
		salarioNet = hrsTrab * prixHRS;
		salarioNet = salarioNet - (tax / 100 * salarioNet);
		printf("O seu salario liquido depois dos desconto é de R$ %.3f Reais.\n",salarioNet);
	}else{
		salarioNet = hrsTrab * prixHRS;
		salarioNet = salarioNet - (tax/100 * salarioNet);
		bonus = hrsExtra * prixHRS;
		bonusFim = bonusFim/100 * bonus;
		bonusFim = bonusFim + bonus;
		bonusFim = bonusFim -  (tax/100 * bonusFim);

		printf("Voce teve R$ %.2f Reais de horas extras este meis.\n",bonusFim);
		printf("O seu salario final acresentado com sua hora extra é de R$ %.2f Reais.\n",salarioNet + bonusFim);	
		
	}
}
