/*
 * escreva um programa que leia a receita e a despesa de uma empresa no ano anterior.
 * Apresente a mensagem "Lucro" ou "Prejuizo", conforme a situaçao da empresa.
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  float lucro, despesas, resultado;

  printf("Digite o seu Lucro do ano de 2022.\n");
  scanf("%f",&lucro);
  setbuf(stdin,NULL);

  printf("Digite suas despesas do ano de 2022\n");
  scanf("%f",&despesas);

  if(lucro > despesas){
    resultado = lucro - despesas;
    printf("Você teve um  LUCRO de R$ %.2f no ano de 2022.",resultado);
  }else{
     resultado = despesas - lucro;
     printf("Voce tem um PREJUIZO  de R$ %.2f no ano de 2022.\n",resultado);
    }
  return 0;
}
