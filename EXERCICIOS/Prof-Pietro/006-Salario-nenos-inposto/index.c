#include <stdio.h>
#include <string.h>
#include <locale.h>



int main(){
    float salario ;
    const float IMPOSTO = 7;
    const float BONUS = 5;
    
   
    setlocale(LC_ALL,"Portuguese");
    printf("CALCULO DO SALARIAL DEDUZIDO O IMPOSTO.\n");
    printf("Digite seu salario.\n");
    scanf("%f",&salario);
    fflush(stdin);

    float abatimento = (IMPOSTO/100)*salario;
    printf("Voce teve %.2f Reais de desconto no salario\n",abatimento);
    float salarioAbatido = salario - abatimento;
    printf("Seu salario depois dos desconto é %.2f Reais\n",salarioAbatido);
    float bonificacao = (BONUS/100)*salarioAbatido;
    float salarioFinal = bonificacao + salarioAbatido;
    printf("Esse meis voce teve uma bonificaçao de %.0f%% que e de %.2f Reais\n",BONUS,bonificacao);
    printf("Seu salaro final depois dos desconto e o ajuste do bonus é de %.2f\n",salarioFinal);
     //float salarioFinal = salario - abatimento;
    //printf("Seu salario ja descontado os imposto é de :%.2f\n",salarioFinal);

}