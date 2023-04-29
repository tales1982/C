/*
 * Escreve um programa que leia um numero inteiro qualquer.
 * Informar se o numero e diferente de 1000 ou se é igual..
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  int a = 10, b;
  printf("Digite um numero, para ver se voce acerta o numero secreto..!\n");
  scanf("%i",&b);

  if(b == a)printf("BRAVO voce acertou o numero secreto.\n");else printf("Erro seu número e diferente do número secreto\n");

  return 0;
}
