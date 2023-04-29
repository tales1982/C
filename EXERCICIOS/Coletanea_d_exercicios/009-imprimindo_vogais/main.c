/*
 * Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U. Tem esta mensagem.
 * Considerar minuscular e maiuscula.
 */

#include<stdio.h>
#include<string.h>

/*----- MACRO------*/

#define vogais  'a' || mensagem[i] == 'e' || mensagem[i] == 'i' || mensagem[i] == 'o' || mensagem[i] == 'u' || mensagem[i] == 'A' || mensagem[i] == 'E' || mensagem[i] == 'I' ||mensagem[i] == 'O' || mensagem[i] == 'U'

#define N 100

int main(int argc, char *argv[])
{
  char mensagem[N];
  int contador = 0,tam;


  printf("Digite uma mensagem\n");
  fgets(mensagem,N,stdin);


  tam = strlen(mensagem)-1;

  for(int i = 0; i < tam; i++){
    if(mensagem[i] == vogais){
      printf("%c",mensagem[i]);
      contador++;
    }
  }
  printf("\n%i",contador);

  return 0;
}
