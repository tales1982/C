/*
Faça um programa que leia dois valores inteiros e chame uma função que receba estes
2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
segunda variável. Escreva o conteúdo das 2 variáveis na tela.
**/

/* ======= Bibliotrca ========*/
#include <stdio.h>
#include "prototipo.c"

/* === Prototipo de funcao ===*/
void prototipo(int A, int B);

/*=========== MAIN ===========*/

int main(int A, int B)
{
  
printf("Digite o 1° valor.");
scanf("%i",&A);
setbuf(stdin,NULL);

  
printf("Digite o 2° valor.");
scanf("%i",&B);
setbuf(stdin,NULL);


 
  


prototipo(A,B);


}
