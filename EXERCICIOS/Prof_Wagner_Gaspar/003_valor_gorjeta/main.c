/*
 Escreva um programa que leia um valor de despesas de um restaurante, o valor da gorjeta
 em (porcentagem) e o número de pessoas para dividir a conta.
 Imprima o valor que cada um deve pagar. Assuama que a conta será paga dividida igualmente.
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
  int pessoas ;
  float conta,desp,gorjeta;
  
  printf("Digite o valor da conta..: ");
  scanf("%f",&desp);
  setbuf(stdin,NULL);

  printf("Para quantas pessoas querem dividir a conta..: ");
  scanf("%i",&pessoas);
  setbuf(stdin,NULL);

  conta = desp /(float)pessoas;
  gorjeta = (10.00 / 100.00) * conta ;
  printf("%.2f \n",gorjeta);
 
  printf("A dispesa para cada pessoa é de R$ %.2f Reais. \nE mais 10%% para o garçon no valor de R$ %.2f Reais.\nSomando o total de R$ %.1f Reais para cada pessoa.\n",conta,gorjeta,conta + gorjeta);

  return 0;
}
