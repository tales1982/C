/*
 * Faca um programa que receba um numero inteiro e verefique se esse numero è Par ou Impar.
 */

#include<stdio.h>

int main(){

  int num,rest;
  printf("Digite um número.\n");
  scanf("%i",&num);
  setbuf(stdin,NULL);

  rest = num % 2;
  
  if(rest == 0) printf("Seu numero é PAR\n"); else printf("Seu numero é IMPAR\n");

  return 0;
}

