/* Entra com um nome e imprimir o nome somente se a primeira letra do nome for "A" ou "a". */

#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[])
{
  char nome[30];


  printf("Digite seu nome.\n");
  fgets(nome,30,stdin);
  setbuf(stdin,NULL);

  if(nome[0] == 'a' || nome[0] == 'A'){
    printf("Seu nome começa com a letra A a = %s\n",nome);
  } else{
    printf("Seu nome nao começa com a letra A a %s\n",nome);
  }


  return 0;
}
