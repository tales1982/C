/*
 *Receba um nome no teclado e imprima quantas letras A tem o nome.
 */

#include<stdio.h>
#include<string.h>

#define N 50
int main(int argc, char *argv[])
{
  int cont,tam;
  char nome[N];

  printf("Digite o seu nome.\n");
  fgets(nome,N,stdin);

  tam = strlen(nome)-1;


  for(int i = 0; i < tam; i++){
  
    if(nome[i] == 'a' || nome[i] == 'A'){
      cont++;
    }
  }
printf("Existem %i letra 'A' na sua frase\n",cont);




  return 0;
}
