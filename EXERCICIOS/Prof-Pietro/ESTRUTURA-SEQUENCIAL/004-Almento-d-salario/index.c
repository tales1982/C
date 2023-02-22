/*
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%(funcionário entra o aumento)
 */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float salario, reajuste,salarioFinal;
    
    fflush(stdin);
    printf("CALCULO DE REAJUSTE SALARIAL.\n");
    printf("-------------------------------------\n");
    printf("Digite o seu salario?\n");
    scanf("%f",&salario);
    fflush(stdin);
    printf("Digite a porcetagem do ajuste?:\n");
    scanf("%f",&reajuste);
    fflush(stdin);
    printf("--------<<<<<< CALCULANDO >>>>>>--------\n");
    printf("Salario atual: %.2f\n",salario);
    printf("Porcentagem do aumento: %.2f %%\n",reajuste);
    printf("Valor do reajuste: %.2f\n",(reajuste/100)*salario);
    salarioFinal = (reajuste/100)*salario + salario;
    printf("Salario reajustado: %.2f\n",salarioFinal);
    
}