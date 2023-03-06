/*
 * Escreva um programa que leia 2 úmeros inteiros quaisquer.
 * e mostre o maior deles
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
int a, b;

printf("Digite 2 numeros para podermos compara os números.\n");
scanf("%i %i",&a,&b);

if(a > b)printf("O maior é = %i\n",a); else printf("O maior é = %i\n",b);
  return 0;
}
