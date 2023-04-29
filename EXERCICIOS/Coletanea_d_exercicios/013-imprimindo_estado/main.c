/*
 * Receba do teclado uma sigla de um estado , e imprime umas das mensagens
 * Carioca, Paulista, Mineiro, Outros estados.
 */


#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
char estado[3];
int tam;
printf("Informe a sigla de um estado.");


scanf("%s",estado);

if(!strcmp(estado,"sp") || !strcmp(estado,"SP")){
  printf("Paulista\n");
}else if(!strcmp(estado,"mg") || !strcmp(estado,"MG")){
  printf("Mineiro\n");
}else if(!strcmp(estado,"rj") || !strcmp(estado,"RJ")){
  printf("Carioca\n");
}else{
  printf("Outros estados\n");
}



  return 0;
  }
