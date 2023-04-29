/*
   Escreva um programa que leia números inteiros ate que seja digitado ZERO.
   no final apresentar:
   => O somatorio dos números Positivos.
   => O somatorio dos números Negativos.
   */
#include <stdio.h>

int main(int argc, char *argv[])
{
  int digit =1,somaP = 0,somaM = 0;
  int *ptr = &digit;

  while(digit != 0){
  
    printf("Digite um numero...: ");
    scanf("%i",ptr);
    setbuf(stdin,NULL);

    if (digit > 0) somaP += *ptr;else somaM += *ptr;

  }

  printf("A soma dos numeros Positivo é...: %i\n",somaP);
  printf("A soma dos numeros Negativo é ..: %i\n",somaM);
  return 0;
}
