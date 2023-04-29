/*
 * Receba do teclado um nome e imprima tantas vezes quantos forem seus caracteres.
 */

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char nome[50];
  int tam;

  printf("Digite seu nome.\n");
  fgets(nome,50,stdin);

  tam = strlen(nome)-1;

  for (int i = 0; i < tam; ++i) {
    printf("%i° = %s",i+1,nome);
  }




  return 0;
}
