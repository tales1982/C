/*
 Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
 apenas aritimetica de ponteiros, leia esses array do teclado e imprima o dobro 
 de cada valor lido.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int n[5],i;

  printf("Digite 5 numeros para calcular o dobro de cada elemento.\n");

  for (i = 0; i < 5; ++i) {
  printf("Digite o %i° numero..: ",i+1);
  scanf("%i",&n[i]);
  setbuf(stdin,NULL);
  }

  for (i = 0; i < 5; ++i) {
    printf("O dobro de %i é %i\n",n[i],n[i] * 2);
  }

  return 0;
}
