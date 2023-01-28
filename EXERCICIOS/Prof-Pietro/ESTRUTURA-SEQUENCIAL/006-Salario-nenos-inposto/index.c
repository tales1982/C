/**
 * Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga 7% sobre o salário-base.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>



int main(){
    float salario ;
    const float IMPOSTO = 7;
    const float BONUS = 5;
    
   
    setlocale(LC_ALL,"Portuguese");
    printf("CALCULO DO SALARIAL DEDUZIDO O IMPOSTO.\n");
    printf("Digite seu salario..\n");
    scanf("%f",&salario);
    fflush(stdin);

    float abatimento = (IMPOSTO/100)*salario;
    printf("Você teve %.2f Reais de desconto no salario\n",abatimento);
    float salarioAbatido = salario - abatimento;
    printf("Seu salario depois dos desconto é %.2f Reais\n",salarioAbatido);
    float bonificação = (BONUS/100)*salarioAbatido;
    float salarioFinal = bonificação + salarioAbatido;
    printf("Esse mes você teve uma bonificação de %.0f%% que e de %.2f Reais\n",BONUS,bonificação);
    printf("Seu salario final depois dos desconto e o ajuste do bonus é de %.2f\n",salarioFinal);
     //float salarioFinal = salario - abatimento;
    //printf("Seu salario ja descontado os imposto é de :%.2f\n",salarioFinal);

}