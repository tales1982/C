// 4) Mostra 10x seu nome na tela, um nome por linha, usar 10 linhas.

#include<stdio.h>

int main(int argc, char *argv[])
{
  
  char nome[30];

  printf("Digite seu nome\n");
  fgets(nome,30,stdin);

  for(int i = 0;i < 10; i++){
    printf("%.2i° =  %s",i + 1, nome);
  }

  return 0;
}


