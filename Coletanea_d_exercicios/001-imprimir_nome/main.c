/*
 1) recebar um nome, e imprimir as 4 primeiras letras.
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  char nome[30];

  printf("Digite seu nome\n");
  fgets(nome,30,stdin);
  printf("%s",nome);
  for(int i = 0; i < 4;i++){
    printf("%c",nome[i]);
  }
  printf("\n");
  return 0;
}
