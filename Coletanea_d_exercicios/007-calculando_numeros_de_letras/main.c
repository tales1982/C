/*
 * Digite um nome, calcule e mostre quantas letras tem.
 */

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char nome[50];
  int tam;
  printf("Digite seu nome\n");
  fgets(nome,50,stdin); 
  tam = strlen(nome)-1;

  printf("Seu nome tem %i letras\n",tam);

  return 0;
}
