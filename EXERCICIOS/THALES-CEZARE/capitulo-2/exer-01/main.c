/*
 Prepare um algoritimo que leia um numero inteiro e descruba se é par ou impar.
 */

#include<stdio.h>

int main(){
  int nun = 0,res =0;

  printf("Digite um numero..:");
  scanf("%i",&nun);
  setbuf(stdin,NULL);

  res = nun%2;


  if(res == 0){
    printf("Seu numero e PAR\n");
  }else{
    printf("Seu numero e IMPAR\n");
  }
   }
