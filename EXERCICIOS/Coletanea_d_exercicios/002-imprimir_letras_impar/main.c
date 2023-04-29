/*
  2) Receber um nome, e imprimir as letras na posicao impar.
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  
char nome[30];

  printf("Digite seu nome.\n");
  fgets(nome,30,stdin);
  printf("%s",nome);
  for (int i = 0; i < nome[i]; ++i) {
    if(i % 2 == 0){
      printf("%c",nome[i]);
    }
  }




  return 0;
}

