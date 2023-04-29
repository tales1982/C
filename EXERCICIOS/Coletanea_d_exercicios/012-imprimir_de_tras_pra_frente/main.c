/*
 * Receba um nome do teclado e imprimi-lo de trás para frente.
 */

#include<stdio.h>
#include<string.h>
#define N 50

int main(int argc, char *argv[])
{
  char nome[N];
  int tam, i;

  printf("Digite seu nome.\n");
  fgets(nome,N,stdin);

  tam = strlen(nome)-1;

for (i = tam; i >= 0; --i) {
  printf("%c",nome[i]);
}


  return 0;
}
