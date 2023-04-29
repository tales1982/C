/*
   -------------------------------- EXERCICIO 11 ------------------------------------
   Escreva um programa que leia o codigo numerico de um Meis a que escreva o nome do Meis,
   a que  se refere o código.

   qualque outro numero o codigo devera informar:codigo invalido 
   */


#include<stdio.h>
int main(int argc, char *argv[])
{

  char mes[12][15] = {
    "Janeiro", "Fevereiro",
    "Março", "Abril",
    "Maio", "Junho",
    "Julho", "Agosto",
    "Setembro", "Outubro",
    "Novembro", "Dezembro"
  };
  int op;
  printf("Escola de 1 a 12 para selecionar um meis.\n");
  scanf("%i",&op);
  setbuf(stdin,NULL);
  op -= 1;


  for (int i = 0; i < 12; i++) {
  
    if(op >= 0 && op <= 11){
      printf("Meis %i°  %s\n",op+1, mes[op]);
      break;
      if (i % 1 == 0){ 
        printf("\n",i);
      }else{
        printf("\n");
      } } 
  };
  return 0;
}

