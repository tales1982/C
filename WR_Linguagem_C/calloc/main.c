/* -------------------- Calloc ----------------
   Sitaxe da calloc
   vetor = calloc(QuantidadE , sizeof(int));
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int QuantidadE,i;
  int *vetor;//posso declara o array assim porque o ponteiro ja e um vetor.
  
  vetor = calloc(QuantidadE , sizeof(int));// chamando a funcao calloc.
  

  printf("Informe o tanho do vetor");
  scanf("%i",&QuantidadE);//meu vetor recebe a contidade passa no malloc.
  setbuf(stdin,NULL);

  if(!vetor)
  {
    printf("Memoria esgotada\n");
    exit(1);
  }

  printf("Digite os valores para o vetor.\n");
  for (i = 0; i < QuantidadE; ++i) {
    printf("Valor do vetor [%i]..: ",i+1);
    scanf("%i",&vetor[i]);
    setbuf(stdin,NULL);
  }

  for (i = 0; i < QuantidadE; ++i) {
    printf("valor do vetor na possicao [%i]..: %i\n",i+1, vetor[i]);
  }

  return 0;
}

