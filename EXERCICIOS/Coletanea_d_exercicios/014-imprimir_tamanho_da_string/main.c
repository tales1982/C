/* Informe dois nomes, imprimir o tamanho de cada um e mostra-los */

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char nome1[15],nome2[15];
  int tam1 = 0,tam2 = 0;


  printf("Digite o 1° nome\n");
  scanf("%s",nome1);
  setbuf(stdin,NULL);

  printf("Digite o 2° nome");
  scanf("%s",nome2);

  
  tam1 = strlen(nome1);
  tam2 = strlen(nome2);

  printf("Tamanho do 1° nome = %i\n",tam1);
  printf("Tamanho do 2° nome = %i\n",tam2);

  return 0;
}
