/*EXERCICIO 01
  Escre um programa que leia o salario hora de um professor, a quantidade de horas trabalhadas, e a quantidades de filhos menores de 14 anos.

  Calcule o valor do salário bruto deste professor.
  Para calcular o salário familia leve em consideraçao as informacoes a seguir:

        SALARIO BRUTO                               SALARIO FAMILIA
  _____________________________________________________________________________

  Salario até R$ 700,00                              R$ 8,50 para cada filho.
  Salario acima de  R$ 700,00 ate 1.000,00           R$ 6,50 para cada filho.
  Salário acima de 1.000,00                          R$ 2,50 para cada filho.

 */
#include<stdio.h>


int main(int argc, char *argv[])
{
  float sal_hora, horas_trabalhadas,*ptr, res_valor;
  int filhos;

  printf("Digite o valor da sua hora trabalhada.\n");
  scanf("%f",&sal_hora);
  setbuf(stdin,NULL);

  printf("Digite quantas horas voce trabalhou este meis\n",&horas_trabalhadas);
  scanf("%f",&horas_trabalhadas);
  setbuf(stdin,NULL);

  printf("Quantos filhos nemores de 14 anos voce tem?\n");
  scanf("%i",&filhos);
  setbuf(stdin,NULL);


  res_valor = sal_hora * horas_trabalhadas;

  ptr = &res_valor;

  if(*ptr <= 700){

    float bonus = 8.50 * (float)filhos;
    printf("Seu salario bruto é de : %.2f\nVoce tem um bonus de %.2f\nSeu salário total e de :%.2f\n",*ptr,bonus,*ptr +bonus);
  }else if(*ptr > 700 && *ptr < 1000){

    float bonus = 6.50 * (float)filhos;
     printf("Seu salario bruto é de : %.2f\nVoce tem um bonus de %.2f\nSeu salário total e de :%.2f\n",*ptr,bonus,*ptr +bonus);
 
  }else{
    float bonus = 2.50 * (float)filhos;
    printf("Seu salario bruto é de : %.2f\nVoce tem um bonus de %.2f\nSeu salário total e de :%.2f\n",*ptr,bonus,*ptr +bonus);
 
  }


  return 0;
}
