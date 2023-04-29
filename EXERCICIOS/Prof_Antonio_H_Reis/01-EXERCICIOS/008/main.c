/*
 * Escreva um programa que leia o salário de um fucionario.
 * Deverá ser concedido ao fucionário um reajuste de salario baseado nas informaçoes a seguir
 * SALÁRIO                                     TAXA DE REAJUSTE
 * Salário ate R 1.000                         15% de reajuste
 * Salário acima de 1.000 ate R$ 2.000         10% de reajuste
 * Salário acima de 2.000                      05% de reajuste
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  
   float velhoSalario,ajuste,novoSalario;

   printf("Digite seu salario mensal, para podermos saber quanto voce tem direito de reajuste.\n");
   scanf("%f",&velhoSalario);

   if(velhoSalario <=1000)ajuste = 15;
   else if(velhoSalario >1000 && velhoSalario <= 2000) ajuste = 10; 
   else ajuste = 2.5;


   novoSalario = (ajuste /100) * velhoSalario;

   printf("Salario velho.............: R$ %.2f\n",velhoSalario);
   printf("Taxa de reajuste..........: %.2f%% \n",ajuste);
   printf("Valor do almento..........: R$ %.2f\n",novoSalario);
   printf("Salario novo..............: R$ %.2f\n",velhoSalario + novoSalario);

  return 0;
}
