/**
 * Faça um programa que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
*/
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    float deposito, juros = 2.5;
    printf("Digite o valor do seu deposito.\n");
    scanf("%f",&deposito);
    setbuf(stdin,NULL);
    printf("O valor do seu deposito é de R$ %.2f Reais.",deposito);
    printf("Você teve um rendimento de %.2f%% na sua conta.\nSeu saldo atual depois do acréscimo do rendimento mensal é de R$%.2f, Reais\n",juros,((juros / 100) * deposito) + deposito );

}