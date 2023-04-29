/*
 Escreva um programa que leia números inteiros até que seja digitado um numero negativo.
 no final apresentar a quantidade de numeros que foram digitados.
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  int digit = 0,sum;

  while(digit >= 0){
  printf("Digite um numero.");
  scanf("%i",&digit);
  setbuf(stdin,NULL);
  sum ++;
  }

  printf("Form digitados %i numeros.\n",sum);
  return 0;
}
