/*
   Escreva um programa que leia do teclado 20 valores inteiros e escreva no final:

   => a soma dos valores Positivos:
   => a soma dos valores Negativos:
   => a quantidade de Zeros digitados:
   */

/*-------- Biblioteca ----------*/
#include <stdio.h>
#define N 20

/*---------- Declaracao da Funçao ----------*/
void valores(int *valores);
//void imprimirValores(int *valores);
void soma(int *valores);
void ValorNegativos(int *valores);
void zero(int *valores);

/*------------- Main --------------*/
int main(int argc, char *argv[])
{
  int valorRecebido[N];
  valores(&valorRecebido);
  printf("===============================================\n");
  //  imprimirValores(valorRecebido);
  soma(valorRecebido);

  printf("===============================================\n");
  ValorNegativos(valorRecebido);

  printf("===============================================\n");
  zero(valorRecebido);
  printf("===============================================\n");
  return 0;
}


/*--------Prototipo de Funçao --------*/
/*--------- Entrada de Valores ------*/
void  valores(int *valores){

  printf("Digite 20 valores\n");

  for (int i = 0; i < N; i++) {
    printf("Valor %i..: ",i+1);
    scanf("%i",&valores[i]);
  } 
}

/*----------- Imprimir Valores ----------*/
/*void imprimirValores(int *valores){

  for (int i = 0; i < N; i++) {
  printf("Valor %i°...: %i\n",i +1,valores[i]);
  }
  }*/
/*------ Soma dos valores Possitivos -----*/
void soma(int *valores){
  int i = 0,soma = 0;
  for (i = 0; i < N; i++) {
    soma += valores[i];
  }

  printf("A soma dos valores Digitados é..: %i\n",soma);
}
/*------------- Valor negativos -------------*/
void ValorNegativos(int *valores){
  int negativo = 0 ;
  for (int i = 0; i < N; i++) {
    if(valores[i] < 0){
      negativo++;
    } 
  }
  printf("Valores Negativos..: %i\n",negativo);
}
/*-------- Somar os Zero ----------*/
void zero(int *valores){
  int calZero = 0;

  for (int i = 0; i < N; i++) {
    if(valores[i] == 0){
      calZero ++;
    }
  }
  printf("Quantidade de %i ZEROS digitados\n",calZero);
}
