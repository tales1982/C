/*
*Faça um programa que receba o salário-base de um funcionário, e calcule e mostre o seu salario a receber, sabendo-se que esse funcionário teve gratificação de R$ 600,00 e paga 10% sobre o salario base.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float salarioBase, bonus = 600, imposto = 10;
    
    printf("Digite seu salario-base mensal..\n");
    scanf("%f",&salarioBase);
    setbuf(stdin,NULL);
    printf("O seu salario depois dos desconto é de R$ %.2f Reais\n", salarioBase -(imposto / 100 * salarioBase ));
    printf("Você teve um bonus de %.0f Reais ajustado ao seu salario somando seu salario final em R$ %.2f Reais\n",bonus,salarioBase + bonus);
}