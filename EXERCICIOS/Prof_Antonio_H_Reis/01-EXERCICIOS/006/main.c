/*
 * Escreva um programa que leia 2 números quaisquer.
 * Apresentar o resultado do cálculo do maior dividido pelo menor.
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  int num1,num2;
  float res;

printf("Digite 2 numeros para podermos fazer a divisao desse números.\n");
scanf("%i %i",&num1,&num2);

if(num1>num2){
  res = (float)num1 / (float)num2;
  printf("A divisao de %i / %i = %.2f\n",num1,num2,res);
}else{
  res = (float)num2 / (float)num1;
  printf("A divisao de %i / %i = %.2f\n",num2,num1,res);
}

  return 0;
}
