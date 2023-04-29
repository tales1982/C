/*---------------------------- Realloc ----------------------------
Agora vamos falar sobre mais uma função muito importante em alocação dinâmica, essa função é a realloc().

Como você já viu anteriormente é muito simples alocar memória usando as funções malloc e calloc, porém imagine que você em um determinado momento precisa aumentar ou diminuir o tamanho de alocação de memória.

Caso seja necessário fazer isso você pode usar a função realloc (), essa função tem o seguinte protótipo:
 Void *realloc(void *ptr, unsigned int num)

 Veja que essa função é muito simples ela modifica o tamanho da memória alocada pelo ponteiro ptr para o valor especificado por num e caso não exista memória para efetuar essa operação com êxito teremos o retorno de um ponteiro nulo.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int quant,i,j=0,novoValor;
  int *vetor;

  vetor = malloc(quant * sizeof(int));//lembrando poderia ussar tb o calloc e so substituir o (*) por (,)

  printf("Digite a quantidade do vetor..:");
  scanf("%i",&quant);
  setbuf(stdin,NULL);

  for (i = 0; i < quant; ++i) {
    printf("Valor [%i]..: ",i+1);
    scanf("%i",&vetor[i]);
    setbuf(stdin,NULL);
  };
  
  while(j < quant)
  {
    printf("vetor[%i]..: %i\n",j+1,vetor[j]);
    j++;
  }

  printf("Vamos alterar o tamanho do array digite o novo tamanho..: \n");
  scanf("%i",&novoValor);
  setbuf(stdin,NULL);

  vetor = realloc(vetor,novoValor * sizeof(int));//estou alterando o tamanho do array
  for (i = 0; i < novoValor; ++i) {
    printf("Valor [%i]..: ",i+1);
    scanf("%i",&vetor[i]);
    setbuf(stdin,NULL);
  }
  for(j = 0 ;j < novoValor; j++ )
  {
    printf("vetor[%i]..: %i\n",j+1,vetor[j]);
  
  }
free(vetor); // Obs sempre liberar o spaço.
  return 0;
}
