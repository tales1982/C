/*
2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba o maior endereço...
*/

#include <stdio.h>

int main(void)
{
 int A,B;

 if(&A > &B){
    printf("\nO Valor de A = %X, e maior\nque o Valor de B é = %X\n",&A,&B);
 }else{printf("\nO Valor de B = %X, e maior\n que o Valor de A é = %X\n",&B,&A);}


  return(0);
}