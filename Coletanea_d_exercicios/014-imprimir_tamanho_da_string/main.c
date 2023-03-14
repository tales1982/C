/* Informe dois nomes, imprimir o tamanho de cada um e mostra-los */

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char nome1[15],nome2[15];
  int tam1 = 0,tam2 = 0;


  printf("Digite o 1° e 2° nome");
  scanf("%s %s",nome1,nome2);

  if(strcmp(nome1,nome2) == 0){

    printf("iguais \n");
  }
  
  printf("%i",strcmp(nome1,nome2));
 // tam1 = strlen(nome1);
 // tam2 = strlen(nome2);

//  printf("Tamanho 1 = %i\n",tam1);
 // printf("Tamanho 2 = %i\n",tam2);
/*terstedsakljdsefjgklöglösdfk,*/

  return 0;
}
