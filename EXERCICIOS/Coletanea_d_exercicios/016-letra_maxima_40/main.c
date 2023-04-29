/*
   Solicite no teclado uma frase com maximo 40 letras. Se o tamanho for maior que 40
   de uma mensagen de entrada invalida e solicite novamente, se passar, imprime a frase na vertical
   com um tempo em cada letra.
   */

#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[])
{
  char letra[101];
  int tam,i;

  do {
    printf("Digite um texto com maximo de 40 letras!\n");
    scanf(" %100[^\n]",letra);
    setbuf(stdin,NULL);

    tam = strlen(letra);
    printf("%i\n",tam);



    if(tam > 40){
      printf("DIgite um texto menor que 40 letras\n");
    }else{
      for (i = 0; i < tam; ++i) {
       printf("%i = %c\n",i+1,letra[i]);
      }

    }
  } while (tam > 40);

  printf("Obrigado pela visita\n");

  return 0;
}
