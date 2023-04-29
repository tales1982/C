/*------------------------------  Malloc -------------------------
 -A função malloc possui o seguinte protótipo:
variavel = (size_t * sizeof(int));

Recebendo como parâmetro o tamanho em bytes da região a ser alocada e retornando um ponteiro para a área alocada. Se ocorrer um erro ao alocar memória, retorna um ponteiro para NULL.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int QuantidadE,i;
  int *vetor;//posso declara o array assim porque o ponteiro ja e um vetor.
  
  vetor = malloc(QuantidadE * sizeof(int));
  /*estou mutiplicando o tamanho do array definido pelo cliente com o tamanho do int*/

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

  free(vetor);// Libera o spaco usado e sempre uma boa pratica liberar o espaco
  return 0;
}
