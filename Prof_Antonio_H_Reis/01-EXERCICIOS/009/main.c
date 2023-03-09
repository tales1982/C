/*
 * Escreva um programa que leia o salário bruto de um fucionário.
 * Calcule o desconto do INSS baseado nas informacoes seguintes..
 *
 * SALARIO                                       TAXA DO INSS
 * ------------------------------------------------------------------
 * Salário até R$ 1.317,07                       8% de desconto
 * Salário acima de R$ 1.317,07 até 2.195,12     9% de desconto
 * Salário acima de R$ 2.195,12                  11% de desconto
 *
 * no final aprensentar:
 * => O valor do salário bruto.
 * => A taxa do INSS.
 * => O valor do desconto de INSS.
 * =O valor do salário liquido.
 *
 */

#include<stdio.h>
#include<locale.h>
int main(int argc, char *argv[])
{
  setlocale(LC_ALL,NULL);

  float salarioBruto, salarioFinal,inss;

  printf("Informe o valor do seu salário bruto mensal.\n");
  scanf("%f",&salarioBruto);
  setbuf(stdin,NULL);

  if(salarioBruto <= 1317.07){
    inss = 8;
  }else if(salarioBruto > 1317.07 && salarioBruto <= 2195.12){
    inss = 9;
  }else{
    inss = 11;
  }


  salarioFinal = (inss / 100) * salarioBruto;

  printf("O valor do seu salarioBruto é de R$ %.2f\n",salarioBruto);
  printf("A taxa do INSS é de %.0f%%\n",inss);
  printf("O valor de desconto do INSS é de R$ %.2f\n",salarioFinal);
  printf("O valor do salario liquido é de R$ %.2f\n",salarioBruto - salarioFinal);

  return 0;
}
